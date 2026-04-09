// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5f918
// Entry Point: 00d5f918
// Size: 584 bytes
// Signature: undefined FUN_00d5f918(void)


undefined8 FUN_00d5f918(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  lVar9 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar4 = *(int *)(lVar9 + 0x60);
    if (iVar4 == 0) {
      FUN_00d60668(param_1,*(undefined4 *)(lVar9 + 100));
      iVar4 = *(int *)(param_1 + 0x130);
      *(uint *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1U & 7;
    }
    *(int *)(lVar9 + 0x60) = iVar4 + -1;
  }
  if (0 < *(int *)(param_1 + 400)) {
    lVar10 = 0;
    do {
      lVar5 = (long)*(int *)(param_1 + lVar10 * 4 + 0x194);
      lVar8 = lVar9 + lVar5 * 4;
      piVar6 = (int *)(lVar8 + 0x40);
      lVar5 = (long)*(int *)(*(long *)(param_1 + lVar5 * 8 + 0x168) + 0x14);
      piVar12 = (int *)(lVar8 + 0x50);
      plVar11 = (long *)(lVar9 + lVar5 * 8 + 0x68);
      lVar8 = *plVar11 + (long)*piVar12;
      iVar4 = (int)**(short **)(param_2 + lVar10 * 8) >> (*(uint *)(param_1 + 0x1c8) & 0x1f);
      iVar13 = iVar4 - *piVar6;
      if (iVar13 == 0) {
        FUN_00d60800(param_1,lVar8,0);
        *piVar12 = 0;
      }
      else {
        *piVar6 = iVar4;
        FUN_00d60800(param_1,lVar8,1);
        bVar1 = iVar13 < 1;
        if (bVar1) {
          iVar13 = -iVar13;
          iVar4 = 8;
          lVar7 = 3;
        }
        else {
          iVar4 = 4;
          lVar7 = 2;
        }
        FUN_00d60800(param_1,lVar8 + 1,bVar1);
        lVar8 = lVar8 + lVar7;
        uVar2 = iVar13 - 1;
        *piVar12 = iVar4;
        if (uVar2 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
          FUN_00d60800(param_1,lVar8,1);
          lVar8 = *plVar11 + 0x14;
          if (uVar2 != 1) {
            uVar14 = 1;
            uVar3 = uVar2;
            do {
              FUN_00d60800(param_1,lVar8,1);
              uVar14 = uVar14 << 1;
              lVar8 = lVar8 + 1;
              bVar1 = 3 < uVar3;
              uVar3 = (int)uVar3 >> 1;
            } while (bVar1);
          }
        }
        FUN_00d60800(param_1,lVar8,0);
        lVar5 = param_1 + lVar5;
        iVar4 = 0;
        if ((int)uVar14 < (int)((ulong)(1L << ((ulong)*(byte *)(lVar5 + 0xe0) & 0x3f)) >> 1)) {
LAB_00d5fb04:
          *piVar12 = iVar4;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)(lVar5 + 0xf0) & 0x3f)) >> 1) < (int)uVar14) {
          iVar4 = *piVar12 + 8;
          goto LAB_00d5fb04;
        }
        if (1 < uVar14) {
          do {
            FUN_00d60800(param_1,lVar8 + 0xe,((int)uVar14 >> 1 & uVar2) != 0);
            bVar1 = 3 < uVar14;
            uVar14 = (int)uVar14 >> 1;
          } while (bVar1);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 400));
  }
  return 1;
}


