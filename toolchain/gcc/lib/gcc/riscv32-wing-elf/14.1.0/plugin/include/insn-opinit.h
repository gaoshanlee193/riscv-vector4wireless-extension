/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#ifndef GCC_INSN_OPINIT_H
#define GCC_INSN_OPINIT_H 1
enum optab_tag {
  unknown_optab,
  sext_optab,
  trunc_optab,
  zext_optab,
  sfix_optab,
  ufix_optab,
  sfloat_optab,
  ufloat_optab,
  lrint_optab,
  lround_optab,
  lfloor_optab,
  lceil_optab,
  fract_optab,
  fractuns_optab,
  satfract_optab,
  satfractuns_optab,
  sfixtrunc_optab,
  ufixtrunc_optab,
  smul_widen_optab,
  umul_widen_optab,
  usmul_widen_optab,
  smadd_widen_optab,
  umadd_widen_optab,
  ssmadd_widen_optab,
  usmadd_widen_optab,
  smsub_widen_optab,
  umsub_widen_optab,
  ssmsub_widen_optab,
  usmsub_widen_optab,
  vec_load_lanes_optab,
  vec_store_lanes_optab,
  vec_mask_load_lanes_optab,
  vec_mask_store_lanes_optab,
  vec_mask_len_load_lanes_optab,
  vec_mask_len_store_lanes_optab,
  vcond_optab,
  vcondu_optab,
  vcondeq_optab,
  vcond_mask_optab,
  vec_cmp_optab,
  vec_cmpu_optab,
  vec_cmpeq_optab,
  maskload_optab,
  maskstore_optab,
  mask_len_load_optab,
  mask_len_store_optab,
  gather_load_optab,
  mask_gather_load_optab,
  mask_len_gather_load_optab,
  scatter_store_optab,
  mask_scatter_store_optab,
  mask_len_scatter_store_optab,
  vec_extract_optab,
  vec_init_optab,
  while_ult_optab,
  add_optab,
  addv_optab,
  ssadd_optab,
  usadd_optab,
  sub_optab,
  subv_optab,
  sssub_optab,
  ussub_optab,
  smul_optab,
  smulv_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  sdivv_optab,
  ssdiv_optab,
  udiv_optab,
  usdiv_optab,
  sdivmod_optab,
  udivmod_optab,
  smod_optab,
  umod_optab,
  ftrunc_optab,
  and_optab,
  ior_optab,
  xor_optab,
  ashl_optab,
  ssashl_optab,
  usashl_optab,
  ashr_optab,
  lshr_optab,
  rotl_optab,
  rotr_optab,
  vashl_optab,
  vashr_optab,
  vlshr_optab,
  vrotl_optab,
  vrotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  neg_optab,
  negv_optab,
  ssneg_optab,
  usneg_optab,
  abs_optab,
  absv_optab,
  one_cmpl_optab,
  bswap_optab,
  ffs_optab,
  clz_optab,
  ctz_optab,
  clrsb_optab,
  popcount_optab,
  parity_optab,
  cmp_optab,
  ucmp_optab,
  eq_optab,
  ne_optab,
  gt_optab,
  ge_optab,
  lt_optab,
  le_optab,
  unord_optab,
  powi_optab,
  sqrt_optab,
  sync_old_add_optab,
  sync_old_sub_optab,
  sync_old_ior_optab,
  sync_old_and_optab,
  sync_old_xor_optab,
  sync_old_nand_optab,
  sync_new_add_optab,
  sync_new_sub_optab,
  sync_new_ior_optab,
  sync_new_and_optab,
  sync_new_xor_optab,
  sync_new_nand_optab,
  sync_compare_and_swap_optab,
  sync_lock_test_and_set_optab,
  mov_optab,
  movstrict_optab,
  movmisalign_optab,
  storent_optab,
  insv_optab,
  extv_optab,
  extzv_optab,
  insvmisalign_optab,
  extvmisalign_optab,
  extzvmisalign_optab,
  push_optab,
  reload_in_optab,
  reload_out_optab,
  cbranch_optab,
  tbranch_eq_optab,
  tbranch_ne_optab,
  addcc_optab,
  negcc_optab,
  notcc_optab,
  movcc_optab,
  cond_add_optab,
  cond_sub_optab,
  cond_smul_optab,
  cond_sdiv_optab,
  cond_smod_optab,
  cond_udiv_optab,
  cond_umod_optab,
  cond_and_optab,
  cond_ior_optab,
  cond_xor_optab,
  cond_ashl_optab,
  cond_ashr_optab,
  cond_lshr_optab,
  cond_smin_optab,
  cond_smax_optab,
  cond_umin_optab,
  cond_umax_optab,
  cond_copysign_optab,
  cond_fmin_optab,
  cond_fmax_optab,
  cond_fma_optab,
  cond_fms_optab,
  cond_fnma_optab,
  cond_fnms_optab,
  cond_neg_optab,
  cond_one_cmpl_optab,
  cond_len_add_optab,
  cond_len_sub_optab,
  cond_len_smul_optab,
  cond_len_sdiv_optab,
  cond_len_smod_optab,
  cond_len_udiv_optab,
  cond_len_umod_optab,
  cond_len_and_optab,
  cond_len_ior_optab,
  cond_len_xor_optab,
  cond_len_ashl_optab,
  cond_len_ashr_optab,
  cond_len_lshr_optab,
  cond_len_smin_optab,
  cond_len_smax_optab,
  cond_len_umin_optab,
  cond_len_umax_optab,
  cond_len_copysign_optab,
  cond_len_fmin_optab,
  cond_len_fmax_optab,
  cond_len_fma_optab,
  cond_len_fms_optab,
  cond_len_fnma_optab,
  cond_len_fnms_optab,
  cond_len_neg_optab,
  cond_len_one_cmpl_optab,
  vcond_mask_len_optab,
  cmov_optab,
  cstore_optab,
  ctrap_optab,
  addv4_optab,
  subv4_optab,
  mulv4_optab,
  uaddv4_optab,
  usubv4_optab,
  umulv4_optab,
  negv3_optab,
  uaddc5_optab,
  usubc5_optab,
  addptr3_optab,
  spaceship_optab,
  smul_highpart_optab,
  umul_highpart_optab,
  cmpmem_optab,
  cmpstr_optab,
  cmpstrn_optab,
  cpymem_optab,
  movmem_optab,
  setmem_optab,
  strlen_optab,
  rawmemchr_optab,
  fma_optab,
  fms_optab,
  fnma_optab,
  fnms_optab,
  rint_optab,
  round_optab,
  roundeven_optab,
  floor_optab,
  ceil_optab,
  btrunc_optab,
  nearbyint_optab,
  acos_optab,
  acosh_optab,
  asin_optab,
  asinh_optab,
  atan2_optab,
  atan_optab,
  atanh_optab,
  copysign_optab,
  xorsign_optab,
  cadd90_optab,
  cadd270_optab,
  cmul_optab,
  cmul_conj_optab,
  cmla_optab,
  cmla_conj_optab,
  cmls_optab,
  cmls_conj_optab,
  cos_optab,
  cosh_optab,
  exp10_optab,
  exp2_optab,
  exp_optab,
  expm1_optab,
  fmod_optab,
  hypot_optab,
  ilogb_optab,
  isinf_optab,
  issignaling_optab,
  ldexp_optab,
  log10_optab,
  log1p_optab,
  log2_optab,
  log_optab,
  logb_optab,
  pow_optab,
  remainder_optab,
  rsqrt_optab,
  scalb_optab,
  signbit_optab,
  significand_optab,
  sin_optab,
  sincos_optab,
  sinh_optab,
  tan_optab,
  tanh_optab,
  fegetround_optab,
  feclearexcept_optab,
  feraiseexcept_optab,
  fmax_optab,
  fmin_optab,
  reduc_fmax_scal_optab,
  reduc_fmin_scal_optab,
  reduc_smax_scal_optab,
  reduc_smin_scal_optab,
  reduc_plus_scal_optab,
  reduc_umax_scal_optab,
  reduc_umin_scal_optab,
  reduc_and_scal_optab,
  reduc_ior_scal_optab,
  reduc_xor_scal_optab,
  fold_left_plus_optab,
  mask_fold_left_plus_optab,
  mask_len_fold_left_plus_optab,
  extract_last_optab,
  fold_extract_last_optab,
  len_fold_extract_last_optab,
  uabd_optab,
  sabd_optab,
  savg_floor_optab,
  uavg_floor_optab,
  savg_ceil_optab,
  uavg_ceil_optab,
  sdot_prod_optab,
  ssum_widen_optab,
  udot_prod_optab,
  usdot_prod_optab,
  usum_widen_optab,
  usad_optab,
  ssad_optab,
  smulhs_optab,
  smulhrs_optab,
  umulhs_optab,
  umulhrs_optab,
  sdiv_pow2_optab,
  vec_pack_sfix_trunc_optab,
  vec_pack_ssat_optab,
  vec_pack_trunc_optab,
  vec_pack_ufix_trunc_optab,
  vec_pack_sbool_trunc_optab,
  vec_pack_usat_optab,
  vec_packs_float_optab,
  vec_packu_float_optab,
  vec_perm_optab,
  vec_realign_load_optab,
  vec_set_optab,
  vec_shl_optab,
  vec_shr_optab,
  vec_unpack_sfix_trunc_hi_optab,
  vec_unpack_sfix_trunc_lo_optab,
  vec_unpack_ufix_trunc_hi_optab,
  vec_unpack_ufix_trunc_lo_optab,
  vec_unpacks_float_hi_optab,
  vec_unpacks_float_lo_optab,
  vec_unpacks_hi_optab,
  vec_unpacks_lo_optab,
  vec_unpacks_sbool_hi_optab,
  vec_unpacks_sbool_lo_optab,
  vec_unpacku_float_hi_optab,
  vec_unpacku_float_lo_optab,
  vec_unpacku_hi_optab,
  vec_unpacku_lo_optab,
  vec_widen_smult_even_optab,
  vec_widen_smult_hi_optab,
  vec_widen_smult_lo_optab,
  vec_widen_smult_odd_optab,
  vec_widen_ssub_optab,
  vec_widen_ssub_hi_optab,
  vec_widen_ssub_lo_optab,
  vec_widen_ssub_odd_optab,
  vec_widen_ssub_even_optab,
  vec_widen_sadd_optab,
  vec_widen_sadd_hi_optab,
  vec_widen_sadd_lo_optab,
  vec_widen_sadd_odd_optab,
  vec_widen_sadd_even_optab,
  vec_widen_sabd_optab,
  vec_widen_sabd_hi_optab,
  vec_widen_sabd_lo_optab,
  vec_widen_sabd_odd_optab,
  vec_widen_sabd_even_optab,
  vec_widen_sshiftl_hi_optab,
  vec_widen_sshiftl_lo_optab,
  vec_widen_umult_even_optab,
  vec_widen_umult_hi_optab,
  vec_widen_umult_lo_optab,
  vec_widen_umult_odd_optab,
  vec_widen_ushiftl_hi_optab,
  vec_widen_ushiftl_lo_optab,
  vec_widen_usub_optab,
  vec_widen_usub_hi_optab,
  vec_widen_usub_lo_optab,
  vec_widen_usub_odd_optab,
  vec_widen_usub_even_optab,
  vec_widen_uadd_optab,
  vec_widen_uadd_hi_optab,
  vec_widen_uadd_lo_optab,
  vec_widen_uadd_odd_optab,
  vec_widen_uadd_even_optab,
  vec_widen_uabd_optab,
  vec_widen_uabd_hi_optab,
  vec_widen_uabd_lo_optab,
  vec_widen_uabd_odd_optab,
  vec_widen_uabd_even_optab,
  vec_addsub_optab,
  vec_fmaddsub_optab,
  vec_fmsubadd_optab,
  sync_add_optab,
  sync_and_optab,
  sync_ior_optab,
  sync_lock_release_optab,
  sync_nand_optab,
  sync_sub_optab,
  sync_xor_optab,
  atomic_add_fetch_optab,
  atomic_add_optab,
  atomic_and_fetch_optab,
  atomic_and_optab,
  atomic_bit_test_and_set_optab,
  atomic_bit_test_and_complement_optab,
  atomic_bit_test_and_reset_optab,
  atomic_compare_and_swap_optab,
  atomic_exchange_optab,
  atomic_fetch_add_optab,
  atomic_fetch_and_optab,
  atomic_fetch_nand_optab,
  atomic_fetch_or_optab,
  atomic_fetch_sub_optab,
  atomic_fetch_xor_optab,
  atomic_load_optab,
  atomic_nand_fetch_optab,
  atomic_nand_optab,
  atomic_or_fetch_optab,
  atomic_or_optab,
  atomic_store_optab,
  atomic_sub_fetch_optab,
  atomic_sub_optab,
  atomic_xor_fetch_optab,
  atomic_xor_optab,
  atomic_add_fetch_cmp_0_optab,
  atomic_sub_fetch_cmp_0_optab,
  atomic_and_fetch_cmp_0_optab,
  atomic_or_fetch_cmp_0_optab,
  atomic_xor_fetch_cmp_0_optab,
  get_thread_pointer_optab,
  set_thread_pointer_optab,
  check_raw_ptrs_optab,
  check_war_ptrs_optab,
  vec_duplicate_optab,
  vec_series_optab,
  vec_shl_insert_optab,
  len_load_optab,
  len_store_optab,
  select_vl_optab,
  FIRST_CONV_OPTAB = sext_optab,
  LAST_CONVLIB_OPTAB = satfractuns_optab,
  LAST_CONV_OPTAB = while_ult_optab,
  FIRST_NORM_OPTAB = add_optab,
  LAST_NORMLIB_OPTAB = sync_lock_test_and_set_optab,
  LAST_NORM_OPTAB = select_vl_optab
};

