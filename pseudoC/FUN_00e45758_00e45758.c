// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e45758
// Entry Point: 00e45758
// Size: 324 bytes
// Signature: undefined FUN_00e45758(void)


undefined8 FUN_00e45758(long param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *(uint *)(param_1 + 0x6e8);
  piVar3 = *(int **)(param_1 + 0x40);
  if (uVar8 == 0xffffffff) {
    uVar9 = 0xffffffff;
    bVar2 = true;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5e0);
    uVar9 = uVar8;
    if ((int)uVar8 < (int)uVar1) {
      pbVar7 = (byte *)((int)uVar8 + param_1 + 0x5e4);
      do {
        piVar3 = (int *)((long)piVar3 + (ulong)*pbVar7);
        uVar9 = uVar8;
        if ((ulong)*pbVar7 != 0xff) break;
        uVar8 = uVar8 + 1;
        pbVar7 = pbVar7 + 1;
        uVar9 = uVar1;
      } while (uVar1 != uVar8);
    }
    if (*(int **)(param_1 + 0x50) < piVar3) goto LAB_00e457b0;
    bVar2 = false;
    if (uVar9 == uVar1) {
      uVar9 = 0xffffffff;
    }
  }
  do {
    if (uVar9 != 0xffffffff) {
      return 1;
    }
    piVar6 = *(int **)(param_1 + 0x50);
    if (piVar6 <= (int *)((long)piVar3 + 0x1aU)) break;
    if ((*piVar3 != s_OggSvorbis_010484d8._0_4_) || (*(char *)(piVar3 + 1) != '\0')) {
LAB_00e45884:
      uVar5 = 0x15;
      goto LAB_00e45888;
    }
    if (bVar2) {
      if ((*(int *)(param_1 + 0x4f8) != 0) && ((*(byte *)((long)piVar3 + 5) & 1) != 0))
      goto LAB_00e45884;
    }
    else if ((*(byte *)((long)piVar3 + 5) & 1) == 0) goto LAB_00e45884;
    piVar4 = (int *)((long)piVar3 + (ulong)*(byte *)((long)piVar3 + 0x1a) + 0x1b);
    if (piVar6 < piVar4) break;
    uVar8 = (uint)*(byte *)((long)piVar3 + 0x1a);
    if (uVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar11 = (ulong)*(byte *)((long)piVar3 + uVar10 + 0x1b);
        piVar4 = (int *)((long)piVar4 + uVar11);
        if (uVar11 != 0xff) goto LAB_00e457dc;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar10 = (ulong)uVar8;
    }
LAB_00e457dc:
    uVar9 = (uint)uVar10;
    bVar2 = false;
    if (uVar9 == uVar8) {
      uVar9 = 0xffffffff;
    }
    piVar3 = piVar4;
  } while (piVar4 <= piVar6);
LAB_00e457b0:
  uVar5 = 1;
LAB_00e45888:
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  return 0;
}


