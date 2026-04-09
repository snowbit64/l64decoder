// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotationLimitSpring
// Entry Point: 007602c0
// Size: 52 bytes
// Signature: undefined __thiscall setRotationLimitSpring(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setRotationLimitSpring(MethodInvocation*) */

void __thiscall
JointConstructor::setRotationLimitSpring(JointConstructor *this,MethodInvocation *param_1)

{
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 0x50);
  return;
}


