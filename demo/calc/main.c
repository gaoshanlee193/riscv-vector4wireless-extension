/**
 * Copyright (c) 2022 - 2023, WingSemi Technology LTD.
 *
 * All rights reserved.
 */
#include <stdio.h>
#include <riscv_vector.h>
#include "op_common.h"
#include "util.h"

extern int32_t volatile rZvmAddr[32];
extern int32_t volatile rRvvAddr[32];

extern int32_t op_testzvwCcm();
extern int32_t op_testrvvCcm();
extern int32_t op_testzvwCdsm();
extern int32_t op_testrvvCdsm();
extern int32_t op_testzvwWap();
extern int32_t op_testrvvWap();
extern void model1_ut();
extern void vdscmul_ut();
extern void vdscmac_ut();
extern void vperm_ut();
extern void vdscmulj_ut1();
extern void vconj_ut();
extern void vdsredsum_ut();
extern void vfsl_ut();
extern void vfsr_ut();
extern void nolinear_recip8_ut();
extern void nolinear_sqrt8_ut();
extern void nolinear_recipSqrt8_ut();
extern void nolinear_arctan8_ut();
extern void nolinear_log2seg8_ut();
extern void nolinear_log10seg8_ut();
extern int32_t op_intrinsicTest1();
extern void vvdscmacjor_utm1();
extern void vvdscmacjor_utm2();
extern void vdscmacjoi_ut();
extern void op_testUnpack();
extern void vdsmul_vs_ut();
extern void vdsmul_vv_ut();
extern void vdsmac_vs_ut();
extern void vdsmac_vv_ut();
extern void vlsb_v_ut();
extern void vcpack_ut1();
extern void vdscredsum_ut();
extern void vdsredsum_ut1();
extern void vdsredsum_ut();
extern void vdsredsumn_ut();
extern void vsll_ut();
extern void vredmaxi_ut();
extern void vredmaxi_m_ut();
extern int32_t op_intrinsicTest1();

void dm2vm(int32_t *pSrc, int32_t *pDst, int32_t len)
{
    int32_t i,j,pos,rest,result;
    int32_t loopNum = (len + 31) >> 5;
    size_t vl;
    uint32_t vtypeL1E32 = MA | TA | M1 | E32;
    for (i = 0; i < loopNum; i++)
    {
        rest = ((i + 1) == loopNum) ? (len - (i << 5)):32;
        for (j = 0; j < rest; j++)
        {
            pos = (i << 5) + j;
            asm volatile("vsetvl %[vl], %[avl], %[vtype]" : [vl] "=r" (vl) : [avl] "r" (1), [vtype] "r" (vtypeL1E32));
            asm volatile("vmv.s.x v2, %[data];": : [data] "r" (pSrc[pos]));

            asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (rest), [vtype] "r" (vtypeL1E32));
            asm volatile("vslideup.vx v4, v2, %[shift];": : [shift] "r" (j));

            asm volatile("vsync %[result], %[vs2];":[result]"=r"(result) :[vs2]"r"(ALL)); 
        }
        asm volatile("vse32.v v4, (%[dstAddr]);": : [dstAddr] "r" (pDst));
        pDst += rest;
    }
}

void vm2dm(int32_t *pSrc, int32_t *pDst, int32_t len)
{
    int32_t i,j,pos,rest,result;
    int32_t loopNum = (len + 31) >> 5;
    size_t vl;
    uint32_t vtypeL1E32 = MA | TA | M1 | E32;
    for (i = 0; i < loopNum; i++)
    {
        rest = ((i + 1) == loopNum) ? (len - (i << 5)):32;
        asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (rest), [vtype] "r" (vtypeL1E32));
        asm volatile("vle32.v v4, (%[srcAddr]);": : [srcAddr] "r" (pSrc));
        for (j = 0; j < rest; j++)
        {
            pos = (i << 5) + j;
            asm volatile("vsetvl %[vl], %[avl], %[vtype]" : [vl] "=r" (vl) : [avl] "r" (1), [vtype] "r" (vtypeL1E32));
            asm volatile("vmv.x.s %[data], v4;":[data] "=r" (pDst[pos]));

            asm volatile("vsync %[result], %[vs2];":[result]"=r"(result) :[vs2]"r"(ALL)); 

            asm volatile("vsetvl %[vl], %[avl], %[vtype]": [vl] "=r" (vl) : [avl] "r" (rest), [vtype] "r" (vtypeL1E32));
            asm volatile("vslidedown.vx v4, v4, %[shift];": : [shift] "r" (1));
            
            asm volatile("vsync %[result], %[vs2];":[result]"=r"(result) :[vs2]"r"(ALL)); 
        }
        pSrc += rest;
    }
}

int main()
{
    asm volatile("c.lui a0,0x10;"::);
    asm volatile("csrs mstatus, a0;"::);

    int i;
    op_intrinsicTest1();
    // test case
    vcpack_ut1();
#if 1
    op_testUnpack();
    vdscmac_ut();
    vvdscmacjor_utm1();
    vdscmacjoi_ut();
    vdsmul_vs_ut();
    vdsmul_vv_ut();
    vdsmac_vs_ut();
    vdsmac_vv_ut();
    vlsb_v_ut();
    vdsredsum_ut1();
    vdscredsum_ut();
    vdsredsum_ut();
    //vdsredsumn_ut();
    vredmaxi_ut();
    vredmaxi_m_ut();
   
    nolinear_recip8_ut();
    nolinear_sqrt8_ut();
    nolinear_recipSqrt8_ut();
    nolinear_arctan8_ut();
    nolinear_log2seg8_ut();
    nolinear_log10seg8_ut();
    
    // test case
    vdscmulj_ut1();
    vconj_ut();
    vfsl_ut();
    vfsr_ut();
    //model1_ut();
    vdscmul_ut();
    vperm_ut();
#endif

    //ccm
    long beginTime, endTime, usedTime;
    setStats(1);
    beginTime = getCounter();
    op_testzvwCcm();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testzvwCcm usedTime: %p\n", usedTime);

    setStats(1);
    beginTime = getCounter(); 
    op_testrvvCcm();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testrvvCcm usedTime: %p\n", usedTime);

    for (i = 0; i < 32 ; i++)
    {
      if (rZvmAddr[i] != rRvvAddr[i])
      {
        printf("ccm fail\n");
        break;
      }
    }
	if (i >= 32)
	{
        printf("ccm succ\n");
	}
	
	//cdsm
    setStats(1);
    beginTime = getCounter();
    int32_t resZvw = op_testzvwCdsm();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testrvvCcm usedTime: %p\n", usedTime);

    setStats(1);
    beginTime = getCounter();
    int32_t resRvv = op_testrvvCdsm();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testrvvCcm usedTime: %p\n", usedTime);
    if (resZvw == resRvv)
    {
      printf("cdsm succ\n");
    }
    else
    {
      printf("cdsm fail\n");
    }	
	
	//wap
    setStats(1);
    beginTime = getCounter();
    resZvw = op_testzvwWap();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testrvvCcm usedTime: %p\n", usedTime);

    setStats(1);
    beginTime = getCounter();
    resRvv = op_testrvvWap();
    endTime = getCounter();
    setStats(0);
    usedTime = endTime - beginTime;
    printf("op_testrvvCcm usedTime: %p\n", usedTime);

    if (resZvw == resRvv)
    {
      printf("wap succ %x \n",resRvv);
    }
    else
    {
      printf("wap fail resZvw %x ,resRvv %x\n", resZvw, resRvv);
    }

    return 0;
}
