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
int32_t aWapAddr[2][32] VTCM_REGION = {{0x00030005,0x00090009,0x00070002,0x00020001,0x00040005,0x00030006,0x00050006,0x00030004,
                                  0x00040005,0x00050002,0x00060007,0x00030001,0x00090004,0x00090007,0x00020006,0x00050007,
                                  0x00090007,0x00060008,0x00020008,0x00020001,0x00070008,0x00090004,0x00010007,0x00050004,
                                  0x00080004,0x00030007,0x00090008,0x00090006,0x00010004,0x00050002,0x00010009,0x00090001},
                                 {0x00090002,0x00060006,0x00040006,0x00080004,0x00040003,0x00050007,0x00080003,0x00050007,
                                  0x00050003,0x00040001,0x00050006,0x00020004,0x00020009,0x00040009,0x00060007,0x00090008,
                                  0x00060009,0x00060002,0x00060008,0x00080003,0x00090005,0x00020008,0x00080005,0x00060006,
                                  0x00050003,0x00020002,0x00050002,0x00040009,0x00070001,0x00020008,0x00070009,0x00060001}};


int32_t gainShiftAdrrZvw[32] VTCM_REGION = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int32_t gainShiftAdrrRvv[64] VTCM_REGION = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                                                         
int32_t op_testzvwWap()
{
    dm2vm((int32_t *)aWapAddr, (int32_t *)VM_SRC1_ADDR, 64);
	  //g_timeBegain = __get_rv_cycle();
  	//g_timeStop   = __get_rv_cycle();
  	//g_timeDelt   = g_timeStop - g_timeBegain;
  	//g_subList[12] = g_timeDelt;
  	//g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl, avl;
    uint32_t vtypeE;

    uint32_t pa = (uint32_t)VM_SRC1_ADDR;
    uint32_t pb = (uint32_t)(VM_SRC1_ADDR + 32*4);
    uint32_t pg = (uint32_t)VM_GAIN_ZVW_ADDR;
    uint32_t *pz = (uint32_t*)VM_RST1_ZVW_ADDR;//uint32_t pz;//
    uint32_t rs2 = 0xFF,syncRd;
    uint32_t vcsrA0M0R0Sa = ACCSFT0 | MULSFT0 | VXRM_RNU | VXSAT1;    
    asm volatile("csrw vcsr,%[vcsrA0M0R0Sa];":: [vcsrA0M0R0Sa] "r" (vcsrA0M0R0Sa));

    avl = 32;
    vtypeE = TA | MA | M1 | E32;
    asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (avl));
    for (int32_t i = 0; i < 100; i++)
    {
    		asm volatile("vle32.v v0, (%[gainShiftAdrrZvw]);" ::[gainShiftAdrrZvw]"r"(pg));
    		asm volatile("vle32.v v1, (%[a0Addr]);" ::[a0Addr]"r"(pa));
    		asm volatile("vdsmacini.v v0;" ::);
    		asm volatile("vle32.v v2, (%[a1Addr]);" ::[a1Addr]"r"(pb));
    		asm volatile("vdscmacj.vv v1,v1;" ::);
    		asm volatile("vdscmacjor.vv v3, v2, v2;" ::);
    		asm volatile("vdscredsum.v v4,v3;" ::);
    		asm volatile("vmv.x.s  %[result], v4;":[result]"=&r"(pz):);
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[4] = g_timeStop - g_timeBegain - g_timeDelt;
    asm volatile("vsync %[syncRd],%[rs2];":[syncRd]"=&r"(syncRd):[rs2]"r"(0xFF));
    return 0;
}

int32_t op_testrvvWap()
{
    dm2vm((int32_t *)aWapAddr, (int32_t *)VM_SRC1_ADDR, 64);
  	//g_timeBegain = __get_rv_cycle();
  	//g_timeStop   = __get_rv_cycle();
  	//g_timeDelt   = g_timeStop - g_timeBegain;
  	//g_subList[13] = g_timeDelt;
  	//g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl, avl;
    uint32_t *pz = (uint32_t*)VM_RST2_RVV_ADDR;
    uint32_t syncRd;

    for (int32_t i = 0; i < 100; i++)
    {
    		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (32));
    		asm volatile("vsub.vv v0, v0,v0;"::);//VALU1
    		asm volatile("vle32.v v2, (%[a0Addr]);"::[a0Addr]"r"(VM_SRC1_ADDR));//LSD
    		asm volatile("vsrl.vx v3, v2, %[num16];"::[num16]"r"(16));//VALU2 IM(L)
    		asm volatile("vle32.v v1, (%[gainShiftAddr]);" ::[gainShiftAddr]"r"(VM_GAIN_RVV_ADDR));//LSD
    		asm volatile("vsll.vx v4, v2, %[num16];"::[num16]"r"(16));//VALU2 RE(H)
    		asm volatile("vle32.v v9, (%[a1Addr]);"::[a1Addr]"r"(VM_SRC1_ADDR + 32*4));//LSD
    		asm volatile("vsrl.vx v5, v4, %[num16];"::[num16]"r"(16));//VALU2 RE(L)
    		asm volatile("vsrl.vx v13, v9, %[num16];"::[num16]"r"(16));//VALU2 IM1(L)
    		asm volatile("vmul.vv v6, v5, v5;"::);//VALU1 RE(L)*RE(L)
    		asm volatile("vsll.vx v14, v9, %[num16];"::[num16]"r"(16));//VALU2 RE1(H)
    		asm volatile("vsra.vx v31, v6, %[mulShfit];"::[mulShfit]"r"(0));//VALU2
    		asm volatile("vmul.vv v7, v3, v3;"::);//VALU1 IM(L)*IM(L)
    		asm volatile("vsrl.vx v15, v14, %[num16];"::[num16]"r"(16));//VALU2 RE1(L)
    		asm volatile("vsra.vx v30, v7, %[mulShfit];"::[mulShfit]"r"(0));//VALU2
    		asm volatile("vmul.vv v17, v13, v13;"::);//VALU1 IM1(L)*IM1(L)
    		asm volatile("vadd.vv v8, v30, v31;"::[num16]"r"(16));//VALU1 RE(L)*RE(L)+IM(L)*IM(L)
    		asm volatile("vmul.vv v16, v15, v15;"::);//VALU1 RE1(L)*RE1(L)
    		asm volatile("vsra.vv v11, v8, v1;"::);//VALU2 vsra(RE(L)*RE(L)+IM(L)*IM(L))
    		asm volatile("vadd.vv v10, v17, v16;"::);//VALU1 RE1(L)*RE1(L)+IM1(L)*IM1(L)
    		asm volatile("vsra.vv v12, v10, v1;"::);//VALU2 vsra(RE1(L)*RE1(L)+IM1(L)*IM1(L))
    		asm volatile("vadd.vv v13, v11, v12;"::);//VALU1
    		asm volatile("vsra.vx v14, v13, %[accShfit];"::[accShfit]"r"(0));//VALU2
    		asm volatile("vredsum.vs v15, v14, v0;"::);//VALU2
    		asm volatile("vmv.x.s  %[result], v15;":[result]"=&r"(*pz):);//VALU2
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[5] = g_timeStop - g_timeBegain - g_timeDelt;
    asm volatile("vsync %[syncRd],%[rs2];":[syncRd]"=&r"(syncRd):[rs2]"r"(0xFF));
    return 0;
}
