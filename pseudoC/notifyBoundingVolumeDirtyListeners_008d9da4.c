// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBoundingVolumeDirtyListeners
// Entry Point: 008d9da4
// Size: 80 bytes
// Signature: undefined notifyBoundingVolumeDirtyListeners(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DynamicGeometry::notifyBoundingVolumeDirtyListeners() */

void DynamicGeometry::notifyBoundingVolumeDirtyListeners(void)

{
  long in_x0;
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(in_x0 + 0x58);
  if (*(long *)(in_x0 + 0x60) != lVar1) {
    uVar2 = 0;
    do {
      (**(code **)(**(long **)(lVar1 + uVar2 * 8) + 0x10))();
      lVar1 = *(long *)(in_x0 + 0x58);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(in_x0 + 0x60) - lVar1 >> 3));
  }
  return;
}


