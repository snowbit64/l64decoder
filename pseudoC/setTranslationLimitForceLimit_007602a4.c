// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTranslationLimitForceLimit
// Entry Point: 007602a4
// Size: 28 bytes
// Signature: undefined __thiscall setTranslationLimitForceLimit(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setTranslationLimitForceLimit(MethodInvocation*) */

void __thiscall
JointConstructor::setTranslationLimitForceLimit(JointConstructor *this,MethodInvocation *param_1)

{
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  return;
}


