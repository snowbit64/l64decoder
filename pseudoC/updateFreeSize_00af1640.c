// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFreeSize
// Entry Point: 00af1640
// Size: 156 bytes
// Signature: undefined updateFreeSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SubAllocator::updateFreeSize() */

void SubAllocator::updateFreeSize(void)

{
  ulong uVar1;
  int *piVar2;
  long in_x0;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  piVar6 = *(int **)(in_x0 + 8);
  piVar2 = *(int **)(in_x0 + 0x10);
  *(undefined4 *)(in_x0 + 0x20) = 0;
  if (piVar6 != piVar2) {
    uVar3 = (long)piVar2 + (-8 - (long)piVar6);
    if (uVar3 < 0x40) {
      iVar7 = 0;
      piVar4 = piVar6;
    }
    else {
      uVar3 = (uVar3 >> 3) + 1;
      uVar1 = 8;
      if ((uVar3 & 7) != 0) {
        uVar1 = uVar3 & 7;
      }
      lVar5 = uVar3 - uVar1;
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      piVar4 = piVar6 + lVar5 * 2;
      piVar6 = piVar6 + 8;
      do {
        lVar5 = lVar5 + -8;
        iVar11 = iVar11 + *piVar6;
        iVar12 = iVar12 + piVar6[2];
        iVar13 = iVar13 + piVar6[4];
        iVar14 = iVar14 + piVar6[6];
        iVar7 = iVar7 + piVar6[-8];
        iVar8 = iVar8 + piVar6[-6];
        iVar9 = iVar9 + piVar6[-4];
        iVar10 = iVar10 + piVar6[-2];
        piVar6 = piVar6 + 0x10;
      } while (lVar5 != 0);
      iVar7 = iVar11 + iVar7 + iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10;
    }
    do {
      piVar6 = piVar4 + 2;
      iVar7 = iVar7 + *piVar4;
      piVar4 = piVar6;
    } while (piVar6 != piVar2);
    *(int *)(in_x0 + 0x20) = iVar7;
  }
  return;
}


