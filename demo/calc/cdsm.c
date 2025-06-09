/**
 * Complex Dynamic Scaling MAC
 *
 * 
 */
 /*		 
SC16 VSA[64],VSB[64];

////vdscmacjo 
for (i = 0 ; i < 32; i ++)
{
	Tmp[i].real  = VSA[i].real  * VSB[i].real  + VSA[i].image * VSB[i].image
	Tmp[i].image = VSA[i].image * VSB[i].real - VSA[i].real  * VSB[i].image
}

for (i = 32 ; i < 64; i ++)
{
	Tmp[i].real  = VSA[i].real  * VSB[i].real  + VSA[i].image * VSB[i].image
	Tmp[i].image = VSA[i].image * VSB[i].real - VSA[i].real  * VSB[i].image
}
for (i = 0 ; i < 32; i ++)
{
	VSR[i].real  = Tmp[i].real  + Tmp[i + 32].real
	VSR[i].image = Tmp[i].image + Tmp[i + 32].image
}

//vdscredsum
SUM[i].real  = 0;
SUM[i].image = 0;
for (i = 0 ; i < 32; i ++)
{
	SUM[i].real  += VSR[i].real
	SUM[i].image += VSR[i].image
}
 */
#include <stdio.h>
#include <riscv_vector.h>
#include "op_common.h"
int32_t volatile aCdsmAddr[64] = {0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001};
                                                                
int32_t volatile bCdsmAddr[64] = {0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,
                              0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001,0x00010001};                              

uint16_t imageMaskAddr[8] = {0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA};

int32_t op_testzvwCdsm()
{
	//g_timeBegain = __get_rv_cycle();
	//g_timeStop   = __get_rv_cycle();
	//g_timeDelt   = g_timeStop - g_timeBegain;
	//g_subList[10] = g_timeDelt;
	//g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl, avl;
    uint32_t vtypeE;
    uint32_t rs2 = 0xFF,syncRd;
    uint32_t pa = (uint32_t)VM_SRC1_ADDR;
    uint32_t pb = (uint32_t)VM_SRC2_ADDR;
    uint32_t *pz = (uint32_t*)VM_RST1_ZVW_ADDR;
    uint32_t gainShift = 0;       

    uint32_t vcsrA0M0R0Sa = ACCSFT0 | MULSFT0 | VXRM_RNU | VXSAT1;
    asm volatile("csrw vcsr,%[vcsrA0M0R0Sa];":: [vcsrA0M0R0Sa] "r" (vcsrA0M0R0Sa));
    asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
	asm volatile("vdsmacini.s %[gainShift];" ::[gainShift]"r"(gainShift));
	for (int32_t i = 0; i < 100; i+=2)
    {
		//vtypeE = TA | MA | M2 | E32;
		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
		asm volatile("vle32.v v0, (%[aCdsmAddr]);" ::[aCdsmAddr]"r"(pa));
		asm volatile("vle32.v v2, (%[bCdsmAddr]);" ::[bCdsmAddr]"r"(pb));
		asm volatile("vdscmacjo.vv v10,v0, v2;"::);
		//vtypeE = TA | MA | M1 | E32;
		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (32));
		asm volatile("vdscredsum.v v12,v10;"::);

		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
		asm volatile("vle32.v v4, (%[aCdsmAddr]);" ::[aCdsmAddr]"r"(pa));
		asm volatile("vle32.v v6, (%[bCdsmAddr]);" ::[bCdsmAddr]"r"(pb));

		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (1));
		asm volatile("vmv.x.s  %[result], v12;" :[result]"=&r"(*pz):);

		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
		asm volatile("vdscmacjo.vv v22, v4, v6;"::);

		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (32));
		asm volatile("vdscredsum.v v14,v22;"::);

		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (1));
		asm volatile("vmv.x.s  %[result], v14;" :[result]"=&r"(*pz):);
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[2] = g_timeStop - g_timeBegain - g_timeDelt;
  return 0;
}

int32_t op_testrvvCdsm()
{
	//g_timeBegain = __get_rv_cycle();
	//g_timeStop   = __get_rv_cycle();
	//g_timeDelt   = g_timeStop - g_timeBegain;
	//g_subList[11] = g_timeDelt;
	//g_timeBegain = __get_rv_cycle();
    //asm volatile("fence");
    size_t vl;
    uint32_t vtype1 = TA | MA | M1 | E32;
    uint32_t *pz = (uint32_t *)VM_RST2_RVV_ADDR;
    uint32_t syncRd;

    for (int32_t i = 0; i < 100; i++)
    {
		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (1));
		asm volatile("vmv.v.i v26, 0;");//VALU2
		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
		asm volatile("vle32.v v2, (%[aCdsmAddr]);"::[aCdsmAddr]"r"(VM_SRC1_ADDR));//LSD
		asm volatile("vsrl.vx v6, v2, %[num16];"::[num16]"r"(16));//VALU2 IM0(L)
		asm volatile("vle32.v v4, (%[bCdsmAddr]);"::[bCdsmAddr]"r"(VM_SRC2_ADDR));//LSD
		asm volatile("vsrl.vx v12, v4, %[num16];"::[num16]"r"(16));//VALU2 IM1(L)
		asm volatile("vsll.vx v8, v2, %[num16];"::[num16]"r"(16));//VALU2 RE0(H)
		asm volatile("vsll.vx v30, v4, %[num16];"::[num16]"r"(16));//VALU2 RE1(H)
		asm volatile("vmul.vv v26, v6, v12;"::);//VALU1 IM0(L)*IM1(L)
		asm volatile("vsrl.vx v10, v8, %[num16];"::[num16]"r"(16));//VALU2 RE0(L)
		asm volatile("vsrl.vx v14, v30, %[num16];"::[num16]"r"(16));//VALU2 RE1(L)
		asm volatile("vmul.vv v16, v10, v14;"::);//VALU1  RE0(L)*RE1(L)
		asm volatile("vadd.vv v20, v16, v26;"::);//VALU1   RE0(L)*RE1(L)+IM0(L)*IM1(L)
		asm volatile("vmul.vv v28, v6, v14;"::);//VALU1  IM0(L)*RE1(L)
		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (32));
		asm volatile("vredsum.vs v22, v20, v26;"::);//VALU2
		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (64));
		asm volatile("vmul.vv v18, v10, v12;"::);//VALU1  IM1(L)*RE0(L)
		asm volatile("vsub.vv v24, v28, v18;"::);//VALU1  IM0(L)*RE1(L)-IM1(L)*RE0(L)
		asm volatile("vsetvli %[vl], %[avl],209;":[vl] "=&r" (vl):[avl] "r" (32));
		asm volatile("vredsum.vs v16, v24, v26;"::);//VALU2
		asm volatile("vsetvli %[vl], %[avl],208;":[vl] "=&r" (vl):[avl] "r" (1));
		asm volatile("vsll.vx v0, v16, %[num16];"::[num16]"r"(16));//VALU2
		asm volatile("vxor.vv v2, v0, v22;"::);//VALU1
		asm volatile("vmv.x.s %[result], v2;"::[result]"r"(*pz));//VALU2
    }
    //asm volatile("fence");
    //g_timeStop   = __get_rv_cycle();
    //g_subList[3] = g_timeStop - g_timeBegain - g_timeDelt;
    return 0;
}

