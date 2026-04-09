// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildAlgorithms
// Entry Point: 00f4fd04
// Size: 148 bytes
// Signature: undefined removeChildAlgorithms(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCompoundCompoundCollisionAlgorithm::removeChildAlgorithms() */

void btCompoundCompoundCollisionAlgorithm::removeChildAlgorithms(void)

{
  uint uVar1;
  long in_x0;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(in_x0 + 0x48);
  uVar1 = *(uint *)(lVar2 + 0xc);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x18) + lVar4 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(**(long **)(in_x0 + 8) + 0x78))(*(long **)(in_x0 + 8),puVar3);
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar4 != 0);
  }
  btHashedSimplePairCache::removeAllPairs();
  return;
}


