// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decoder_set_fs
// Entry Point: 00e6397c
// Size: 436 bytes
// Signature: undefined silk_decoder_set_fs(void)


undefined4 silk_decoder_set_fs(long param_1,uint param_2,int param_3)

{
  undefined3 *puVar1;
  undefined3 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  uVar5 = (param_2 & 0xffff) << 2;
  iVar6 = (int)(short)param_2;
  iVar4 = (int)*(short *)(param_1 + 0x914) * (int)(short)((short)uVar5 + (short)param_2);
  *(uint *)(param_1 + 0x91c) = (-(param_2 >> 0xf & 1) & 0xfffc0000 | uVar5) + iVar6;
  if ((*(uint *)(param_1 + 0x90c) == param_2) && (*(int *)(param_1 + 0x910) == param_3)) {
    uVar8 = 0;
LAB_00e63a0c:
    if (iVar4 == *(int *)(param_1 + 0x918)) {
      return uVar8;
    }
    bVar7 = true;
  }
  else {
    uVar8 = silk_resampler_init(param_1 + 0x990,iVar6 * 1000,param_3,0);
    bVar7 = false;
    *(int *)(param_1 + 0x910) = param_3;
    if (*(uint *)(param_1 + 0x90c) == param_2) goto LAB_00e63a0c;
  }
  puVar1 = (undefined3 *)silk_pitch_contour_iCDF;
  puVar2 = (undefined3 *)silk_pitch_contour_NB_iCDF;
  if (*(int *)(param_1 + 0x914) != 4) {
    puVar1 = (undefined3 *)silk_pitch_contour_10_ms_iCDF;
    puVar2 = &silk_pitch_contour_10_ms_NB_iCDF;
  }
  if (param_2 != 8) {
    puVar2 = puVar1;
  }
  *(undefined3 **)(param_1 + 0x958) = puVar2;
  if (bVar7) goto LAB_00e63b10;
  bVar7 = (param_2 & 0xfffffffb) != 8;
  uVar10 = 10;
  if (bVar7) {
    uVar10 = 0x10;
  }
  *(int *)(param_1 + 0x920) = iVar6 * 0x14;
  *(undefined4 *)(param_1 + 0x924) = uVar10;
  puVar3 = silk_NLSF_CB_NB_MB;
  if (bVar7) {
    puVar3 = silk_NLSF_CB_WB;
  }
  *(undefined1 **)(param_1 + 0xac0) = puVar3;
  if (param_2 == 0x10) {
    puVar9 = &silk_uniform8_iCDF;
LAB_00e63ad0:
    *(undefined8 **)(param_1 + 0x950) = puVar9;
  }
  else {
    if (param_2 == 0xc) {
      puVar9 = (undefined8 *)&silk_uniform6_iCDF;
      goto LAB_00e63ad0;
    }
    if (param_2 == 8) {
      puVar9 = (undefined8 *)&silk_uniform4_iCDF;
      goto LAB_00e63ad0;
    }
  }
  *(undefined4 *)(param_1 + 0x948) = 1;
  *(undefined4 *)(param_1 + 0x904) = 100;
  *(undefined *)(param_1 + 0x908) = 10;
  *(undefined4 *)(param_1 + 0x105c) = 0;
  memset((void *)(param_1 + 0x544),0,0x3c0);
  *(undefined8 *)(param_1 + 0x50c) = 0;
  *(undefined8 *)(param_1 + 0x504) = 0;
  *(undefined8 *)(param_1 + 0x51c) = 0;
  *(undefined8 *)(param_1 + 0x514) = 0;
  *(undefined8 *)(param_1 + 0x52c) = 0;
  *(undefined8 *)(param_1 + 0x524) = 0;
  *(undefined8 *)(param_1 + 0x53c) = 0;
  *(undefined8 *)(param_1 + 0x534) = 0;
LAB_00e63b10:
  *(uint *)(param_1 + 0x90c) = param_2;
  *(int *)(param_1 + 0x918) = iVar4;
  return uVar8;
}


