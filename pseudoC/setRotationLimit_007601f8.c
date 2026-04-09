// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotationLimit
// Entry Point: 007601f8
// Size: 48 bytes
// Signature: undefined __thiscall setRotationLimit(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setRotationLimit(MethodInvocation*) */

void __thiscall JointConstructor::setRotationLimit(JointConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 8 << (ulong)(uVar1 & 0x1f);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x60) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x6c) = *(undefined4 *)(param_1 + 0x20);
  return;
}


