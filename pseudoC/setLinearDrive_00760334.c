// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLinearDrive
// Entry Point: 00760334
// Size: 108 bytes
// Signature: undefined __thiscall setLinearDrive(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setLinearDrive(MethodInvocation*) */

void __thiscall JointConstructor::setLinearDrive(JointConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if (param_1[0x10] != (MethodInvocation)0x0) {
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x800 << (ulong)(uVar1 & 0x1f);
  }
  if (param_1[0x20] != (MethodInvocation)0x0) {
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x100 << (ulong)(uVar1 & 0x1f);
  }
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0xf0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0xfc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x108) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x114) = *(undefined4 *)(param_1 + 0x70);
  return;
}


