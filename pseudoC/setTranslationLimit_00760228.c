// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTranslationLimit
// Entry Point: 00760228
// Size: 72 bytes
// Signature: undefined __thiscall setTranslationLimit(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setTranslationLimit(MethodInvocation*) */

void __thiscall
JointConstructor::setTranslationLimit(JointConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)param_1;
  uVar2 = 1 << (ulong)(uVar1 & 0x1f);
  if (param_1[0x10] == (MethodInvocation)0x0) {
    uVar2 = *(uint *)(this + 0x5c) & (uVar2 ^ 0xffffffff);
  }
  else {
    uVar2 = *(uint *)(this + 0x5c) | uVar2;
  }
  *(uint *)(this + 0x5c) = uVar2;
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x78) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x84) = *(undefined4 *)(param_1 + 0x30);
  return;
}


