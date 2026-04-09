// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireColShape
// Entry Point: 0098ddb8
// Size: 32 bytes
// Signature: undefined __thiscall acquireColShape(Bt2PhysicsColShapeCache * this, btCollisionShape * param_1)


/* Bt2PhysicsColShapeCache::acquireColShape(btCollisionShape*) */

bool __thiscall
Bt2PhysicsColShapeCache::acquireColShape(Bt2PhysicsColShapeCache *this,btCollisionShape *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  return lVar1 != 0;
}


