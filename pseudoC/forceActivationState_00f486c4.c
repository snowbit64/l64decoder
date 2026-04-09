// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: forceActivationState
// Entry Point: 00f486c4
// Size: 8 bytes
// Signature: undefined __thiscall forceActivationState(btCollisionObject * this, int param_1)


/* btCollisionObject::forceActivationState(int) const */

void __thiscall btCollisionObject::forceActivationState(btCollisionObject *this,int param_1)

{
  *(int *)(this + 0xec) = param_1;
  return;
}


