// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_init
// Entry Point: 00df5cc0
// Size: 580 bytes
// Signature: undefined oc_state_init(void)


int oc_state_init(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_2 == (undefined8 *)0x0) {
    return -1;
  }
  uVar1 = *(uint *)((long)param_2 + 4);
  if ((((((uVar1 & 0xf) != 0) || (uVar2 = *(uint *)(param_2 + 1), (uVar2 & 0xf) != 0)) ||
       (uVar1 == 0)) || ((uVar1 >> 0x14 != 0 || (uVar2 == 0)))) || (uVar2 >> 0x14 != 0)) {
    return -10;
  }
  if (uVar1 < *(int *)((long)param_2 + 0xc) + *(uint *)((long)param_2 + 0x14)) {
    return -10;
  }
  if (uVar2 < (uint)(*(int *)(param_2 + 2) + *(int *)(param_2 + 3))) {
    return -10;
  }
  if (0xff < *(uint *)((long)param_2 + 0x14)) {
    return -10;
  }
  if (0xff < uVar2 - (*(int *)(param_2 + 2) + *(int *)(param_2 + 3))) {
    return -10;
  }
  if (2 < *(uint *)((long)param_2 + 0x2c)) {
    return -10;
  }
  if (3 < *(uint *)(param_2 + 6)) {
    return -10;
  }
  memset(param_1,0,0xd050);
  uVar10 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  iVar7 = *(int *)(param_2 + 2);
  iVar3 = *(int *)(param_2 + 3);
  iVar4 = *(int *)(param_2 + 1);
  *(undefined *)(param_1 + 0x81) = 0xff;
  param_1[8] = oc_frag_copy_c;
  param_1[9] = oc_frag_recon_intra_c;
  *(int *)(param_1 + 3) = iVar4 - (iVar7 + iVar3);
  param_1[10] = oc_frag_recon_inter_c;
  param_1[0xb] = oc_frag_recon_inter2_c;
  param_1[0xc] = oc_idct8x8_c;
  param_1[0xd] = oc_state_frag_recon_c;
  param_1[0xe] = oc_state_frag_copy_list_c;
  param_1[0xf] = oc_state_loop_filter_frag_rows_c;
  param_1[0x10] = oc_restore_fpu_c;
  param_1[0x11] = OC_FZIG_ZAG;
  iVar7 = FUN_00df5f04(param_1);
  if ((iVar7 < 0) || (iVar7 = FUN_00df7440(param_1,param_3), iVar7 < 0)) {
    FUN_00df7998(param_1);
    return iVar7;
  }
  if (0x1f < *(uint *)((long)param_2 + 0x3c)) {
    *(undefined4 *)((long)param_1 + 0x3c) = 0x1f;
  }
  bVar5 = *(byte *)param_2;
  param_1[0x7f] = 0xffffffffffffffff;
  param_1[0x7e] = 0;
  if (bVar5 < 4) {
    if (bVar5 == 3) {
      if (2 < *(byte *)((long)param_2 + 1)) goto LAB_00df5e98;
      if (*(byte *)((long)param_2 + 1) == 2) {
        bVar6 = *(byte *)((long)param_2 + 2) != 0;
        goto LAB_00df5ee8;
      }
    }
    bVar6 = false;
  }
  else {
LAB_00df5e98:
    bVar6 = true;
  }
LAB_00df5ee8:
  *(bool *)((long)param_1 + 0x409) = bVar6;
  return 0;
}


