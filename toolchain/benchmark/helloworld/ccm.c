/**
 * Conjugate Complex Multiply
 *
 * 
 */
 /*		 
SC16 VSA[32],VSB[32];
 
for (i = 0 ; i < 32; i ++)
{
	VSR[i].real  = VSA[i].real  * VSB[i].real  + VSA[i].image * VSB[i].image
	VSR[i].image = VSA[i].image * VSB[i].real - VSA[i].real  * VSB[i].image
}
 */
#include <stdio.h>
#include <riscv_vector.h>
#include "op_common.h"
int32_t volatile aAddr[32] = {0x00030005,
0x00090009,
0x00070002,
0x00020001,
0x00040005,
0x00030006,
0x00050006,
0x00030004,
0x00040005,
0x00050002,
0x00060007,
0x00030001,
0x00090004,
0x00090007,
0x00020006,
0x00050007,
0x00090007,
0x00060008,
0x00020008,
0x00020001,
0x00070008,
0x00090004,
0x00010007,
0x00050004,
0x00080004,
0x00030007,
0x00090008,
0x00090006,
0x00010004,
0x00050002,
0x00010009,
0x00090001
};
                                                                
int32_t volatile bAddr[32] = {0x00090002,
0x00060006,
0x00040006,
0x00080004,
0x00040003,
0x00050007,
0x00080003,
0x00050007,
0x00050003,
0x00040001,
0x00050006,
0x00020004,
0x00020009,
0x00040009,
0x00060007,
0x00090008,
0x00060009,
0x00060002,
0x00060008,
0x00080003,
0x00090005,
0x00020008,
0x00080005,
0x00060006,
0x00050003,
0x00020002,
0x00050002,
0x00040009,
0x00070001,
0x00020008,
0x00070009,
0x00060001
}; 

int32_t volatile rZvmAddr[32] = {0};
int32_t volatile rRvvAddr[32] = {0};

uint16_t imageCcmMaskAddr[4] = {0xAAAA,0xAAAA,0xAAAA,0xAAAA};

int32_t op_testzvwCcm()
{
    size_t vl, avl;
    uint32_t vtypeE32;
    avl = VLEN / SEW32;
    vtypeE32 = TA | MA | M1 | E32;
    uint32_t gainShift = 0;       
    vint32m1_t volatile vA0;
    vint32m1_t volatile vA1;
    vint32m1_t volatile vR;

    asm volatile("vsetvl %[vl], %[avl], %[vtype];\
                  vdsmacini.s %[gainShift];\
                  vle32.v %[vA0], (%[aAddr]);\
                  vle32.v %[vA1], (%[bAddr]);\
                  vdscmulj.vv v4, %[vA0], %[vA1];\
                  vse32.v  v4, (%[rZvmAddr]);" 
                  :[vl] "=r" (vl),[vA0]"+vr"(vA0),[vA1]"+vr"(vA1)
                  :[avl] "r" (avl), [vtype] "r" (vtypeE32),[gainShift]"r"(gainShift),[aAddr]"r"(aAddr),[bAddr]"r"(bAddr),[rZvmAddr]"r"(rZvmAddr));    
    return 0;
}

int32_t op_testrvvCcm()
{
    size_t vl, avl;
    uint32_t vtypeE32;
       
    avl = VLEN / SEW16;
    vtypeE32 = TA | MA | M1 | E16;

    
    vint16m1_t vZero;
    vint16m1_t vA,vB,vR;
    vint16m1_t vAimage,vAreal,vBimage,vBreal,vReal1,vReal2,vImage1,vImage2,vReal,vImage,vResult;
    
    asm ("vsetvl %[vl], %[avl], %[vtype];\
                  vlm.v v0, (%[imageCcmMaskAddr]);\
                  vmv.v.i %[vZero], 0;\
                  vle16.v %[vA], (%[aAddr]);\
                  vle16.v %[vB], (%[bAddr]);\
                  vmerge.vvm %[vAimage], %[vZero], %[vA], v0;\
                  vmerge.vvm %[vAreal], %[vA], %[vZero], v0;\
                  vslidedown.vi %[vAimage], %[vAimage], 1;\
                  vmerge.vvm %[vBimage], %[vZero], %[vB], v0;\
                  vmerge.vvm %[vBreal], %[vB], %[vZero], v0;\
                  vslidedown.vi %[vBimage], %[vBimage], 1;"
                 :[vl] "=r" (vl),[vZero]"+vr"(vZero),[vA]"+vr"(vA),[vB]"+vr"(vB),[vAimage]"+vr"(vAimage),[vAreal]"+vr"(vAreal),[vBimage]"+vr"(vBimage),[vBreal]"+vr"(vBreal)
                 :[avl] "r" (avl), [vtype] "r" (vtypeE32),[imageCcmMaskAddr]"r"(imageCcmMaskAddr),[aAddr]"r"(aAddr),[bAddr]"r"(bAddr),[rRvvAddr]"r"(rRvvAddr));
                 
    asm volatile("vmul.vv v10, %[vAreal], %[vBreal];\
                  vmul.vv v11, %[vAimage], %[vBimage];\
                  vmul.vv v12, %[vAreal], %[vBimage];\
                  vmul.vv v13, %[vAimage], %[vBreal];\
                  vadd.vv v14, v10, v11;\
                  vsub.vv v15,v13, v12;\
                  vslideup.vi v17, v15, 1;\
                  vmerge.vvm v16, v14, v17, v0;\
                  vse16.v  v16, (%[rRvvAddr]);"
                 :
                 :[vAimage]"vr"(vAimage),[vAreal]"vr"(vAreal),[vBimage]"vr"(vBimage),[vBreal]"vr"(vBreal),[rRvvAddr]"r"(rRvvAddr));                 
                                                   
    return 0;
}

