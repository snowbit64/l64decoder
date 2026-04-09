// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextId
// Entry Point: 009e4820
// Size: 192 bytes
// Signature: undefined getNextId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRule::getNextId() */

int ProceduralPlacementRule::getNextId(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  
  lVar4 = *(long *)(in_x0 + 0x68);
  lVar5 = *(long *)(in_x0 + 0x70) - lVar4;
  if (lVar5 == 0) {
    return 1;
  }
  uVar6 = lVar5 >> 3;
  uVar3 = uVar6;
  if (uVar6 < 2) {
    uVar3 = 1;
  }
  if (uVar3 < 2) {
LAB_009e485c:
    uVar7 = 0;
    iVar8 = 0;
  }
  else {
    uVar7 = uVar6;
    if (uVar6 < 2) {
      uVar7 = 1;
    }
    if ((int)(uVar7 - 1) == -1 || uVar7 - 1 >> 0x20 != 0) goto LAB_009e485c;
    uVar7 = uVar3 & 0xfffffffffffffffe;
    plVar11 = (long *)(lVar4 + 8);
    uVar12 = uVar7;
    iVar9 = 0;
    iVar10 = 0;
    do {
      plVar1 = plVar11 + -1;
      lVar5 = *plVar11;
      plVar11 = plVar11 + 2;
      iVar8 = *(int *)(*plVar1 + 0x28);
      if (*(int *)(*plVar1 + 0x28) <= iVar9) {
        iVar8 = iVar9;
      }
      iVar2 = *(int *)(lVar5 + 0x28);
      if (*(int *)(lVar5 + 0x28) <= iVar10) {
        iVar2 = iVar10;
      }
      uVar12 = uVar12 - 2;
      iVar9 = iVar8;
      iVar10 = iVar2;
    } while (uVar12 != 0);
    if (iVar8 <= iVar2) {
      iVar8 = iVar2;
    }
    if (uVar3 == uVar7) goto LAB_009e4880;
  }
  do {
    lVar5 = uVar7 * 8;
    uVar7 = uVar7 + 1;
    iVar9 = *(int *)(*(long *)(lVar4 + lVar5) + 0x28);
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    iVar8 = iVar9;
  } while ((uVar7 & 0xffffffff) < uVar6);
LAB_009e4880:
  return iVar8 + 1;
}


