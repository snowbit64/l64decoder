// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009c04c4
// Size: 44 bytes
// Signature: undefined __thiscall needsCollision(ContactResultCallback * this, btBroadphaseProxy * param_1)


/* btCollisionWorld::ContactResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
btCollisionWorld::ContactResultCallback::needsCollision
          (ContactResultCallback *this,btBroadphaseProxy *param_1)

{
  if ((*(ushort *)(this + 10) & *(ushort *)(param_1 + 8)) != 0) {
    return (*(ushort *)(param_1 + 10) & *(ushort *)(this + 8)) != 0;
  }
  return false;
}


