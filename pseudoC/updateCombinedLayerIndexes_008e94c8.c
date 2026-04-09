// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateCombinedLayerIndexes
// Entry Point: 008e94c8
// Size: 44 bytes
// Signature: undefined updateCombinedLayerIndexes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::updateCombinedLayerIndexes() */

void BaseTerrain::updateCombinedLayerIndexes(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x38);
  lVar2 = *(long *)(in_x0 + 0x40) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      *(int *)(lVar1 + uVar3 * 0x40) = (int)uVar3;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar2 >> 6));
  }
  return;
}


