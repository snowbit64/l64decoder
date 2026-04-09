// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPointsBulk
// Entry Point: 009c0868
// Size: 196 bytes
// Signature: undefined addPointsBulk(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPointsBulk() */

void ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPointsBulk(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  DistanceMatrixTypeField *in_x0;
  long lVar5;
  int *piVar6;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar7;
  
  piVar11 = *(int **)(in_x0 + 0x10);
  piVar3 = *(int **)(in_x0 + 0x18);
  if (piVar11 == piVar3) goto LAB_009c0918;
  lVar5 = *(long *)(in_x0 + 8);
  iVar4 = *(int *)(in_x0 + 0x40);
  uVar8 = (long)piVar3 + (-8 - (long)piVar11);
  piVar6 = piVar11;
  if (uVar8 < 8) {
LAB_009c08e4:
    do {
      piVar7 = piVar6 + 2;
      *(undefined4 *)(lVar5 + (ulong)(uint)(*piVar6 + iVar4 * piVar6[1]) * 4) = 0;
      piVar6 = piVar7;
    } while (piVar7 != piVar3);
  }
  else {
    uVar8 = (uVar8 >> 3) + 1;
    uVar9 = uVar8 & 0x3ffffffffffffffe;
    piVar6 = piVar11 + 2;
    uVar10 = uVar9;
    do {
      iVar1 = *piVar6;
      iVar2 = piVar6[1];
      uVar10 = uVar10 - 2;
      *(undefined4 *)(lVar5 + (ulong)(uint)(piVar6[-2] + iVar4 * piVar6[-1]) * 4) = 0;
      *(undefined4 *)(lVar5 + (ulong)(uint)(iVar1 + iVar4 * iVar2) * 4) = 0;
      piVar6 = piVar6 + 4;
    } while (uVar10 != 0);
    piVar6 = piVar11 + uVar9 * 2;
    if (uVar8 != uVar9) goto LAB_009c08e4;
  }
  if (piVar11 != piVar3) {
    do {
      piVar6 = piVar11 + 2;
      addPoint(in_x0,*piVar11,piVar11[1]);
      piVar11 = piVar6;
    } while (piVar6 != piVar3);
    piVar11 = *(int **)(in_x0 + 0x10);
  }
LAB_009c0918:
  *(int **)(in_x0 + 0x18) = piVar11;
  return;
}


