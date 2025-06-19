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
int32_t volatile aAddr[32] VTCM_REGION = {0x00030005,0x00090009,0x00070002,0x00020001,0x00040005,0x00030006,0x00050006,0x00030004,
			      0x00040005,0x00050002,0x00060007,0x00030001,0x00090004,0x00090007,0x00020006,0x00050007,
			      0x00090007,0x00060008,0x00020008,0x00020001,0x00070008,0x00090004,0x00010007,0x00050004,
			      0x00080004,0x00030007,0x00090008,0x00090006,0x00010004,0x00050002,0x00010009,0x00090001};
                                                                
int32_t volatile bAddr[32] VTCM_REGION = {0x00090002,0x00060006,0x00040006,0x00080004,0x00040003,0x00050007,0x00080003,0x00050007,
			      0x00050003,0x00040001,0x00050006,0x00020004,0x00020009,0x00040009,0x00060007,0x00090008,
			      0x00060009,0x00060002,0x00060008,0x00080003,0x00090005,0x00020008,0x00080005,0x00060006,
			      0x00050003,0x00020002,0x00050002,0x00040009,0x00070001,0x00020008,0x00070009,0x00060001}; 

int32_t volatile rZvmAddr[32] VTCM_REGION = {0};
int32_t volatile rRvvAddr[32] VTCM_REGION = {0};

uint16_t imageCcmMaskAddr[4] VTCM_REGION = {0xAAAA,0xAAAA,0xAAAA,0xAAAA};

int32_t op_testzvwCcm()
{
    dm2vm((int32_t *)aAddr, (int32_t *)VM_SRC1_ADDR, 32);
    dm2vm((int32_t *)bAddr, (int32_t *)VM_SRC2_ADDR, 32);
	  //g_timeBegain = __get_rv_cycle();
	  //g_timeStop   = __get_rv_cycle();
	  //g_timeDelt   = g_timeStop - g_timeBegain;
	  //g_subList[8] = g_timeDelt;
	  //g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl, avl = 32;
    uint32_t vtypeE32;

    uint32_t rs2 = 0xFF,syncRd;
    uint32_t vcsrA0M0R0Sa = ACCSFT0 | MULSFT0 | VXRM_RNU | VXSAT1;    
    asm volatile("csrw vcsr,%[vcsrA0M0R0Sa];":: [vcsrA0M0R0Sa] "r" (vcsrA0M0R0Sa));
    uint32_t pa = (uint32_t )VM_SRC1_ADDR;
    uint32_t pb = (uint32_t )VM_SRC2_ADDR;
    uint32_t pz = (uint32_t )VM_RST1_ZVW_ADDR;
    vtypeE32 = TA | MA | M1 | E32;
  	asm volatile("vsetvli %[vl], %[avl], 208;":[vl] "=&r" (vl):[avl] "r" (avl));
    for (int32_t i = 0; i < 100; i++)
    {
    		asm volatile("vle32.v v2, (%[aAddr]);" ::[aAddr]"r"(pa));
    		asm volatile("vle32.v v1, (%[bAddr]);" ::[bAddr]"r"(pb));
    		asm volatile("vdscmulj.vv v4, v2, v1;"::);
    		asm volatile("vse32.v  v4, (%[rZvmAddr]);" ::[rZvmAddr]"r"(pz));
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[0] = g_timeStop - g_timeBegain - g_timeDelt;
    asm volatile("vsync %[syncRd],%[rs2];":[syncRd]"=&r"(syncRd):[rs2]"r"(0xFF));
    return 0;
}

int32_t op_testrvvCcm()
{
    dm2vm((int32_t *)aAddr, (int32_t *)VM_SRC1_ADDR, 32);
    dm2vm((int32_t *)bAddr, (int32_t *)VM_SRC2_ADDR, 32);
  	//g_timeBegain = __get_rv_cycle();
  	//g_timeStop   = __get_rv_cycle();
	  //g_timeDelt   = g_timeStop - g_timeBegain;
	  //g_subList[9] = g_timeDelt;
	  //g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl, avl = 32;
    uint32_t vtypeE;

    uint32_t rs2 = 0xFF,syncRd;
    uint32_t num0 = 0;
    uint32_t num1 = 1;
    uint32_t pa = (uint32_t)VM_SRC1_ADDR;
    uint32_t pb = (uint32_t)VM_SRC2_ADDR;
    uint32_t pz = (uint32_t)VM_RST2_RVV_ADDR;
    uint32_t pm = (uint32_t)VM_MASK_ADDR;
    for (int32_t i = 0; i < 100; i++)
    {
    		avl = 64;
    		vtypeE = TA | MA | M2 | E32;
    		asm volatile("vsetvli %[vl], %[avl], 209;":[vl] "=&r" (vl):[avl] "r" (avl));
    		asm volatile("vlm.v v0, (%[imageCcmMaskAddr]);"::[imageCcmMaskAddr]"r"(pm));
    		vtypeE = TA | MA | M1 | E16;
    		asm volatile("vsetvli %[vl], %[avl], 200;":[vl] "=&r" (vl):[avl] "r" (avl));
    		asm volatile("vsub.vv v1, v1,v1;"::);
    		asm volatile("vle16.v v4, (%[aAddr]);"::[aAddr]"r"(pa));
    		asm volatile("vle16.v v5, (%[bAddr]);"::[bAddr]"r"(pb));
    		asm volatile("vmerge.vvm v2,v1,v4,v0;"::);
    		asm volatile("vmerge.vvm v31,v4,v1,v0;"::);
    		asm volatile("vslidedown.vi	v30,v2,1;"::);
    		asm volatile("vmerge.vvm	v27,v1,v5,v0;"::);
    		asm volatile("vmerge.vvm	v28,v5,v1,v0;"::);
    		asm volatile("vslidedown.vi	v3,v27,1;"::);
    		asm volatile("vmul.vv	v25,v31,v28;"::);
    		asm volatile("vmul.vv	v6,v30,v3;"::);
    		asm volatile("vmul.vv	v7,v31,v3;"::);
    		asm volatile("vmul.vv	v8,v30,v28;"::);
    		asm volatile("vadd.vv	v1,v25,v6;"::);
    		asm volatile("vsub.vv	v2,v8,v7;"::);
    		asm volatile("vslideup.vx	v23,v2,%[num1];"::[num1]"r"(num1));
    		asm volatile("vmerge.vvm	v29,v1,v23,v0;"::);
    		asm volatile("vse16.v	v29,(%[rRvvAddr]);"::[rRvvAddr]"r"(pz));
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[1] = g_timeStop - g_timeBegain - g_timeDelt;
    asm volatile("vsync %[syncRd],%[rs2];":[syncRd]"=&r"(syncRd):[rs2]"r"(0xFF));
    return 0;
}
