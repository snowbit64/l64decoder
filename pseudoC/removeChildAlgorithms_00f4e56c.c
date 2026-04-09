// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildAlgorithms
// Entry Point: 00f4e56c
// Size: 124 bytes
// Signature: undefined removeChildAlgorithms(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCompoundCollisionAlgorithm::removeChildAlgorithms() */

void btCompoundCollisionAlgorithm::removeChildAlgorithms(void)

{
  uint uVar1;
  long in_x0;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(in_x0 + 0x14);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(in_x0 + 0x20) + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)();
        (**(code **)(**(long **)(in_x0 + 8) + 0x78))
                  (*(long **)(in_x0 + 8),*(undefined8 *)(*(long *)(in_x0 + 0x20) + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  return;
}


