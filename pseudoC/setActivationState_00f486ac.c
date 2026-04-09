// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setActivationState
// Entry Point: 00f486ac
// Size: 24 bytes
// Signature: undefined __thiscall setActivationState(btCollisionObject * this, int param_1)


/* btCollisionObject::setActivationState(int) const */

void __thiscall btCollisionObject::setActivationState(btCollisionObject *this,int param_1)

{
  if ((*(uint *)(this + 0xec) & 0xfffffffe) != 4) {
    *(int *)(this + 0xec) = param_1;
  }
  return;
}


