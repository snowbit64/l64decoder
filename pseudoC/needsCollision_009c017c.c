// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009c017c
// Size: 40 bytes
// Signature: undefined __thiscall needsCollision(ClosestRayResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::ClosestRayResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
Bt2SceneQueryUtil::ClosestRayResultCallback::needsCollision
          (ClosestRayResultCallback *this,btBroadphaseProxy *param_1)

{
  return (ushort)(*(ushort *)(this + 0x1a) & *(ushort *)(param_1 + 10) |
                 *(ushort *)(this + 0x18) & *(ushort *)(param_1 + 8)) != 0;
}


