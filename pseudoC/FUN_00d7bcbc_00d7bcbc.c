// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7bcbc
// Entry Point: 00d7bcbc
// Size: 472 bytes
// Signature: undefined FUN_00d7bcbc(void)


void FUN_00d7bcbc(long param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  lVar15 = *(long *)(param_1 + 0x260);
  pbVar8 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  lVar3 = *(long *)(lVar15 + 0x20);
  lVar12 = *(long *)(lVar15 + 0x28);
  lVar4 = *(long *)(lVar15 + 0x30);
  lVar15 = *(long *)(lVar15 + 0x38);
  pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar16 = (undefined *)*param_4;
  puVar14 = (undefined *)param_4[1];
  uVar5 = *(uint *)(param_1 + 0x74);
  lVar11 = *(long *)(param_1 + 0x198);
  if (1 < uVar5) {
    lVar13 = 0;
    do {
      pbVar1 = pbVar18 + lVar13;
      pbVar2 = pbVar17 + lVar13;
      lVar13 = lVar13 + 1;
      uVar7 = (ulong)*pbVar8;
      lVar10 = (long)*(int *)(lVar3 + (ulong)*pbVar1 * 4);
      lVar9 = (long)*(int *)(lVar12 + (ulong)*pbVar2 * 4);
      lVar6 = (*(long *)(lVar4 + (ulong)*pbVar1 * 8) + *(long *)(lVar15 + (ulong)*pbVar2 * 8)) *
              0x10000 >> 0x20;
      *puVar16 = *(undefined *)(lVar11 + lVar10 + uVar7);
      puVar16[1] = *(undefined *)(lVar11 + uVar7 + lVar6);
      puVar16[2] = *(undefined *)(lVar11 + lVar9 + uVar7);
      uVar7 = (ulong)pbVar8[1];
      puVar16[3] = *(undefined *)(lVar11 + lVar10 + uVar7);
      puVar16[4] = *(undefined *)(lVar11 + uVar7 + lVar6);
      puVar16[5] = *(undefined *)(lVar11 + lVar9 + uVar7);
      puVar16 = puVar16 + 6;
      uVar7 = (ulong)*pbVar19;
      *puVar14 = *(undefined *)(lVar11 + lVar10 + uVar7);
      puVar14[1] = *(undefined *)(lVar11 + uVar7 + lVar6);
      puVar14[2] = *(undefined *)(lVar11 + lVar9 + uVar7);
      uVar7 = (ulong)pbVar19[1];
      puVar14[3] = *(undefined *)(lVar11 + lVar10 + uVar7);
      pbVar8 = pbVar8 + 2;
      puVar14[4] = *(undefined *)(lVar11 + uVar7 + lVar6);
      pbVar19 = pbVar19 + 2;
      puVar14[5] = *(undefined *)(lVar11 + lVar9 + uVar7);
      puVar14 = puVar14 + 6;
    } while (uVar5 >> 1 != (uint)lVar13);
    uVar5 = *(uint *)(param_1 + 0x74);
    pbVar18 = pbVar18 + lVar13;
    pbVar17 = pbVar17 + lVar13;
  }
  if ((uVar5 & 1) != 0) {
    uVar7 = (ulong)*pbVar8;
    lVar13 = (long)*(int *)(lVar3 + (ulong)*pbVar18 * 4);
    lVar12 = (long)*(int *)(lVar12 + (ulong)*pbVar17 * 4);
    lVar3 = (*(long *)(lVar4 + (ulong)*pbVar18 * 8) + *(long *)(lVar15 + (ulong)*pbVar17 * 8)) *
            0x10000 >> 0x20;
    *puVar16 = *(undefined *)(lVar11 + lVar13 + uVar7);
    puVar16[1] = *(undefined *)(lVar11 + uVar7 + lVar3);
    puVar16[2] = *(undefined *)(lVar11 + lVar12 + uVar7);
    uVar7 = (ulong)*pbVar19;
    *puVar14 = *(undefined *)(lVar11 + lVar13 + uVar7);
    puVar14[1] = *(undefined *)(lVar11 + uVar7 + lVar3);
    puVar14[2] = *(undefined *)(lVar11 + lVar12 + uVar7);
    return;
  }
  return;
}


