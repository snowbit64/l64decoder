// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnableCollision
// Entry Point: 0076031c
// Size: 24 bytes
// Signature: undefined __thiscall setEnableCollision(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setEnableCollision(MethodInvocation*) */

void __thiscall
JointConstructor::setEnableCollision(JointConstructor *this,MethodInvocation *param_1)

{
  *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) & 0xffffff7f | (uint)(byte)*param_1 << 7;
  return;
}


