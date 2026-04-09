// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtNavMeshHeaderSwapEndian
// Entry Point: 00dd251c
// Size: 232 bytes
// Signature: undefined __cdecl dtNavMeshHeaderSwapEndian(uchar * param_1, int param_2)


/* dtNavMeshHeaderSwapEndian(unsigned char*, int) */

undefined  [16] dtNavMeshHeaderSwapEndian(uchar *param_1,int param_2)

{
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  auVar10._12_4_ = 0;
  auVar10._8_4_ = param_2;
  iVar1 = *(int *)param_1;
  if (iVar1 == 0x56414e44) {
    iVar4 = 0x7000000;
    if (*(int *)(param_1 + 4) != 0x7000000) goto LAB_00dd25fc;
  }
  else if ((iVar1 != 0x444e4156) || (iVar4 = *(int *)(param_1 + 4), iVar4 != 7)) {
LAB_00dd25fc:
    return ZEXT416((uint)param_2) << 0x40;
  }
  auVar6 = NEON_rev32(*(undefined (*) [16])(param_1 + 8),1);
  *param_1 = (uchar)((uint)iVar1 >> 0x18);
  auVar7 = NEON_rev32(*(undefined (*) [16])(param_1 + 0x18),1);
  param_1[3] = (uchar)iVar1;
  auVar8 = NEON_rev32(*(undefined (*) [16])(param_1 + 0x28),1);
  *(long *)(param_1 + 0x10) = auVar6._8_8_;
  *(long *)(param_1 + 8) = auVar6._0_8_;
  auVar9 = NEON_rev32(*(undefined (*) [16])(param_1 + 0x38),1);
  param_1[1] = (uchar)((uint)iVar1 >> 0x10);
  param_1[4] = (uchar)((uint)iVar4 >> 0x18);
  auVar6 = NEON_rev32(*(undefined (*) [16])(param_1 + 0x48),1);
  param_1[7] = (uchar)iVar4;
  uVar2 = param_1[0x60];
  param_1[0x60] = param_1[99];
  uVar3 = param_1[0x61];
  *(long *)(param_1 + 0x20) = auVar7._8_8_;
  *(long *)(param_1 + 0x18) = auVar7._0_8_;
  *(long *)(param_1 + 0x50) = auVar6._8_8_;
  *(long *)(param_1 + 0x48) = auVar6._0_8_;
  *(long *)(param_1 + 0x30) = auVar8._8_8_;
  *(long *)(param_1 + 0x28) = auVar8._0_8_;
  *(long *)(param_1 + 0x40) = auVar9._8_8_;
  *(long *)(param_1 + 0x38) = auVar9._0_8_;
  uVar5 = NEON_rev32(*(undefined8 *)(param_1 + 0x58),1);
  param_1[2] = (uchar)((uint)iVar1 >> 8);
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[99] = uVar2;
  param_1[0x61] = param_1[0x62];
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  param_1[0x62] = uVar3;
  auVar10._0_8_ = 1;
  return auVar10;
}


