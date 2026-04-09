// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBreakable
// Entry Point: 007601d8
// Size: 32 bytes
// Signature: undefined __thiscall setBreakable(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setBreakable(MethodInvocation*) */

void __thiscall JointConstructor::setBreakable(JointConstructor *this,MethodInvocation *param_1)

{
  *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x40;
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0x10);
  return;
}


