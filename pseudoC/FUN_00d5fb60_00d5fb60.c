// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5fb60
// Entry Point: 00d5fb60
// Size: 796 bytes
// Signature: undefined FUN_00d5fb60(void)


undefined8 FUN_00d5fb60(long param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  
  lVar10 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar5 = *(int *)(lVar10 + 0x60);
    if (iVar5 == 0) {
      FUN_00d60668(param_1,*(undefined4 *)(lVar10 + 100));
      iVar5 = *(int *)(param_1 + 0x130);
      *(uint *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1U & 7;
    }
    *(int *)(lVar10 + 0x60) = iVar5 + -1;
  }
  lVar7 = *(long *)(param_1 + 0x1d0);
  lVar9 = 0;
  iVar5 = *(int *)(param_1 + 0x1c0);
  lVar13 = *param_2;
  lVar8 = (long)*(int *)(*(long *)(param_1 + 0x168) + 0x18);
  do {
    sVar1 = *(short *)(lVar13 + (long)*(int *)(lVar7 + (long)iVar5 * 4 + lVar9 * 4) * 2);
    if (sVar1 < 0) {
      iVar6 = -(int)sVar1 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
    }
    else {
      iVar6 = (int)sVar1 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
    }
    if (iVar6 != 0) {
      iVar15 = iVar5 + (int)lVar9;
      plVar14 = (long *)(lVar10 + lVar8 * 8 + 0xe8);
      iVar6 = *(int *)(param_1 + 0x1bc) + -1;
      if (*(int *)(param_1 + 0x1bc) <= iVar15) goto LAB_00d5fc58;
      goto LAB_00d5fe38;
    }
    lVar9 = lVar9 + -1;
  } while (iVar5 + (int)lVar9 != 0);
  iVar15 = 0;
  plVar14 = (long *)(lVar10 + lVar8 * 8 + 0xe8);
  iVar6 = *(int *)(param_1 + 0x1bc) + -1;
  if (*(int *)(param_1 + 0x1bc) < 1) {
LAB_00d5fc58:
LAB_00d5fc90:
    lVar9 = *plVar14 + (long)iVar6 + (long)iVar6 * 2;
    FUN_00d60800(param_1,lVar9,0);
    lVar9 = lVar9 + 1;
    piVar17 = (int *)(lVar7 + 4 + (long)iVar6 * 4);
    iVar5 = iVar6;
    do {
      iVar6 = (int)*(short *)(lVar13 + (long)*piVar17 * 2);
      if (iVar6 < 0) {
        iVar6 = -iVar6 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
        if (iVar6 != 0) {
          uVar12 = 1;
          goto LAB_00d5fd14;
        }
      }
      else {
        iVar6 = iVar6 >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
        if (iVar6 != 0) goto code_r0x00d5fd08;
      }
      FUN_00d60800(param_1,lVar9,0);
      iVar5 = iVar5 + 1;
      piVar17 = piVar17 + 1;
      lVar9 = lVar9 + 3;
    } while( true );
  }
LAB_00d5fe38:
  if (iVar6 < iVar5) {
    FUN_00d60800(param_1,*plVar14 + (long)(iVar6 * 3),1);
  }
  return 1;
code_r0x00d5fd08:
  uVar12 = 0;
LAB_00d5fd14:
  FUN_00d60800(param_1,lVar9,1);
  FUN_00d60800(param_1,lVar10 + 0x168,uVar12);
  lVar9 = lVar9 + 1;
  uVar2 = iVar6 - 1;
  if ((uVar2 == 0) || (FUN_00d60800(param_1,lVar9,1), uVar2 == 1)) {
    FUN_00d60800(param_1,lVar9,0);
  }
  else {
    FUN_00d60800(param_1,lVar9,1);
    lVar9 = 0xbd;
    if ((int)(uint)*(byte *)(param_1 + lVar8 + 0x100) <= iVar5) {
      lVar9 = 0xd9;
    }
    lVar9 = *plVar14 + lVar9;
    if (uVar2 < 4) {
      FUN_00d60800(param_1,lVar9,0);
      lVar9 = lVar9 + 0xe;
      uVar16 = 2;
    }
    else {
      uVar16 = 2;
      uVar3 = uVar2;
      do {
        lVar11 = lVar9;
        FUN_00d60800(param_1,lVar11,1);
        uVar16 = uVar16 << 1;
        bVar4 = 7 < uVar3;
        lVar9 = lVar11 + 1;
        uVar3 = (int)uVar3 >> 1;
      } while (bVar4);
      FUN_00d60800(param_1,lVar11 + 1,0);
      if (uVar16 == 0) goto LAB_00d5fc84;
      lVar9 = lVar11 + 0xf;
    }
    do {
      FUN_00d60800(param_1,lVar9,((int)uVar16 >> 1 & uVar2) != 0);
      bVar4 = 3 < uVar16;
      uVar16 = (int)uVar16 >> 1;
    } while (bVar4);
  }
LAB_00d5fc84:
  iVar6 = iVar5 + 1;
  if (iVar15 <= iVar6) goto LAB_00d5fe30;
  goto LAB_00d5fc90;
LAB_00d5fe30:
  iVar6 = iVar5 + 1;
  iVar5 = *(int *)(param_1 + 0x1c0);
  goto LAB_00d5fe38;
}


