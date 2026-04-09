// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearInstanceCounts
// Entry Point: 00a6aa3c
// Size: 100 bytes
// Signature: undefined clearInstanceCounts(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageCellGeometry::clearInstanceCounts() */

void FoliageCellGeometry::clearInstanceCounts(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(in_x0 + 0x70);
  lVar2 = *(long *)(in_x0 + 0x78) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    uVar4 = (lVar2 >> 3) * -0x5555555555555555;
    do {
      puVar5 = (undefined8 *)(lVar1 + uVar3 * 0x18);
      uVar3 = (ulong)((int)uVar3 + 1);
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
    } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
  }
  lVar1 = *(long *)(in_x0 + 0x88);
  lVar2 = *(long *)(in_x0 + 0x90) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      *(undefined4 *)(lVar1 + uVar3 * 4) = 0;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 2));
  }
  return;
}


