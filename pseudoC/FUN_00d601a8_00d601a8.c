// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d601a8
// Entry Point: 00d601a8
// Size: 1216 bytes
// Signature: undefined FUN_00d601a8(void)


undefined8 FUN_00d601a8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  short *psVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  
  lVar13 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar7 = *(int *)(lVar13 + 0x60);
    if (iVar7 == 0) {
      FUN_00d60668(param_1,*(undefined4 *)(lVar13 + 100));
      iVar7 = *(int *)(param_1 + 0x130);
      *(uint *)(lVar13 + 100) = *(int *)(lVar13 + 100) + 1U & 7;
    }
    *(int *)(lVar13 + 0x60) = iVar7 + -1;
  }
  if (*(int *)(param_1 + 400) < 1) {
    return 1;
  }
  lVar17 = *(long *)(param_1 + 0x1d0);
  lVar16 = 0;
LAB_00d60248:
  lVar8 = (long)*(int *)(param_1 + lVar16 * 4 + 0x194);
  lVar11 = lVar13 + lVar8 * 4;
  lVar20 = *(long *)(param_1 + lVar8 * 8 + 0x168);
  piVar9 = (int *)(lVar11 + 0x40);
  lVar8 = (long)*(int *)(lVar20 + 0x14);
  psVar12 = *(short **)(param_2 + lVar16 * 8);
  piVar18 = (int *)(lVar11 + 0x50);
  plVar14 = (long *)(lVar13 + lVar8 * 8 + 0x68);
  iVar7 = (int)*psVar12 - *piVar9;
  lVar11 = *plVar14 + (long)*piVar18;
  if (iVar7 == 0) {
    FUN_00d60800(param_1,lVar11,0);
    *piVar18 = 0;
  }
  else {
    *piVar9 = (int)*psVar12;
    FUN_00d60800(param_1,lVar11,1);
    bVar5 = iVar7 < 1;
    if (bVar5) {
      iVar7 = -iVar7;
      iVar19 = 8;
      lVar21 = 3;
    }
    else {
      iVar19 = 4;
      lVar21 = 2;
    }
    FUN_00d60800(param_1,lVar11 + 1,bVar5);
    lVar11 = lVar11 + lVar21;
    uVar2 = iVar7 - 1;
    *piVar18 = iVar19;
    if (uVar2 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
      FUN_00d60800(param_1,lVar11,1);
      lVar11 = *plVar14 + 0x14;
      if (uVar2 != 1) {
        uVar15 = 1;
        uVar4 = uVar2;
        do {
          FUN_00d60800(param_1,lVar11,1);
          uVar15 = uVar15 << 1;
          lVar11 = lVar11 + 1;
          bVar5 = 3 < uVar4;
          uVar4 = (int)uVar4 >> 1;
        } while (bVar5);
      }
    }
    FUN_00d60800(param_1,lVar11,0);
    lVar8 = param_1 + lVar8;
    iVar7 = 0;
    if ((int)uVar15 < (int)((ulong)(1L << ((ulong)*(byte *)(lVar8 + 0xe0) & 0x3f)) >> 1)) {
LAB_00d603b4:
      *piVar18 = iVar7;
    }
    else if ((int)((ulong)(1L << ((ulong)*(byte *)(lVar8 + 0xf0) & 0x3f)) >> 1) < (int)uVar15) {
      iVar7 = *piVar18 + 8;
      goto LAB_00d603b4;
    }
    if (1 < uVar15) {
      do {
        FUN_00d60800(param_1,lVar11 + 0xe,((int)uVar15 >> 1 & uVar2) != 0);
        bVar5 = 3 < uVar15;
        uVar15 = (int)uVar15 >> 1;
      } while (bVar5);
    }
  }
  iVar7 = *(int *)(param_1 + 0x1d8);
  if (iVar7 != 0) {
    lVar8 = 0;
    lVar11 = (long)*(int *)(lVar20 + 0x18);
    do {
      if (psVar12[*(int *)(lVar17 + (long)iVar7 * 4 + lVar8 * 4)] != 0) {
        iVar19 = (int)lVar8 + iVar7;
        plVar14 = (long *)(lVar13 + lVar11 * 8 + 0xe8);
        if (0 < iVar19) {
          iVar7 = 0;
          goto LAB_00d60478;
        }
        iVar10 = 0;
        if (0 < iVar7) goto LAB_00d60628;
        goto LAB_00d60234;
      }
      lVar8 = lVar8 + -1;
    } while (iVar7 + (int)lVar8 != 0);
    iVar10 = 0;
    plVar14 = (long *)(lVar13 + lVar11 * 8 + 0xe8);
    if (-1 < -iVar7) goto LAB_00d60234;
    goto LAB_00d60628;
  }
  goto LAB_00d60234;
