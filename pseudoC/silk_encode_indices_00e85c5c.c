// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_encode_indices
// Entry Point: 00e85c5c
// Size: 1020 bytes
// Signature: undefined silk_encode_indices(void)


void silk_encode_indices(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined7 *puVar8;
  int iVar9;
  long lVar10;
  undefined auStack_98 [16];
  short local_88 [16];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pbVar1 = (byte *)(param_1 + (long)param_3 * 0x24 + 0x17e8);
  if (param_4 == 0) {
    pbVar1 = (byte *)(param_1 + 0x1290);
  }
  iVar9 = (int)(char)pbVar1[0x1e] + (char)pbVar1[0x1d] * 2;
  if ((param_4 == 0) && (iVar9 < 2)) {
    ec_enc_icdf(param_2,iVar9,&silk_type_offset_no_VAD_iCDF,8);
    lVar7 = (long)(char)*pbVar1;
    if (param_5 != 2) goto LAB_00e85cec;
LAB_00e85d5c:
    ec_enc_icdf(param_2,lVar7,silk_delta_gain_iCDF,8);
    iVar9 = *(int *)(param_1 + 0x11e4);
  }
  else {
    ec_enc_icdf(param_2,iVar9 + -2,&silk_type_offset_VAD_iCDF,8);
    lVar7 = (long)(char)*pbVar1;
    if (param_5 == 2) goto LAB_00e85d5c;
LAB_00e85cec:
    ec_enc_icdf(param_2,(int)lVar7 >> 3,silk_gain_iCDF + (long)(char)pbVar1[0x1d] * 8,8);
    ec_enc_icdf(param_2,*pbVar1 & 7,&silk_uniform8_iCDF,8);
    iVar9 = *(int *)(param_1 + 0x11e4);
  }
  if (1 < iVar9) {
    lVar7 = 1;
    do {
      ec_enc_icdf(param_2,(long)(char)pbVar1[lVar7],silk_delta_gain_iCDF,8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x11e4));
  }
  ec_enc_icdf(param_2,(long)(char)pbVar1[8],
              *(long *)(*(short **)(param_1 + 0x1260) + 0xc) +
              (((long)(char)pbVar1[0x1d] << 0x20) >> 0x21) * (long)**(short **)(param_1 + 0x1260),8)
  ;
  silk_NLSF_unpack(local_88,auStack_98,*(undefined8 *)(param_1 + 0x1260),(long)(char)pbVar1[8]);
  lVar7 = *(long *)(param_1 + 0x1260);
  if (0 < *(short *)(lVar7 + 2)) {
    lVar10 = 0;
    do {
      if ((char)pbVar1[lVar10 + 9] < '\x04') {
        iVar9 = (int)(char)pbVar1[lVar10 + 9];
        if (iVar9 == -4 || iVar9 + 4 < 0 != SCARRY4(iVar9,4)) {
          ec_enc_icdf(param_2,0,*(long *)(lVar7 + 0x30) + (long)local_88[lVar10],8);
          iVar9 = -(int)(char)pbVar1[lVar10 + 9];
          goto LAB_00e85e38;
        }
        iVar9 = iVar9 + 4;
        puVar8 = (undefined7 *)(*(long *)(lVar7 + 0x30) + (long)local_88[lVar10]);
      }
      else {
        ec_enc_icdf(param_2,8,*(long *)(lVar7 + 0x30) + (long)local_88[lVar10],8);
        iVar9 = (int)(char)pbVar1[lVar10 + 9];
LAB_00e85e38:
        iVar9 = iVar9 + -4;
        puVar8 = &silk_NLSF_EXT_iCDF;
      }
      ec_enc_icdf(param_2,iVar9,puVar8,8);
      lVar7 = *(long *)(param_1 + 0x1260);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(short *)(lVar7 + 2));
  }
  if (*(int *)(param_1 + 0x11e4) == 4) {
    ec_enc_icdf(param_2,(long)(char)pbVar1[0x1f],&silk_NLSF_interpolation_factor_iCDF,8);
  }
  if (pbVar1[0x1d] != 2) goto LAB_00e86004;
  if ((param_5 == 2) && (*(int *)(param_1 + 0x1698) == 2)) {
    iVar5 = (int)*(short *)(pbVar1 + 0x1a) - (int)*(short *)(param_1 + 0x169c);
    uVar4 = iVar5 - 0xc;
    iVar9 = 0;
    if (0xffffffeb < uVar4) {
      iVar9 = iVar5 + 9;
    }
    ec_enc_icdf(param_2,iVar9,silk_pitch_delta_iCDF,8);
    if (uVar4 < 0xffffffec) goto LAB_00e85f2c;
  }
  else {
LAB_00e85f2c:
    iVar5 = *(int *)(param_1 + 0x11e0);
    sVar2 = *(short *)(pbVar1 + 0x1a);
    iVar9 = iVar5 >> 1;
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = (int)sVar2 / iVar9;
    }
    ec_enc_icdf(param_2,iVar3,silk_pitch_lag_iCDF,8);
    ec_enc_icdf(param_2,(int)sVar2 - (int)(short)iVar3 * ((iVar5 << 0xf) >> 0x10),
                *(undefined8 *)(param_1 + 0x1250),8);
  }
  *(undefined2 *)(param_1 + 0x169c) = *(undefined2 *)(pbVar1 + 0x1a);
  ec_enc_icdf(param_2,(long)(char)pbVar1[0x1c],*(undefined8 *)(param_1 + 0x1258),8);
  ec_enc_icdf(param_2,(long)(char)pbVar1[0x20],&silk_LTP_per_index_iCDF,8);
  if (0 < *(int *)(param_1 + 0x11e4)) {
    lVar7 = 0;
    do {
      ec_enc_icdf(param_2,(long)(char)pbVar1[lVar7 + 4],
                  *(undefined8 *)(silk_LTP_gain_iCDF_ptrs + (long)(char)pbVar1[0x20] * 8),8);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x11e4));
  }
  if (param_5 == 0) {
    ec_enc_icdf(param_2,(long)(char)pbVar1[0x21],&silk_LTPscale_iCDF,8);
  }
LAB_00e86004:
  *(int *)(param_1 + 0x1698) = (int)(char)pbVar1[0x1d];
  ec_enc_icdf(param_2,(long)(char)pbVar1[0x22],&silk_uniform4_iCDF,8);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


