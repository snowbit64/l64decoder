// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColShapeId
// Entry Point: 0098d6f0
// Size: 28 bytes
// Signature: undefined __cdecl getColShapeId(btCollisionShape * param_1)


/* Bt2PhysicsColShapeCache::getColShapeId(btCollisionShape*) */

undefined8 Bt2PhysicsColShapeCache::getColShapeId(btCollisionShape *param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x20);
  }
  return 0;
}