LAB_00d60478:
  do {
    lVar20 = *plVar14 + (long)iVar7 + (long)iVar7 * 2;
    FUN_00d60800(param_1,lVar20,0);
    lVar8 = (long)iVar7 + 1;
    sVar6 = psVar12[*(int *)(lVar17 + lVar8 * 4)];
    if (sVar6 == 0) {
      piVar9 = (int *)(lVar17 + 4 + lVar8 * 4);
      do {
        iVar10 = iVar7;
        FUN_00d60800(param_1,lVar20 + 1,0);
        lVar20 = lVar20 + 3;
        iVar7 = iVar10 + 1;
        sVar6 = psVar12[*piVar9];
        piVar9 = piVar9 + 1;
      } while (sVar6 == 0);
      iVar10 = iVar10 + 2;
    }
    else {
      iVar10 = (int)lVar8;
    }
    iVar3 = (int)sVar6;
    FUN_00d60800(param_1,lVar20 + 1,1);
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_00d60800(param_1,lVar13 + 0x168,iVar3 < 1);
    lVar20 = lVar20 + 2;
    uVar2 = iVar1 - 1;
    if ((uVar2 == 0) || (FUN_00d60800(param_1,lVar20,1), uVar2 == 1)) {
      FUN_00d60800(param_1,lVar20,0);
    }
    else {
      FUN_00d60800(param_1,lVar20,1);
      lVar8 = 0xbd;
      if ((int)(uint)*(byte *)(param_1 + lVar11 + 0x100) <= iVar7) {
        lVar8 = 0xd9;
      }
      lVar8 = *plVar14 + lVar8;
      if (uVar2 < 4) {
        FUN_00d60800(param_1,lVar8,0);
        lVar8 = lVar8 + 0xe;
        uVar15 = 2;
      }
      else {
        uVar15 = 2;
        uVar4 = uVar2;
        do {
          lVar20 = lVar8;
          FUN_00d60800(param_1,lVar20,1);
          uVar15 = uVar15 << 1;
          bVar5 = 7 < uVar4;
          lVar8 = lVar20 + 1;
          uVar4 = (int)uVar4 >> 1;
        } while (bVar5);
        FUN_00d60800(param_1,lVar20 + 1,0);
        if (uVar15 == 0) goto LAB_00d60470;
        lVar8 = lVar20 + 0xf;
      }
      do {
        FUN_00d60800(param_1,lVar8,((int)uVar15 >> 1 & uVar2) != 0);
        bVar5 = 3 < uVar15;
        uVar15 = (int)uVar15 >> 1;
      } while (bVar5);
    }
LAB_00d60470:
    iVar7 = iVar10;
  } while (iVar10 < iVar19);
  if (iVar10 < *(int *)(param_1 + 0x1d8)) {
LAB_00d60628:
    FUN_00d60800(param_1,*plVar14 + (long)(iVar10 * 3),1);
  }
LAB_00d60234:
  lVar16 = lVar16 + 1;
  if (*(int *)(param_1 + 400) <= lVar16) {
    return 1;
  }
  goto LAB_00d60248;
}


