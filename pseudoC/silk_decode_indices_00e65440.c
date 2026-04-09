// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_indices
// Entry Point: 00e65440
// Size: 1020 bytes
// Signature: undefined silk_decode_indices(void)


void silk_decode_indices(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_88 [16];
  short local_78 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_4 == 0) && (*(int *)(param_1 + (long)param_3 * 4 + 0x970) == 0)) {
    uVar6 = ec_dec_icdf(param_2,&silk_type_offset_no_VAD_iCDF,8);
    cVar3 = (char)(uVar6 >> 1);
    *(char *)(param_1 + 0xae5) = cVar3;
    *(byte *)(param_1 + 0xae6) = (byte)uVar6 & 1;
  }
  else {
    iVar5 = ec_dec_icdf(param_2,&silk_type_offset_VAD_iCDF,8);
    cVar3 = (char)(iVar5 + 2U >> 1);
    *(char *)(param_1 + 0xae5) = cVar3;
    *(byte *)(param_1 + 0xae6) = (byte)(iVar5 + 2U) & 1;
  }
  if (param_5 == 2) {
    uVar2 = ec_dec_icdf(param_2,silk_delta_gain_iCDF,8);
    *(undefined *)(param_1 + 0xac8) = uVar2;
    iVar5 = *(int *)(param_1 + 0x914);
  }
  else {
    iVar5 = ec_dec_icdf(param_2,silk_gain_iCDF + (long)cVar3 * 8,8);
    *(char *)(param_1 + 0xac8) = (char)(iVar5 << 3);
    cVar3 = ec_dec_icdf(param_2,&silk_uniform8_iCDF,8);
    *(char *)(param_1 + 0xac8) = *(char *)(param_1 + 0xac8) + cVar3;
    iVar5 = *(int *)(param_1 + 0x914);
  }
  if (1 < iVar5) {
    lVar7 = 0xac9;
    do {
      uVar2 = ec_dec_icdf(param_2,silk_delta_gain_iCDF,8);
      *(undefined *)(param_1 + lVar7) = uVar2;
      lVar8 = lVar7 + -0xac7;
      lVar7 = lVar7 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x914));
  }
  cVar3 = ec_dec_icdf(param_2,*(long *)(*(short **)(param_1 + 0xac0) + 0xc) +
                              (((long)*(char *)(param_1 + 0xae5) << 0x20) >> 0x21) *
                              (long)**(short **)(param_1 + 0xac0),8);
  *(char *)(param_1 + 0xad0) = cVar3;
  silk_NLSF_unpack(local_78,auStack_88,*(undefined8 *)(param_1 + 0xac0),(int)cVar3);
  lVar7 = *(long *)(param_1 + 0xac0);
  if (0 < *(short *)(lVar7 + 2)) {
    lVar8 = 0;
    do {
      iVar5 = ec_dec_icdf(param_2,*(long *)(lVar7 + 0x30) + (long)local_78[lVar8],8);
      if (iVar5 == 8) {
        iVar5 = ec_dec_icdf(param_2,&silk_NLSF_EXT_iCDF,8);
        iVar5 = iVar5 + 8;
      }
      else if (iVar5 == 0) {
        iVar5 = ec_dec_icdf(param_2,&silk_NLSF_EXT_iCDF,8);
        iVar5 = -iVar5;
      }
      lVar7 = *(long *)(param_1 + 0xac0);
      *(char *)(param_1 + 0xad1 + lVar8) = (char)iVar5 + -4;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(short *)(lVar7 + 2));
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    uVar2 = ec_dec_icdf(param_2,&silk_NLSF_interpolation_factor_iCDF,8);
    cVar3 = *(char *)(param_1 + 0xae5);
    *(undefined *)(param_1 + 0xae7) = uVar2;
  }
  else {
    cVar3 = *(char *)(param_1 + 0xae5);
    *(undefined *)(param_1 + 0xae7) = 4;
  }
  if (cVar3 == '\x02') {
    if (((param_5 == 2) && (*(int *)(param_1 + 0x968) == 2)) &&
       (iVar5 = ec_dec_icdf(param_2,silk_pitch_delta_iCDF,8), 0 < iVar5 * 0x10000)) {
      sVar4 = (short)iVar5 + *(short *)(param_1 + 0x96c) + -9;
    }
    else {
      sVar4 = ec_dec_icdf(param_2,silk_pitch_lag_iCDF,8);
      *(short *)(param_1 + 0xae2) = sVar4 * (short)(*(uint *)(param_1 + 0x90c) >> 1);
      sVar4 = ec_dec_icdf(param_2,*(undefined8 *)(param_1 + 0x950),8);
      sVar4 = *(short *)(param_1 + 0xae2) + sVar4;
    }
    *(short *)(param_1 + 0xae2) = sVar4;
    *(short *)(param_1 + 0x96c) = sVar4;
    uVar2 = ec_dec_icdf(param_2,*(undefined8 *)(param_1 + 0x958),8);
    *(undefined *)(param_1 + 0xae4) = uVar2;
    cVar3 = ec_dec_icdf(param_2,&silk_LTP_per_index_iCDF,8);
    *(char *)(param_1 + 0xae8) = cVar3;
    if (0 < *(int *)(param_1 + 0x914)) {
      uVar2 = ec_dec_icdf(param_2,*(undefined8 *)(silk_LTP_gain_iCDF_ptrs + (long)cVar3 * 8),8);
      *(undefined *)(param_1 + 0xacc) = uVar2;
      if (1 < *(int *)(param_1 + 0x914)) {
        lVar7 = 0xacd;
        do {
          uVar2 = ec_dec_icdf(param_2,*(undefined8 *)
                                       (silk_LTP_gain_iCDF_ptrs +
                                       (long)*(char *)(param_1 + 0xae8) * 8),8);
          *(undefined *)(param_1 + lVar7) = uVar2;
          lVar8 = lVar7 + -0xacb;
          lVar7 = lVar7 + 1;
        } while (lVar8 < *(int *)(param_1 + 0x914));
      }
    }
    if (param_5 == 0) {
      uVar2 = ec_dec_icdf(param_2,&silk_LTPscale_iCDF,8);
    }
    else {
      uVar2 = 0;
    }
    *(undefined *)(param_1 + 0xae9) = uVar2;
  }
  *(int *)(param_1 + 0x968) = (int)*(char *)(param_1 + 0xae5);
  uVar2 = ec_dec_icdf(param_2,&silk_uniform4_iCDF,8);
  *(undefined *)(param_1 + 0xaea) = uVar2;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


