// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_merged_upsampler
// Entry Point: 00d7b944
// Size: 568 bytes
// Signature: undefined jinit_merged_upsampler(void)


void jinit_merged_upsampler(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code **ppcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  dwfenc *pdVar17;
  char *pcVar18;
  fde_table_entry *pfVar19;
  long lVar20;
  
  ppcVar6 = (code **)(***(code ***)(param_1 + 8))(param_1,1,0x58);
  iVar3 = *(int *)(param_1 + 0x74);
  iVar4 = *(int *)(param_1 + 0x7c);
  *(code ***)(param_1 + 0x260) = ppcVar6;
  *(undefined *)(ppcVar6 + 2) = 0;
  iVar5 = *(int *)(param_1 + 0x184);
  *(int *)((long)ppcVar6 + 0x4c) = iVar4 * iVar3;
  *ppcVar6 = FUN_00d7bb7c;
  if (iVar5 == 2) {
    pcVar12 = *(code **)(*(long *)(param_1 + 8) + 8);
    ppcVar6[1] = FUN_00d7bb90;
    ppcVar6[3] = FUN_00d7bcbc;
    pcVar12 = (code *)(*pcVar12)(param_1,1);
  }
  else {
    pcVar12 = (code *)0x0;
    ppcVar6[1] = FUN_00d7be94;
    ppcVar6[3] = FUN_00d7bee4;
  }
  ppcVar13 = *(code ***)(param_1 + 8);
  ppcVar6[8] = pcVar12;
  iVar3 = *(int *)(param_1 + 0x3c);
  lVar20 = *(long *)(param_1 + 0x260);
  uVar7 = (**ppcVar13)(param_1,1,0x400);
  ppcVar6 = *(code ***)(param_1 + 8);
  *(undefined8 *)(lVar20 + 0x20) = uVar7;
  uVar7 = (**ppcVar6)(param_1,1,0x400);
  ppcVar6 = *(code ***)(param_1 + 8);
  *(undefined8 *)(lVar20 + 0x28) = uVar7;
  uVar7 = (**ppcVar6)(param_1,1,0x800);
  ppcVar6 = *(code ***)(param_1 + 8);
  *(undefined8 *)(lVar20 + 0x30) = uVar7;
  lVar8 = (**ppcVar6)(param_1,1,0x800);
  lVar1 = *(long *)(lVar20 + 0x20);
  lVar2 = *(long *)(lVar20 + 0x28);
  lVar15 = 0;
  lVar14 = *(long *)(lVar20 + 0x30);
  *(long *)(lVar20 + 0x38) = lVar8;
  if (iVar3 == 7) {
    pdVar17 = &lsda_exception_table_00589980;
    lVar20 = 0xb6d180;
    lVar16 = -0x1c52200;
    lVar10 = -0x1666980;
    do {
      lVar9 = lVar15 * 8;
      lVar11 = lVar15 * 4;
      lVar15 = lVar15 + 1;
      *(long *)(lVar14 + lVar9) = lVar20;
      lVar20 = lVar20 + -0x16da3;
      *(dwfenc **)(lVar8 + lVar9) = pdVar17;
      pdVar17 = pdVar17 + -0xb033;
      *(int *)(lVar1 + lVar11) = (int)((ulong)lVar10 >> 0x10);
      *(int *)(lVar2 + lVar11) = (int)((ulong)lVar16 >> 0x10);
      lVar16 = lVar16 + 0x38b44;
      lVar10 = lVar10 + 0x2cdd3;
    } while (lVar15 != 0x100);
  }
  else {
    pcVar18 = "ptoPP10HexDecoderD0Ev";
    pfVar19 = &fde_table_entry_005b6900;
    lVar20 = -0xe25100;
    lVar16 = -0xb2f480;
    do {
      lVar10 = lVar15 * 8;
      lVar9 = lVar15 * 4;
      lVar15 = lVar15 + 1;
      *(fde_table_entry **)(lVar14 + lVar10) = pfVar19;
      pfVar19 = (fde_table_entry *)((long)&pfVar19[-0x16db].data_loc + 2);
      *(char **)(lVar8 + lVar10) = pcVar18;
      pcVar18 = pcVar18 + -0x5819;
      *(int *)(lVar1 + lVar9) = (int)((ulong)lVar16 >> 0x10);
      *(int *)(lVar2 + lVar9) = (int)((ulong)lVar20 >> 0x10);
      lVar20 = lVar20 + 0x1c5a2;
      lVar16 = lVar16 + 0x166e9;
    } while (lVar15 != 0x100);
  }
  return;
}


