
/**
 * @file: op_common.h
 * @desc: header file for type definitions
 * 
 * @author: RiscV Team, XS Tech
 * @date: 07/07/2024
 */
#ifndef _OP_COMMON_TYPE_DEF_H_
#define _OP_COMMON_TYPE_DEF_H_

#include <riscv_vector.h>

//---------------------------------------------------
#define VLEN    (1024)
#define SEW8    (8)
#define SEW16   (16)
#define SEW32   (32)
#define SEW64   (64)

#define LMUL1   (1)
#define LMUL2   (2)
#define LMUL4   (4)
#define LMUL8   (8)
//---------------------vtype csr------------------------------
#define M1  (0)
#define M2  (1)
#define M4  (2)
#define M8  (3)

#define E8    (0 << 3)
#define E16   (1 << 3)
#define E32   (2 << 3)
#define E64   (3 << 3)

#define TA    (1 << 6)
#define MA    (1 << 7)


//---------------------vxsat csr------------------------------
#define VXSAT0     (0)//Fixed-Point Saturate Flag
#define VXSAT1     (1)//Fixed-Point Saturate Flag

//---------------------vxrm csr------------------------------
#define VXRM_RNU   (0 << 1)//round-to-nearest-up (add +0.5 LSB)
#define VXRM_RNE   (1 << 1)//round-to-nearest-even
#define VXRM_RDN   (2 << 1)//round-down (truncate)
#define VXRM_ROD   (3 << 1)//round-to-odd (OR bits into LSB, aka "jam")

//---------------------vcsr csr------------------------------
#define VXSAR0     (0)
#define VXSAR1     (1)

#define VXRM0      (0 << 1)
#define VXRM1      (1 << 1)
#define VXRM2      (2 << 1)
#define VXRM3      (3 << 1)

#define MULSFT0    (0 << 3)
#define MULSFT1    (1 << 3)
#define MULSFT2    (2 << 3)
#define MULSFT3    (3 << 3)
#define MULSFT4    (4 << 3)
#define MULSFT5    (5 << 3)
#define MULSFT6    (6 << 3)
#define MULSFT7    (7 << 3)
#define MULSFT8    (8 << 3)
#define MULSFT9    (9 << 3)
#define MULSFT10   (10 << 3)
#define MULSFT11   (11 << 3)
#define MULSFT12   (12 << 3)
#define MULSFT13   (13 << 3)
#define MULSFT14   (14 << 3)
#define MULSFT15   (15 << 3)
#define MULSFT16   (16 << 3)
#define MULSFT17   (17 << 3)
#define MULSFT18   (18 << 3)
#define MULSFT19   (19 << 3)
#define MULSFT20   (20 << 3)
#define MULSFT21   (21 << 3)
#define MULSFT22   (22 << 3)
#define MULSFT23   (23 << 3)
#define MULSFT24   (24 << 3)
#define MULSFT25   (25 << 3)
#define MULSFT26   (26 << 3)
#define MULSFT27   (27 << 3)
#define MULSFT28   (28 << 3)
#define MULSFT29   (29 << 3)
#define MULSFT30   (30 << 3)
#define MULSFT31   (31 << 3)

#define ACCSFT0    (0 << 8)
#define ACCSFT1    (1 << 8)
#define ACCSFT2    (2 << 8)
#define ACCSFT3    (3 << 8)
#define ACCSFT4    (4 << 8)
#define ACCSFT5    (5 << 8)
#define ACCSFT6    (6 << 8)
#define ACCSFT7    (7 << 8)
#define ACCSFT8    (8 << 8)
#define ACCSFT9    (9 << 8)
#define ACCSFT10   (10 << 8)
#define ACCSFT11   (11 << 8)
#define ACCSFT12   (12 << 8)
#define ACCSFT13   (13 << 8)
#define ACCSFT14   (14 << 8)
#define ACCSFT15   (15 << 8)
#define ACCSFT16   (16 << 8)
#define ACCSFT17   (17 << 8)
#define ACCSFT18   (18 << 8)
#define ACCSFT19   (19 << 8)
#define ACCSFT20   (20 << 8)
#define ACCSFT21   (21 << 8)
#define ACCSFT22   (22 << 8)
#define ACCSFT23   (23 << 8)
#define ACCSFT24   (24 << 8)
#define ACCSFT25   (25 << 8)
#define ACCSFT26   (26 << 8)
#define ACCSFT27   (27 << 8)
#define ACCSFT28   (28 << 8)
#define ACCSFT29   (29 << 8)
#define ACCSFT30   (30 << 8)
#define ACCSFT31   (31 << 8)

#define FSFT0      (0 << 13)
#define FSFT1      (1 << 13)
#define FSFT2      (2 << 13)
#define FSFT3      (3 << 13)
#define FSFT4      (4 << 13)
#define FSFT5      (5 << 13)
#define FSFT6      (6 << 13)
#define FSFT7      (7 << 13)
#define FSFT8      (8 << 13)
#define FSFT9      (9 << 13)
#define FSFT10     (10 << 13)
#define FSFT11     (11 << 13)
#define FSFT12     (12 << 13)
#define FSFT13     (13 << 13)
#define FSFT14     (14 << 13)
#define FSFT15     (15 << 13)
#define FSFT16     (16 << 13)
#define FSFT17     (17 << 13)
#define FSFT18     (18 << 13)
#define FSFT19     (19 << 13)
#define FSFT20     (20 << 13)
#define FSFT21     (21 << 13)
#define FSFT22     (22 << 13)
#define FSFT23     (23 << 13)
#define FSFT24     (24 << 13)
#define FSFT25     (25 << 13)
#define FSFT26     (26 << 13)
#define FSFT27     (27 << 13)
#define FSFT28     (28 << 13)
#define FSFT29     (29 << 13)
#define FSFT30     (30 << 13)
#define FSFT31     (31 << 13)

//---------------------cnltcr csr------------------------------
#define FUNC_RECIP         (0)
#define FUNC_SQUARE        (1)
#define FUNC_RECIP_SQYARE  (2)
#define FUNC_LOG2          (3)
#define FUNC_ARCTAN        (4)
#define SEG4               (0 << 16)
#define SEG8               (1 << 16)
#define SEG12              (2 << 16)
#define SEG416             (3 << 16)

//---------------------------------------------------
#define MAX_RX_NUM              (2)
#define MAX_CDM_GROUP_NUM       (3)

//---------------------------------------------------
#define SSB_FFT_N               (256)

//---------------------------------------------------
enum enumRsType
{
    PDSCH_DMRS_TYPE1,
    PDSCH_DMRS_TYPE2,
    PDCCH_DMRS,
    PBCH_DMRS,
    TRS,
    RSTYPE_NUM
};

enum enumScs
{
    SCS0,     //15k
    SCS1,     //30k
    SCS_NUM   //support scs number
};

//---------------------------------------------------
typedef struct _cint16
{
    int16_t real;
    int16_t img;
}cint16_t;

typedef struct _cint32
{
    int16_t real;
    int16_t img;
}cint32_t;

//---------------------------------------------------
#define SC16_SIZE	(sizeof(cint16_t))
#define S32_SIZE	(sizeof(int32_t))
#define U32_SIZE	(sizeof(uint32_t))
#define S16_SIZE	(sizeof(int16_t))
#define U16_SIZE	(sizeof(uint16_t))

//---------------------------------------------------


#endif /* _OP_COMMON_TYPE_DEF_H_ */
