// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6cd10
// Entry Point: 00d6cd10
// Size: 564 bytes
// Signature: undefined FUN_00d6cd10(void)


void FUN_00d6cd10(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  byte **ppbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  iVar5 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  iVar7 = *(int *)(param_1 + 0x154);
  if (0 < (int)(iVar5 - uVar3)) {
    if (iVar7 + 1 < 0 != SCARRY4(iVar7,1)) {
      return;
    }
    uVar20 = (ulong)(iVar7 + 2);
    plVar19 = (long *)(param_3 + -8);
    do {
      memset((void *)(*plVar19 + (ulong)uVar3),
             (uint)*(byte *)((long)(void *)(*plVar19 + (ulong)uVar3) + -1),
             (ulong)(iVar5 + ~uVar3) + 1);
      uVar20 = uVar20 - 1;
      plVar19 = plVar19 + 1;
    } while (uVar20 != 0);
    iVar7 = *(int *)(param_1 + 0x154);
  }
  if (0 < iVar7) {
    iVar8 = *(int *)(param_1 + 0x128) * -0x200 + 0x10000;
    iVar7 = *(int *)(param_1 + 0x128) * 0x40;
    if (iVar5 + -2 == 0) {
      lVar9 = 0;
      do {
        lVar12 = lVar9 * 8;
        lVar9 = lVar9 + 1;
        ppbVar2 = (byte **)(param_3 + lVar12);
        puVar13 = *(undefined **)(param_4 + lVar12);
        pbVar17 = *ppbVar2;
        bVar4 = *pbVar17;
        iVar5 = (uint)*ppbVar2[1] + (uint)*ppbVar2[-1] + (uint)bVar4;
        iVar18 = (uint)ppbVar2[1][1] + (uint)ppbVar2[-1][1] + (uint)pbVar17[1];
        *puVar13 = (char)(((iVar5 * 2 - (uint)bVar4) + iVar18) * iVar7 + iVar8 * (uint)bVar4 +
                          0x8000 >> 0x10);
        puVar13[1] = (char)(((iVar5 + iVar18 * 2) - (uint)pbVar17[1]) * iVar7 +
                            iVar8 * (uint)pbVar17[1] + 0x8000 >> 0x10);
      } while (lVar9 < *(int *)(param_1 + 0x154));
    }
    else {
      lVar9 = 0;
      do {
        lVar12 = lVar9 * 8;
        lVar9 = lVar9 + 1;
        ppbVar2 = (byte **)(param_3 + lVar12);
        pbVar16 = *(byte **)(param_3 + lVar9 * 8);
        pbVar17 = ppbVar2[-1];
        pbVar10 = *ppbVar2;
        puVar13 = *(undefined **)(param_4 + lVar12);
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        iVar18 = (uint)*pbVar16 + (uint)*pbVar17 + (uint)bVar4;
        iVar1 = (uint)pbVar16[1] + (uint)pbVar17[1] + (uint)*pbVar10;
        *puVar13 = (char)(((iVar18 * 2 - (uint)bVar4) + iVar1) * iVar7 + iVar8 * (uint)bVar4 +
                          0x8000 >> 0x10);
        puVar13 = puVar13 + 1;
        pbVar16 = pbVar16 + 2;
        pbVar17 = pbVar17 + 2;
        iVar6 = iVar5 + -2;
        do {
          iVar15 = iVar1;
          iVar6 = iVar6 + -1;
          pbVar11 = pbVar10 + 1;
          iVar1 = (uint)*pbVar16 + (uint)*pbVar17 + (uint)*pbVar11;
          puVar14 = puVar13 + 1;
          *puVar13 = (char)((((iVar18 + iVar15) - (uint)*pbVar10) + iVar1) * iVar7 +
                            iVar8 * (uint)*pbVar10 + 0x8000 >> 0x10);
          pbVar10 = pbVar11;
          puVar13 = puVar14;
          pbVar16 = pbVar16 + 1;
          pbVar17 = pbVar17 + 1;
          iVar18 = iVar15;
        } while (iVar6 != 0);
        *puVar14 = (char)(((iVar15 + iVar1 * 2) - (uint)*pbVar11) * iVar7 + iVar8 * (uint)*pbVar11 +
                          0x8000 >> 0x10);
      } while (lVar9 < *(int *)(param_1 + 0x154));
    }
  }
  return;
}


