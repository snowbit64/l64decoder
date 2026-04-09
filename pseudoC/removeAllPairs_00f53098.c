// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllPairs
// Entry Point: 00f53098
// Size: 360 bytes
// Signature: undefined removeAllPairs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btHashedSimplePairCache::removeAllPairs() */

void btHashedSimplePairCache::removeAllPairs(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(long *)(in_x0 + 0x18) != 0) && (*(char *)(in_x0 + 0x20) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x18) = 0;
  *(undefined4 *)(in_x0 + 0xc) = 0;
  *(undefined4 *)(in_x0 + 0x10) = 0;
  *(undefined *)(in_x0 + 0x20) = 1;
  if ((*(long *)(in_x0 + 0x38) != 0) && (*(char *)(in_x0 + 0x40) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined *)(in_x0 + 0x40) = 1;
  *(undefined8 *)(in_x0 + 0x38) = 0;
  *(undefined4 *)(in_x0 + 0x2c) = 0;
  *(undefined4 *)(in_x0 + 0x30) = 0;
  if ((*(long *)(in_x0 + 0x58) != 0) && (*(char *)(in_x0 + 0x60) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined4 *)(in_x0 + 0x4c) = 0;
  *(undefined4 *)(in_x0 + 0x50) = 0;
  *(undefined *)(in_x0 + 0x60) = 1;
  if (*(int *)(in_x0 + 0x10) < 2) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    lVar3 = (*(code *)PTR_FUN_01048e38)(0x20,0x10);
    uVar1 = *(uint *)(in_x0 + 0xc);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        puVar2 = (undefined8 *)(*(long *)(in_x0 + 0x18) + lVar4);
        uVar5 = *puVar2;
        ((undefined8 *)(lVar3 + lVar4))[1] = puVar2[1];
        *(undefined8 *)(lVar3 + lVar4) = uVar5;
        lVar4 = lVar4 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar4 != 0);
    }
    if ((*(long *)(in_x0 + 0x18) != 0) && (*(char *)(in_x0 + 0x20) != '\0')) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(in_x0 + 0x18) = lVar3;
    *(undefined *)(in_x0 + 0x20) = 1;
    *(undefined4 *)(in_x0 + 0x10) = 2;
  }
  growTables();
  return;
}


