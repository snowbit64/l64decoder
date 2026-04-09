// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTranslationLimitSpring
// Entry Point: 00760270
// Size: 52 bytes
// Signature: undefined __thiscall setTranslationLimitSpring(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setTranslationLimitSpring(MethodInvocation*) */

void __thiscall
JointConstructor::setTranslationLimitSpring(JointConstructor *this,MethodInvocation *param_1)

{
  *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0x50);
  return;
}


