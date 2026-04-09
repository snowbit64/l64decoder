// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009c02e0
// Size: 40 bytes
// Signature: undefined __thiscall needsCollision(AllHitsRayResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::AllHitsRayResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
Bt2SceneQueryUtil::AllHitsRayResultCallback::needsCollision
          (AllHitsRayResultCallback *this,btBroadphaseProxy *param_1)

{
  return (ushort)(*(ushort *)(this + 0x1a) & *(ushort *)(param_1 + 10) |
                 *(ushort *)(this + 0x18) & *(ushort *)(param_1 + 8)) != 0;
}


