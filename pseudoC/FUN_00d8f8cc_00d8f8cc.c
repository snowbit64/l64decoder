// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f8cc
// Entry Point: 00d8f8cc
// Size: 272 bytes
// Signature: undefined FUN_00d8f8cc(void)


void FUN_00d8f8cc(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  char *pcVar19;
  long lVar20;
  
  if (0 < (int)param_4) {
    iVar7 = *(int *)(param_1 + 0x74);
    lVar13 = *(long *)(param_1 + 0x270);
    if (iVar7 == 0) {
      uVar10 = *(uint *)(lVar13 + 0x4c);
      do {
        param_4 = param_4 - 1;
        uVar10 = uVar10 + 1 & 0xf;
      } while (param_4 != 0);
      *(uint *)(lVar13 + 0x4c) = uVar10;
      return;
    }
    plVar15 = *(long **)(lVar13 + 0x30);
    uVar14 = 0;
    uVar10 = *(uint *)(lVar13 + 0x4c);
    lVar3 = *plVar15;
    lVar5 = plVar15[1];
    lVar16 = plVar15[2];
    do {
      uVar17 = 0;
      lVar4 = *(long *)(lVar13 + 0x50);
      lVar6 = *(long *)(lVar13 + 0x58);
      pbVar18 = *(byte **)(param_2 + uVar14 * 8);
      lVar11 = *(long *)(lVar13 + 0x60);
      pcVar19 = *(char **)(param_3 + uVar14 * 8);
      iVar9 = iVar7;
      do {
        lVar20 = (long)(int)uVar10 * 0x40;
        lVar12 = (ulong)uVar17 * 4;
        bVar8 = *pbVar18;
        uVar17 = uVar17 + 1 & 0xf;
        iVar9 = iVar9 + -1;
        pbVar1 = pbVar18 + 1;
        pbVar2 = pbVar18 + 2;
        pbVar18 = pbVar18 + 3;
        *pcVar19 = *(char *)(lVar5 + (long)*(int *)(lVar6 + lVar20 + lVar12) + (ulong)*pbVar1) +
                   *(char *)(lVar3 + (long)*(int *)(lVar4 + lVar20 + lVar12) + (ulong)bVar8) +
                   *(char *)(lVar16 + (long)*(int *)(lVar11 + lVar20 + lVar12) + (ulong)*pbVar2);
        pcVar19 = pcVar19 + 1;
      } while (iVar9 != 0);
      uVar14 = uVar14 + 1;
      uVar10 = uVar10 + 1 & 0xf;
      *(uint *)(lVar13 + 0x4c) = uVar10;
    } while (uVar14 != param_4);
  }
  return;
}


