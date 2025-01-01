/**
 * Copyright (c) 2022 - 2023, WingSemi Technology LTD.
 *
 * All rights reserved.
 */
#include <stdio.h>
#include <riscv_vector.h>
#include "op_common.h"

extern int32_t volatile rZvmAddr[32];
extern int32_t volatile rRvvAddr[32];

extern int32_t op_testzvwCcm();
extern int32_t op_testrvvCcm();
extern int32_t op_testzvwCdsm();
extern int32_t op_testrvvCdsm();
extern int32_t op_testzvwWap();
extern int32_t op_testrvvWap();

int main()
{
    int i;
	//ccm
    op_testzvwCcm();
    op_testrvvCcm();
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
    int32_t resZvw = op_testzvwCdsm();
    int32_t resRvv = op_testrvvCdsm();
    if (resZvw == resRvv)
    {
      printf("cdsm succ\n");
    }
    else
    {
      printf("cdsm fail\n");
    }	
	
	//wap
   resZvw = op_testzvwWap();
   resRvv = op_testrvvWap();

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
