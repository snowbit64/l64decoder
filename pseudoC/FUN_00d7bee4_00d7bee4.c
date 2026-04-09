// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7bee4
// Entry Point: 00d7bee4
// Size: 292 bytes
// Signature: undefined FUN_00d7bee4(void)


void FUN_00d7bee4(long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar14 = *(long *)(param_1 + 0x260);
  lVar7 = (param_3 & 0xffffffff) * 8;
  uVar17 = *(uint *)(param_1 + 0x74);
  pbVar15 = *(byte **)(*param_2 + lVar7);
  lVar1 = *(long *)(lVar14 + 0x20);
  lVar2 = *(long *)(lVar14 + 0x28);
  pbVar10 = *(byte **)(param_2[1] + lVar7);
  lVar9 = *(long *)(lVar14 + 0x30);
  lVar14 = *(long *)(lVar14 + 0x38);
  pbVar12 = *(byte **)(param_2[2] + lVar7);
  lVar7 = *(long *)(param_1 + 0x198);
  puVar8 = (undefined *)*param_4;
  if (1 < uVar17) {
    uVar17 = uVar17 >> 1;
    pbVar11 = pbVar10;
    pbVar13 = pbVar12;
    do {
      pbVar12 = pbVar13 + 1;
      pbVar10 = pbVar11 + 1;
      uVar16 = (ulong)*pbVar15;
      uVar17 = uVar17 - 1;
      lVar6 = (long)*(int *)(lVar1 + (ulong)*pbVar13 * 4);
      lVar5 = (long)*(int *)(lVar2 + (ulong)*pbVar11 * 4);
      lVar4 = (*(long *)(lVar9 + (ulong)*pbVar13 * 8) + *(long *)(lVar14 + (ulong)*pbVar11 * 8)) *
              0x10000 >> 0x20;
      *puVar8 = *(undefined *)(lVar7 + lVar6 + uVar16);
      puVar8[1] = *(undefined *)(lVar7 + uVar16 + lVar4);
      puVar8[2] = *(undefined *)(lVar7 + lVar5 + uVar16);
      uVar16 = (ulong)pbVar15[1];
      puVar8[3] = *(undefined *)(lVar7 + lVar6 + uVar16);
      puVar8[4] = *(undefined *)(lVar7 + uVar16 + lVar4);
      pbVar15 = pbVar15 + 2;
      puVar8[5] = *(undefined *)(lVar7 + lVar5 + uVar16);
      puVar8 = puVar8 + 6;
      pbVar11 = pbVar10;
      pbVar13 = pbVar12;
    } while (uVar17 != 0);
    uVar17 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar17 & 1) != 0) {
    uVar16 = (ulong)*pbVar15;
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar10 * 8);
    lVar9 = *(long *)(lVar9 + (ulong)*pbVar12 * 8);
    iVar3 = *(int *)(lVar2 + (ulong)*pbVar10 * 4);
    *puVar8 = *(undefined *)(lVar7 + (long)*(int *)(lVar1 + (ulong)*pbVar12 * 4) + uVar16);
    puVar8[1] = *(undefined *)(lVar7 + uVar16 + (long)(int)((ulong)(lVar9 + lVar14) >> 0x10));
    puVar8[2] = *(undefined *)(lVar7 + (long)iVar3 + uVar16);
    return;
  }
  return;
}


