// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotationLimitForceLimit
// Entry Point: 007602f4
// Size: 28 bytes
// Signature: undefined __thiscall setRotationLimitForceLimit(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setRotationLimitForceLimit(MethodInvocation*) */

void __thiscall
JointConstructor::setRotationLimitForceLimit(JointConstructor *this,MethodInvocation *param_1)

{
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0x20);
  return;
}


