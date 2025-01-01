/**
 * Wideband Average Power
 *
 * 
 */
 /*		 
SC16 A[2][32]

for (i = 0; i < 32; i++)
{
  R[i] = (pow2(A[0][i].r)  + pow2(A[0][i].i) + pow2(A[1][i].r) + pow2(A[1][i].i)) >> gainshift[i];
}

sum = 0;
for (i = 0; i < 32; i++)
{
   sum += R[i];
}
 */
#include <stdio.h>
#include <riscv_vector.h>
#include "op_common.h"
int32_t aWapAddr[2][32] = {{0x00030005,0x00090009,0x00070002,0x00020001,0x00040005,0x00030006,0x00050006,0x00030004,
                                  0x00040005,0x00050002,0x00060007,0x00030001,0x00090004,0x00090007,0x00020006,0x00050007,
                                  0x00090007,0x00060008,0x00020008,0x00020001,0x00070008,0x00090004,0x00010007,0x00050004,
                                  0x00080004,0x00030007,0x00090008,0x00090006,0x00010004,0x00050002,0x00010009,0x00090001},
                                 {0x00090002,0x00060006,0x00040006,0x00080004,0x00040003,0x00050007,0x00080003,0x00050007,
                                  0x00050003,0x00040001,0x00050006,0x00020004,0x00020009,0x00040009,0x00060007,0x00090008,
                                  0x00060009,0x00060002,0x00060008,0x00080003,0x00090005,0x00020008,0x00080005,0x00060006,
                                  0x00050003,0x00020002,0x00050002,0x00040009,0x00070001,0x00020008,0x00070009,0x00060001}};

#if 0 //0      
//zvw vdsmacini.v 寄存器从结果看没无效呢？ vdsmacini.s可以看到结果变化                 
int32_t gainShiftAdrrZvw[32] = {0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0};     
int32_t gainShiftAdrrRvv[64] = {0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,
                                0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0};   
#else
int32_t gainShiftAdrrZvw[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int32_t gainShiftAdrrRvv[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
#endif                                                          
int32_t op_testzvwWap()
{
    size_t vl, avl;
    uint32_t vtypeE;
    
    avl = 32;
    vtypeE = TA | MA | M1 | E32;

    vint32m1_t vZero;
    vint32m1_t vA0,vA1,vSum,vR;
    int32_t *a0Addr = aWapAddr[0];
    int32_t *a1Addr = aWapAddr[1];
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE));
#if 0 //1    
    uint32_t shift = 0;
    asm volatile("vdsmacini.s %[shift];" 
                  :
                  :[shift]"r"(shift));    
#else
    //从debug 看v18中的结果不是地址中的数据全0，怀疑load异常。如果把数组最后一个值改为1，可以load到地址中的内容。
    asm volatile("vle32.v v18, (%[gainShiftAdrrZvw]);\
                  vdsmacini.v v18;" 
                  :
                  :[gainShiftAdrrZvw]"r"(gainShiftAdrrZvw));                                
#endif                      
#if 0 //1  

    //累加寄存器初始值不为0，此段为规避代码
    asm volatile("vmv.v.i %[vZero], 0;"
                 :[vZero]"=vr"(vZero)
                 :);
    asm volatile("vdscmacjor.vv v18, %[vZero], %[vZero];" 
                  :
                  :[vZero]"vr"(vZero));                 
#endif   
#if 1 //0   
    asm ("vle32.v %[vA0], (%[a0Addr]);\
                  vdscmacj.vv %[vA0],%[vA0];\
                  vle32.v %[vA1], (%[a1Addr]);\
                  vdscmacjor.vv %[vSum], %[vA1], %[vA1];\
                  vdscredsum.v %[vR],%[vSum]" 
                  :[vA0]"+vr"(vA0),[vA1]"+vr"(vA1),[vSum]"+vr"(vSum),[vR]"+vr"(vR)
                  :[a0Addr]"r"(a0Addr),[a1Addr]"r"(a1Addr));  
#else
    asm volatile("vle32.v v10, (%[a0Addr]);\
                  vdscmacj.vv v10,v10;\
                  vle32.v v12, (%[a1Addr]);\
                  vdscmacjor.vv v14, v12, v12;\
                  vdscredsum.v v16,v14" 
                  :
                  :[a0Addr]"r"(a0Addr),[a1Addr]"r"(a1Addr));   
#endif                  
  int32_t  volatile result;
  asm volatile("vmv.x.s  %[result], v16;"
               :[result]"=r"(result)
               :[vR]"vr"(vR));               
    return result;
}

int32_t op_testrvvWap()
{
    size_t vl, avl;
    uint32_t vtypeE;

    int32_t *a0Addr = aWapAddr[0];
    int32_t *a1Addr = aWapAddr[1];    
    vint16m1_t vA,vB;
    vint32m2_t vAcc;
    vint32m2_t vShift,vSum;
    
#if 0 //1
    uint32_t one = 1;
    avl = 32;
    vtypeE = TA | MA | M1 | E32;
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE));   
    vint32m1_t vShift32m1;
    asm volatile("vle32.v v2, (%[gainShiftAddr]);\
                  vsll.vi v3, v2, 16;\
                  vor.vv  v4, v2,v3;" 
                  :
                  :[gainShiftAddr]"r"(gainShiftAdrrZvw));

    vtypeE = M1 | E16;
    avl = 64;
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE)); 
    asm volatile("vwmul.vx v6, v4, %[one];" 
                  :
                  :[one]"r"(one));                    
#endif    

    avl = 64;
    vtypeE = TA | MA | M2 | E32;
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE));
    asm volatile("vmv.v.i %[vAcc], 0;"
                 :[vAcc]"=vr"(vAcc)
                 :);    
#if 1 //0 
    //debug gain 的代码 不需要上面的运算，直接load gainShift                
    asm volatile("vle32.v %[vShift], (%[gainShiftAddr]);\
                  vdsmacini.v %[vShift];" 
                  :[vShift]"+vr"(vShift)
                  :[gainShiftAddr]"r"(gainShiftAdrrRvv));     
    
#endif    
    vtypeE = M1 | E16;
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE));              
    asm volatile("vle16.v %[vA], (%[a0Addr]);\
                  vwmul.vv v10,%[vA],%[vA];\
                  vle16.v %[vB], (%[a1Addr]);\
                  vwmul.vv v12,%[vB],%[vB]"
                 :[vA]"+vr"(vA),[vB]"+vr"(vB)
                 :[a0Addr]"r"(a0Addr),[a1Addr]"r"(a1Addr));

    vtypeE = M2 | E32;
    asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (avl), [vtype] "r" (vtypeE));                                 
    asm volatile("vsra.vv v14, v10, %[vShift];\
                  vsra.vv v16, v12, %[vShift];\
                  vadd.vv v18, v14, v16;\
                  vsra.vi v20, v18, 0;\
                  vredsum.vs %[vSum], v20, %[vAcc];"
                 :[vSum]"=vr"(vSum)
                 :[vShift]"vr"(vShift), [vAcc]"vr"(vAcc));   
                 
  int32_t  volatile result;
  asm volatile("vmv.x.s  %[result], %[vSum];"
               :[result]"=r"(result)
               :[vSum]"vr"(vSum));                                 
    return result;
}