#define NUM_OPTABS          446
#define NUM_CONVLIB_OPTABS  15
#define NUM_NORMLIB_OPTABS  80
#define NUM_OPTAB_PATTERNS  10648
typedef enum optab_tag optab;
typedef enum optab_tag convert_optab;
typedef enum optab_tag direct_optab;

struct optab_libcall_d
{
  char libcall_suffix;
  const char *libcall_basename;
  void (*libcall_gen) (optab, const char *name,
		       char suffix, machine_mode);
};

struct convert_optab_libcall_d
{
  const char *libcall_basename;
  void (*libcall_gen) (convert_optab, const char *name,
		       machine_mode, machine_mode);
};

/* Given an enum insn_code, access the function to construct
   the body of that kind of insn.  */
#define GEN_FCN(CODE) (insn_data[CODE].genfun)

#ifdef NUM_RTX_CODE
/* Contains the optab used for each rtx code, and vice-versa.  */
extern const optab code_to_optab_[NUM_RTX_CODE];
extern const enum rtx_code optab_to_code_[NUM_OPTABS];

static inline optab
code_to_optab (enum rtx_code code)
{
  return code_to_optab_[code];
}

static inline enum rtx_code
optab_to_code (optab op)
{
  return optab_to_code_[op];
}

extern insn_code maybe_code_for_tlsdesc (machine_mode);
inline insn_code
code_for_tlsdesc (machine_mode arg0)
{
  insn_code code = maybe_code_for_tlsdesc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_tlsdesc (machine_mode, rtx, rtx);
inline rtx
gen_tlsdesc (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_tlsdesc (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_cbranch4 (machine_mode);
inline insn_code
code_for_cbranch4 (machine_mode arg0)
{
  insn_code code = maybe_code_for_cbranch4 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_cbranch4 (machine_mode, rtx, rtx, rtx, rtx);
inline rtx
gen_cbranch4 (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3)
{
  rtx res = maybe_gen_cbranch4 (arg0, x0, x1, x2, x3);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_cbranch4 (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_cbranch4 (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_cbranch4 (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_slt_3 (rtx_code, machine_mode, machine_mode);
inline insn_code
code_for_slt_3 (rtx_code arg0, machine_mode arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_slt_3 (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_slt_3 (rtx_code, machine_mode, machine_mode, rtx, rtx, rtx);
inline rtx
gen_slt_3 (rtx_code arg0, machine_mode arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_slt_3 (arg0, arg1, arg2, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_th_whole_mov (machine_mode);
inline insn_code
code_for_pred_th_whole_mov (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_th_whole_mov (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_th_whole_mov (machine_mode, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_th_whole_mov (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3)
{
  rtx res = maybe_gen_pred_th_whole_mov (arg0, x0, x1, x2, x3);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mov_width (int, machine_mode);
inline insn_code
code_for_pred_mov_width (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mov_width (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mov_width (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mov_width (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_mov_width (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_store_width (int, machine_mode);
inline insn_code
code_for_pred_store_width (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_store_width (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_store_width (int, machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_store_width (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_store_width (arg0, arg1, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_strided_load_width (int, machine_mode);
inline insn_code
code_for_pred_strided_load_width (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_strided_load_width (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_strided_load_width (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_strided_load_width (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_strided_load_width (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_strided_store_width (int, machine_mode);
inline insn_code
code_for_pred_strided_store_width (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_strided_store_width (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_strided_store_width (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_strided_store_width (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_strided_store_width (arg0, arg1, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_width (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_width (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_width (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_width (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_width (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_width (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_store_width (int, int, machine_mode);
inline insn_code
code_for_pred_indexed_store_width (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_indexed_store_width (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_store_width (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_store_width (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_indexed_store_width (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_th_extract (machine_mode);
inline insn_code
code_for_pred_th_extract (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_th_extract (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_th_extract (machine_mode, rtx, rtx, rtx);
inline rtx
gen_pred_th_extract (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_pred_th_extract (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vundefined (machine_mode);
inline insn_code
code_for_vundefined (machine_mode arg0)
{
  insn_code code = maybe_code_for_vundefined (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vundefined (machine_mode, rtx);
inline rtx
gen_vundefined (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_vundefined (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vreinterpret (machine_mode);
inline insn_code
code_for_vreinterpret (machine_mode arg0)
{
  insn_code code = maybe_code_for_vreinterpret (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vreinterpret (machine_mode, rtx, rtx);
inline rtx
gen_vreinterpret (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_vreinterpret (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vlmax_avl (machine_mode);
inline insn_code
code_for_vlmax_avl (machine_mode arg0)
{
  insn_code code = maybe_code_for_vlmax_avl (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vlmax_avl (machine_mode, rtx, rtx);
inline rtx
gen_vlmax_avl (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_vlmax_avl (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_mov_lra (machine_mode, machine_mode);
inline insn_code
code_for_mov_lra (machine_mode arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_mov_lra (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_mov_lra (machine_mode, machine_mode, rtx, rtx);
inline rtx
gen_mov_lra (machine_mode arg0, machine_mode arg1, rtx x0, rtx x1)
{
  rtx res = maybe_gen_mov_lra (arg0, arg1, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vsetvl (machine_mode);
inline insn_code
code_for_vsetvl (machine_mode arg0)
{
  insn_code code = maybe_code_for_vsetvl (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vsetvl (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_vsetvl (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_vsetvl (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vsetvl_discard_result (machine_mode);
inline insn_code
code_for_vsetvl_discard_result (machine_mode arg0)
{
  insn_code code = maybe_code_for_vsetvl_discard_result (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vsetvl_discard_result (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_vsetvl_discard_result (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_vsetvl_discard_result (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_vsetvl_no_side_effects (machine_mode);
inline insn_code
code_for_vsetvl_no_side_effects (machine_mode arg0)
{
  insn_code code = maybe_code_for_vsetvl_no_side_effects (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_vsetvl_no_side_effects (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_vsetvl_no_side_effects (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_vsetvl_no_side_effects (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mov (machine_mode);
inline insn_code
code_for_pred_mov (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_mov (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mov (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mov (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_mov (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_mov (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mov (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_mov (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_store (machine_mode);
inline insn_code
code_for_pred_store (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_store (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_store (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_store (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_store (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_merge (machine_mode);
inline insn_code
code_for_pred_merge (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_merge (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_merge (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_merge (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_merge (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_merge_scalar (machine_mode);
inline insn_code
code_for_pred_merge_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_merge_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_merge_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_merge_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_merge_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_broadcast (machine_mode);
inline insn_code
code_for_pred_broadcast (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_broadcast (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_broadcast (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_broadcast (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_broadcast (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_strided_load (machine_mode);
inline insn_code
code_for_pred_strided_load (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_strided_load (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_strided_load (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_strided_load (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_strided_load (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_strided_store (machine_mode);
inline insn_code
code_for_pred_strided_store (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_strided_store (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_strided_store (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_strided_store (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_strided_store (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_same_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_same_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_same_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_same_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_same_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_same_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x2_greater_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x2_greater_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x2_greater_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x2_greater_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x2_greater_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x2_greater_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x4_greater_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x4_greater_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x4_greater_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x4_greater_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x4_greater_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x4_greater_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x8_greater_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x8_greater_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x8_greater_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x8_greater_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x8_greater_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x8_greater_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x2_smaller_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x2_smaller_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x2_smaller_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x2_smaller_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x2_smaller_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x2_smaller_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x4_smaller_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x4_smaller_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x4_smaller_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x4_smaller_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x4_smaller_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x4_smaller_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load_x8_smaller_eew (int, machine_mode);
inline insn_code
code_for_pred_indexed_load_x8_smaller_eew (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_indexed_load_x8_smaller_eew (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load_x8_smaller_eew (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load_x8_smaller_eew (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load_x8_smaller_eew (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_store (int, machine_mode, machine_mode);
inline insn_code
code_for_pred_indexed_store (int arg0, machine_mode arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_indexed_store (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_store (int, machine_mode, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_store (int arg0, machine_mode arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_indexed_store (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred (rtx_code, machine_mode);
inline insn_code
code_for_pred (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_sub_reverse_scalar (machine_mode);
inline insn_code
code_for_pred_sub_reverse_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_sub_reverse_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_sub_reverse_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_sub_reverse_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_sub_reverse_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mulh (int, machine_mode);
inline insn_code
code_for_pred_mulh (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mulh (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mulh (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mulh (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_mulh (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mulh_scalar (int, machine_mode);
inline insn_code
code_for_pred_mulh_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mulh_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mulh_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mulh_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_mulh_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_adc (machine_mode);
inline insn_code
code_for_pred_adc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_adc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_adc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_adc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_adc (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_sbc (machine_mode);
inline insn_code
code_for_pred_sbc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_sbc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_sbc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_sbc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_sbc (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_adc_scalar (machine_mode);
inline insn_code
code_for_pred_adc_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_adc_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_adc_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_adc_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_adc_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_sbc_scalar (machine_mode);
inline insn_code
code_for_pred_sbc_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_sbc_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_sbc_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_sbc_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_sbc_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_madc (machine_mode);
inline insn_code
code_for_pred_madc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_madc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_madc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_madc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_madc (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_msbc (machine_mode);
inline insn_code
code_for_pred_msbc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_msbc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_msbc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_msbc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_msbc (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_madc_scalar (machine_mode);
inline insn_code
code_for_pred_madc_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_madc_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_madc_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_madc_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_madc_scalar (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_msbc_scalar (machine_mode);
inline insn_code
code_for_pred_msbc_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_msbc_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_msbc_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_msbc_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_msbc_scalar (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_madc_overflow (machine_mode);
inline insn_code
code_for_pred_madc_overflow (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_madc_overflow (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_madc_overflow (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_madc_overflow (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_madc_overflow (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_msbc_overflow (machine_mode);
inline insn_code
code_for_pred_msbc_overflow (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_msbc_overflow (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_msbc_overflow (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_msbc_overflow (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_msbc_overflow (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_madc_overflow_scalar (machine_mode);
inline insn_code
code_for_pred_madc_overflow_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_madc_overflow_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_madc_overflow_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_madc_overflow_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_madc_overflow_scalar (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_msbc_overflow_scalar (machine_mode);
inline insn_code
code_for_pred_msbc_overflow_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_msbc_overflow_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_msbc_overflow_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_msbc_overflow_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_msbc_overflow_scalar (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vf2 (rtx_code, machine_mode);
inline insn_code
code_for_pred_vf2 (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vf2 (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vf2 (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vf2 (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vf2 (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vf4 (rtx_code, machine_mode);
inline insn_code
code_for_pred_vf4 (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vf4 (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vf4 (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vf4 (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vf4 (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vf8 (rtx_code, machine_mode);
inline insn_code
code_for_pred_vf8 (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vf8 (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vf8 (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vf8 (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vf8 (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_dual_widen (rtx_code, rtx_code, machine_mode);
inline insn_code
code_for_pred_dual_widen (rtx_code arg0, rtx_code arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_dual_widen (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_dual_widen (rtx_code, rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_dual_widen (rtx_code arg0, rtx_code arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_dual_widen (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_dual_widen_scalar (rtx_code, rtx_code, machine_mode);
inline insn_code
code_for_pred_dual_widen_scalar (rtx_code arg0, rtx_code arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_dual_widen_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_dual_widen_scalar (rtx_code, rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_dual_widen_scalar (rtx_code arg0, rtx_code arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_dual_widen_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_sub (rtx_code, machine_mode);
inline insn_code
code_for_pred_single_widen_sub (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_single_widen_sub (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_sub (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_sub (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_single_widen_sub (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_add (rtx_code, machine_mode);
inline insn_code
code_for_pred_single_widen_add (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_single_widen_add (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_add (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_add (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_single_widen_add (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_scalar (rtx_code, rtx_code, machine_mode);
inline insn_code
code_for_pred_single_widen_scalar (rtx_code arg0, rtx_code arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_single_widen_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_scalar (rtx_code, rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_scalar (rtx_code arg0, rtx_code arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_single_widen_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mulsu (machine_mode);
inline insn_code
code_for_pred_widen_mulsu (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_widen_mulsu (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mulsu (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mulsu (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mulsu (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mulsu_scalar (machine_mode);
inline insn_code
code_for_pred_widen_mulsu_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_widen_mulsu_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mulsu_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mulsu_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mulsu_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_narrow (rtx_code, machine_mode);
inline insn_code
code_for_pred_narrow (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_narrow (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_narrow (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_narrow (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_narrow (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_narrow (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_narrow_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_narrow_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_narrow_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_narrow_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_narrow_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_trunc (machine_mode);
inline insn_code
code_for_pred_trunc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_trunc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_trunc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_trunc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_trunc (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_trunc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_trunc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_trunc (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred (int, machine_mode);
inline insn_code
code_for_pred (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_scalar (int, machine_mode);
inline insn_code
code_for_pred_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_narrow_clip (int, machine_mode);
inline insn_code
code_for_pred_narrow_clip (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_narrow_clip (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_narrow_clip (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow_clip (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_narrow_clip (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_narrow_clip_scalar (int, machine_mode);
inline insn_code
code_for_pred_narrow_clip_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_narrow_clip_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_narrow_clip_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow_clip_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_narrow_clip_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_cmp (machine_mode);
inline insn_code
code_for_pred_cmp (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_cmp (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_cmp (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_cmp (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_cmp (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_ltge (machine_mode);
inline insn_code
code_for_pred_ltge (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_ltge (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_ltge (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_ltge (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_ltge (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_cmp_scalar (machine_mode);
inline insn_code
code_for_pred_cmp_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_cmp_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_cmp_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_cmp_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_cmp_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_eqne_scalar (machine_mode);
inline insn_code
code_for_pred_eqne_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_eqne_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_eqne_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_eqne_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_eqne_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_ge_scalar (machine_mode);
inline insn_code
code_for_pred_ge_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_ge_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_ge_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_ge_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_ge_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul_plus (machine_mode);
inline insn_code
code_for_pred_mul_plus (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_mul_plus (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul_plus (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul_plus (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_mul_plus (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul_plus_scalar (machine_mode);
inline insn_code
code_for_pred_mul_plus_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_mul_plus_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul_plus_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul_plus_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_mul_plus_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_minus_mul (machine_mode);
inline insn_code
code_for_pred_minus_mul (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_minus_mul (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_minus_mul (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_minus_mul (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_minus_mul (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_minus_mul_scalar (machine_mode);
inline insn_code
code_for_pred_minus_mul_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_minus_mul_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_minus_mul_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_minus_mul_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_minus_mul_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_plus (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul_plus (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul_plus (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_plus (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_plus (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mul_plus (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_plus_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul_plus_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul_plus_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_plus_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_plus_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mul_plus_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_plussu (machine_mode);
inline insn_code
code_for_pred_widen_mul_plussu (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_widen_mul_plussu (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_plussu (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_plussu (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mul_plussu (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_plussu_scalar (machine_mode);
inline insn_code
code_for_pred_widen_mul_plussu_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_widen_mul_plussu_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_plussu_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_plussu_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mul_plussu_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_plusus_scalar (machine_mode);
inline insn_code
code_for_pred_widen_mul_plusus_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_widen_mul_plusus_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_plusus_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_plusus_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_mul_plusus_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_n (rtx_code, machine_mode);
inline insn_code
code_for_pred_n (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_n (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_n (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_n (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_n (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_not (rtx_code, machine_mode);
inline insn_code
code_for_pred_not (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_not (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_not (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_not (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_not (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_not (machine_mode);
inline insn_code
code_for_pred_not (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_not (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_not (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_not (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_not (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_popcount (machine_mode, machine_mode);
inline insn_code
code_for_pred_popcount (machine_mode arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_popcount (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_popcount (machine_mode, machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_popcount (machine_mode arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_popcount (arg0, arg1, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_ffs (machine_mode, machine_mode);
inline insn_code
code_for_pred_ffs (machine_mode arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_ffs (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_ffs (machine_mode, machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_ffs (machine_mode arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_ffs (arg0, arg1, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_iota (machine_mode);
inline insn_code
code_for_pred_iota (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_iota (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_iota (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_iota (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_iota (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_series (machine_mode);
inline insn_code
code_for_pred_series (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_series (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_series (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_series (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_series (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_reverse_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_reverse_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_reverse_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_reverse_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_reverse_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_reverse_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_ncopysign (machine_mode);
inline insn_code
code_for_pred_ncopysign (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_ncopysign (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_ncopysign (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_ncopysign (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_ncopysign (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_ncopysign_scalar (machine_mode);
inline insn_code
code_for_pred_ncopysign_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_ncopysign_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_ncopysign_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_ncopysign_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_ncopysign_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul (rtx_code, machine_mode);
inline insn_code
code_for_pred_mul (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mul (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9, rtx x10)
{
  rtx res = maybe_gen_pred_mul (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_mul_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mul_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9, rtx x10)
{
  rtx res = maybe_gen_pred_mul_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul_neg (rtx_code, machine_mode);
inline insn_code
code_for_pred_mul_neg (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mul_neg (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul_neg (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul_neg (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9, rtx x10)
{
  rtx res = maybe_gen_pred_mul_neg (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_mul_neg_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_mul_neg_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_mul_neg_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_mul_neg_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_mul_neg_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9, rtx x10)
{
  rtx res = maybe_gen_pred_mul_neg_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_class (machine_mode);
inline insn_code
code_for_pred_class (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_class (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_class (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_class (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_class (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_dual_widen (rtx_code, machine_mode);
inline insn_code
code_for_pred_dual_widen (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_dual_widen (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_dual_widen (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_dual_widen (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_dual_widen (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_dual_widen_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_dual_widen_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_dual_widen_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_dual_widen_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_dual_widen_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_dual_widen_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_add (machine_mode);
inline insn_code
code_for_pred_single_widen_add (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_single_widen_add (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_add (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_add (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_single_widen_add (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_sub (machine_mode);
inline insn_code
code_for_pred_single_widen_sub (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_single_widen_sub (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_sub (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_sub (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_single_widen_sub (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_single_widen_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_single_widen_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_single_widen_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_single_widen_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_single_widen_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_single_widen_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_widen_mul (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_widen_mul_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_neg (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul_neg (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul_neg (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_neg (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_neg (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_widen_mul_neg (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_mul_neg_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen_mul_neg_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_mul_neg_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_mul_neg_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_mul_neg_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8, rtx x9)
{
  rtx res = maybe_gen_pred_widen_mul_neg_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_fcvt_x_f (int, machine_mode);
inline insn_code
code_for_pred_fcvt_x_f (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_fcvt_x_f (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_fcvt_x_f (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_fcvt_x_f (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_fcvt_x_f (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen_fcvt_x_f (int, machine_mode);
inline insn_code
code_for_pred_widen_fcvt_x_f (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen_fcvt_x_f (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen_fcvt_x_f (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen_fcvt_x_f (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_widen_fcvt_x_f (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_widen (rtx_code, machine_mode);
inline insn_code
code_for_pred_widen (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_widen (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_widen (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_widen (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_widen (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_extend (machine_mode);
inline insn_code
code_for_pred_extend (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_extend (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_extend (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_extend (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_extend (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_narrow_fcvt_x_f (int, machine_mode);
inline insn_code
code_for_pred_narrow_fcvt_x_f (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_narrow_fcvt_x_f (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_narrow_fcvt_x_f (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_narrow_fcvt_x_f (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_narrow_fcvt_x_f (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_rod_trunc (machine_mode);
inline insn_code
code_for_pred_rod_trunc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_rod_trunc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_rod_trunc (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_rod_trunc (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_rod_trunc (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_extract_first (machine_mode);
inline insn_code
code_for_pred_extract_first (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_extract_first (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_extract_first (machine_mode, rtx, rtx);
inline rtx
gen_pred_extract_first (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_pred_extract_first (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_extract_first_trunc (machine_mode);
inline insn_code
code_for_pred_extract_first_trunc (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_extract_first_trunc (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_extract_first_trunc (machine_mode, rtx, rtx);
inline rtx
gen_pred_extract_first_trunc (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_pred_extract_first_trunc (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_slide (int, machine_mode);
inline insn_code
code_for_pred_slide (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_slide (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_slide (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_slide (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_slide (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_gather (machine_mode);
inline insn_code
code_for_pred_gather (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_gather (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_gather (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_gather (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_gather (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_gather_scalar (machine_mode);
inline insn_code
code_for_pred_gather_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_gather_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_gather_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_gather_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_gather_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_gatherei16 (machine_mode);
inline insn_code
code_for_pred_gatherei16 (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_gatherei16 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_gatherei16 (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_gatherei16 (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_gatherei16 (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_compress (machine_mode);
inline insn_code
code_for_pred_compress (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_compress (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_compress (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_compress (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_compress (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_fault_load (machine_mode);
inline insn_code
code_for_pred_fault_load (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_fault_load (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_fault_load (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_fault_load (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_fault_load (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_unit_strided_load (machine_mode);
inline insn_code
code_for_pred_unit_strided_load (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_unit_strided_load (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_unit_strided_load (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_unit_strided_load (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_unit_strided_load (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_unit_strided_store (machine_mode);
inline insn_code
code_for_pred_unit_strided_store (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_unit_strided_store (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_unit_strided_store (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_unit_strided_store (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_unit_strided_store (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_indexed_load (int, machine_mode, machine_mode);
inline insn_code
code_for_pred_indexed_load (int arg0, machine_mode arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_indexed_load (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_indexed_load (int, machine_mode, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_indexed_load (int arg0, machine_mode arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_indexed_load (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vandn (machine_mode);
inline insn_code
code_for_pred_vandn (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vandn (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vandn (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vandn (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vandn (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vandn_scalar (machine_mode);
inline insn_code
code_for_pred_vandn_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vandn_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vandn_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vandn_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vandn_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_v (rtx_code, machine_mode);
inline insn_code
code_for_pred_v (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_v (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_v (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_v (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_v (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_v (arg0, arg1, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_v_scalar (rtx_code, machine_mode);
inline insn_code
code_for_pred_v_scalar (rtx_code arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_v_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_v_scalar (rtx_code, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v_scalar (rtx_code arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_v_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vwsll (machine_mode);
inline insn_code
code_for_pred_vwsll (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vwsll (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vwsll (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vwsll (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vwsll (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vwsll_scalar (machine_mode);
inline insn_code
code_for_pred_vwsll_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vwsll_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vwsll_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vwsll_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vwsll_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_v (int, machine_mode);
inline insn_code
code_for_pred_v (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_v (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_v (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_v (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_v (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_v (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern rtx maybe_gen_pred_v (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_v (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vclmul (int, machine_mode);
inline insn_code
code_for_pred_vclmul (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vclmul (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vclmul (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vclmul (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vclmul (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vclmul_scalar (int, machine_mode);
inline insn_code
code_for_pred_vclmul_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vclmul_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vclmul_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vclmul_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vclmul_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vv (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vv (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vv (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vv (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vv (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vv (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vvx1_scalar (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vvx1_scalar (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vvx1_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vvx1_scalar (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vvx1_scalar (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vvx1_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vvx2_scalar (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vvx2_scalar (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vvx2_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vvx2_scalar (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vvx2_scalar (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vvx2_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vvx4_scalar (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vvx4_scalar (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vvx4_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vvx4_scalar (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vvx4_scalar (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vvx4_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vvx8_scalar (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vvx8_scalar (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vvx8_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vvx8_scalar (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vvx8_scalar (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vvx8_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vvx16_scalar (int, int, machine_mode);
inline insn_code
code_for_pred_crypto_vvx16_scalar (int arg0, int arg1, machine_mode arg2)
{
  insn_code code = maybe_code_for_pred_crypto_vvx16_scalar (arg0, arg1, arg2);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vvx16_scalar (int, int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vvx16_scalar (int arg0, int arg1, machine_mode arg2, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_crypto_vvx16_scalar (arg0, arg1, arg2, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_crypto_vi_scalar (int, machine_mode);
inline insn_code
code_for_pred_crypto_vi_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_crypto_vi_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_crypto_vi_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_crypto_vi_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_crypto_vi_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vi_nomaskedoff_scalar (int, machine_mode);
inline insn_code
code_for_pred_vi_nomaskedoff_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vi_nomaskedoff_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vi_nomaskedoff_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vi_nomaskedoff_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_vi_nomaskedoff_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsm3me (machine_mode);
inline insn_code
code_for_pred_vsm3me (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsm3me (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsm3me (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsm3me (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_vsm3me (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_ra (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_ra (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_ra (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_ra (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_ra (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_ra (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s0 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s0 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s0 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s0 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s0 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s0 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s1 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s1 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s1 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s1 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s1 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s1 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s2 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s2 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s2 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s2 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s2 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s2 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s3 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s3 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s3 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s3 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s3 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s3 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s4 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s4 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s4 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s4 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s4 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s4 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s5 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s5 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s5 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s5 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s5 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s5 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s6 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s6 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s6 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s6 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s6 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s6 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s7 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s7 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s7 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s7 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s7 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s7 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s8 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s8 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s8 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s8 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s8 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s8 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s9 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s9 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s9 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s9 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s9 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s9 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_pop_up_to_s11 (machine_mode);
inline insn_code
code_for_gpr_multi_pop_up_to_s11 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_pop_up_to_s11 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_pop_up_to_s11 (machine_mode, rtx);
inline rtx
gen_gpr_multi_pop_up_to_s11 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_pop_up_to_s11 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_ra (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_ra (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_ra (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_ra (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_ra (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_ra (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s0 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s0 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s0 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s0 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s0 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s0 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s1 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s1 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s1 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s1 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s1 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s1 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s2 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s2 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s2 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s2 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s2 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s2 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s3 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s3 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s3 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s3 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s3 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s3 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s4 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s4 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s4 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s4 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s4 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s4 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s5 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s5 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s5 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s5 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s5 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s5 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s6 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s6 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s6 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s6 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s6 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s6 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s7 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s7 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s7 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s7 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s7 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s7 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s8 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s8 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s8 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s8 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s8 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s8 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s9 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s9 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s9 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s9 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s9 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s9 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popret_up_to_s11 (machine_mode);
inline insn_code
code_for_gpr_multi_popret_up_to_s11 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popret_up_to_s11 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popret_up_to_s11 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popret_up_to_s11 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popret_up_to_s11 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_ra (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_ra (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_ra (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_ra (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_ra (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_ra (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s0 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s0 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s0 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s0 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s0 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s0 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s1 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s1 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s1 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s1 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s1 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s1 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s2 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s2 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s2 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s2 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s2 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s2 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s3 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s3 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s3 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s3 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s3 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s3 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s4 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s4 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s4 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s4 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s4 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s4 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s5 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s5 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s5 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s5 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s5 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s5 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s6 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s6 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s6 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s6 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s6 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s6 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s7 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s7 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s7 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s7 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s7 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s7 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s8 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s8 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s8 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s8 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s8 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s8 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s9 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s9 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s9 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s9 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s9 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s9 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_popretz_up_to_s11 (machine_mode);
inline insn_code
code_for_gpr_multi_popretz_up_to_s11 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_popretz_up_to_s11 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_popretz_up_to_s11 (machine_mode, rtx);
inline rtx
gen_gpr_multi_popretz_up_to_s11 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_popretz_up_to_s11 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_ra (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_ra (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_ra (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_ra (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_ra (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_ra (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s0 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s0 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s0 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s0 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s0 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s0 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s1 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s1 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s1 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s1 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s1 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s1 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s2 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s2 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s2 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s2 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s2 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s2 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s3 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s3 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s3 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s3 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s3 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s3 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s4 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s4 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s4 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s4 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s4 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s4 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s5 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s5 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s5 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s5 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s5 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s5 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s6 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s6 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s6 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s6 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s6 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s6 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s7 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s7 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s7 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s7 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s7 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s7 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s8 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s8 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s8 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s8 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s8 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s8 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s9 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s9 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s9 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s9 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s9 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s9 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_gpr_multi_push_up_to_s11 (machine_mode);
inline insn_code
code_for_gpr_multi_push_up_to_s11 (machine_mode arg0)
{
  insn_code code = maybe_code_for_gpr_multi_push_up_to_s11 (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_gpr_multi_push_up_to_s11 (machine_mode, rtx);
inline rtx
gen_gpr_multi_push_up_to_s11 (machine_mode arg0, rtx x0)
{
  rtx res = maybe_gen_gpr_multi_push_up_to_s11 (arg0, x0);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_v_scalar (int, machine_mode);
inline insn_code
code_for_pred_v_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_v_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_v_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_v_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_v_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdscmul (int, machine_mode);
inline insn_code
code_for_pred_vdscmul (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vdscmul (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdscmul (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdscmul (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vdscmul (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdscmul_scalar (int, machine_mode);
inline insn_code
code_for_pred_vdscmul_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vdscmul_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdscmul_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdscmul_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vdscmul_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdsredsumn (machine_mode);
inline insn_code
code_for_pred_vdsredsumn (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vdsredsumn (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdsredsumn (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdsredsumn (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vdsredsumn (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdsredsumn_scalar (machine_mode);
inline insn_code
code_for_pred_vdsredsumn_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vdsredsumn_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdsredsumn_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdsredsumn_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vdsredsumn_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vfs (int, machine_mode);
inline insn_code
code_for_pred_vfs (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vfs (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vfs (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vfs (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_vfs (arg0, arg1, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vperm (machine_mode);
inline insn_code
code_for_pred_vperm (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vperm (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vperm (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vperm (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_vperm (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlfcb2h (machine_mode);
inline insn_code
code_for_pred_vlfcb2h (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlfcb2h (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlfcb2h (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlfcb2h (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vlfcb2h (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlfcb2w (machine_mode);
inline insn_code
code_for_pred_vlfcb2w (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlfcb2w (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlfcb2w (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlfcb2w (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vlfcb2w (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlfch2w (machine_mode);
inline insn_code
code_for_pred_vlfch2w (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlfch2w (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlfch2w (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlfch2w (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vlfch2w (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlfcpa2c (machine_mode);
inline insn_code
code_for_pred_vlfcpa2c (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlfcpa2c (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlfcpa2c (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlfcpa2c (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vlfcpa2c (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlfcpb2c (machine_mode);
inline insn_code
code_for_pred_vlfcpb2c (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlfcpb2c (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlfcpb2c (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlfcpb2c (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vlfcpb2c (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsfch2b (machine_mode);
inline insn_code
code_for_pred_vsfch2b (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsfch2b (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsfch2b (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsfch2b (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_vsfch2b (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsfcw2b (machine_mode);
inline insn_code
code_for_pred_vsfcw2b (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsfcw2b (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsfcw2b (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsfcw2b (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_vsfcw2b (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsfcw2h (machine_mode);
inline insn_code
code_for_pred_vsfcw2h (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsfcw2h (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsfcw2h (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsfcw2h (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_vsfcw2h (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsfcc2pa (machine_mode);
inline insn_code
code_for_pred_vsfcc2pa (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsfcc2pa (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsfcc2pa (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsfcc2pa (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_vsfcc2pa (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vsfcc2pb (machine_mode);
inline insn_code
code_for_pred_vsfcc2pb (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vsfcc2pb (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vsfcc2pb (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vsfcc2pb (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_pred_vsfcc2pb (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vpharot (machine_mode);
inline insn_code
code_for_pred_vpharot (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vpharot (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vpharot (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vpharot (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_vpharot (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vpharot_scalar (machine_mode);
inline insn_code
code_for_pred_vpharot_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vpharot_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vpharot_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vpharot_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5)
{
  rtx res = maybe_gen_pred_vpharot_scalar (arg0, x0, x1, x2, x3, x4, x5);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vds (int, machine_mode);
inline insn_code
code_for_pred_vds (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vds (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vds (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vds (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vds (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vds_scalar (int, machine_mode);
inline insn_code
code_for_pred_vds_scalar (int arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_pred_vds_scalar (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vds_scalar (int, machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vds_scalar (int arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7, rtx x8)
{
  rtx res = maybe_gen_pred_vds_scalar (arg0, arg1, x0, x1, x2, x3, x4, x5, x6, x7, x8);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdsmacini (machine_mode);
inline insn_code
code_for_pred_vdsmacini (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vdsmacini (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdsmacini (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdsmacini (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vdsmacini (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vdsmacini_scalar (machine_mode);
inline insn_code
code_for_pred_vdsmacini_scalar (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vdsmacini_scalar (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vdsmacini_scalar (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vdsmacini_scalar (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_pred_vdsmacini_scalar (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_pred_vlnlp (machine_mode);
inline insn_code
code_for_pred_vlnlp (machine_mode arg0)
{
  insn_code code = maybe_code_for_pred_vlnlp (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_pred_vlnlp (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_pred_vlnlp (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_pred_vlnlp (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}
#endif

extern const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS];
extern const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS];

/* Returns the active icode for the given (encoded) optab.  */
extern enum insn_code raw_optab_handler (unsigned);
extern bool swap_optab_enable (optab, machine_mode, bool);

/* Target-dependent globals.  */
struct target_optabs {
  /* Patterns that are used by optabs that are enabled for this target.  */
  bool pat_enable[NUM_OPTAB_PATTERNS];

  /* Index VOIDmode caches if the target supports vec_gather_load for any
     vector mode.  Every other index X caches specifically for mode X.
     1 means yes, -1 means no.  */
  signed char supports_vec_gather_load[NUM_MACHINE_MODES];
  signed char supports_vec_scatter_store[NUM_MACHINE_MODES];
};
extern void init_all_optabs (struct target_optabs *);
extern bool partial_vectors_supported_p (void);

extern struct target_optabs default_target_optabs;
extern struct target_optabs *this_fn_optabs;
#if SWITCHABLE_TARGET
extern struct target_optabs *this_target_optabs;
#else
#define this_target_optabs (&default_target_optabs)
#endif
#endif
