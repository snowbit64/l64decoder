// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateMaterialList
// Entry Point: 00a6ac50
// Size: 76 bytes
// Signature: undefined updateMaterialList(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageCellGeometry::updateMaterialList() */

void FoliageCellGeometry::updateMaterialList(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_x0;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(in_x0 + 0x88);
  *(undefined4 *)(in_x0 + 0xa8) = 0;
  lVar3 = *(long *)(in_x0 + 0x90) - lVar1;
  if (lVar3 != 0) {
    uVar4 = 0;
    lVar5 = *(long *)(in_x0 + 0xa0);
    do {
      if (*(int *)(lVar1 + uVar4 * 4) != 0) {
        uVar2 = *(uint *)(in_x0 + 0xa8);
        *(uint *)(in_x0 + 0xa8) = uVar2 + 1;
        *(int *)(lVar5 + (ulong)uVar2 * 4) = (int)uVar4;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar3 >> 2));
  }
  return;
}


