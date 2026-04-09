// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 009b0b68
// Size: 76 bytes
// Signature: undefined __thiscall needsCollision(ContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::ContactResultCallback::needsCollision(btBroadphaseProxy*) const */

bool __thiscall
Bt2SceneQueryUtil::ContactResultCallback::needsCollision
          (ContactResultCallback *this,btBroadphaseProxy *param_1)

{
  if ((this[0x3c] == (ContactResultCallback)0x0) &&
     ((ushort)(*(ushort *)(this + 10) & *(ushort *)(param_1 + 10) |
              *(ushort *)(this + 8) & *(ushort *)(param_1 + 8)) != 0)) {
    return (*(uint *)(this + 0x34) & *(uint *)(*(long *)param_1 + 0xe0)) == *(uint *)(this + 0x38);
  }
  return false;
}


