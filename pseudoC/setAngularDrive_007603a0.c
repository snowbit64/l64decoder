// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAngularDrive
// Entry Point: 007603a0
// Size: 108 bytes
// Signature: undefined __thiscall setAngularDrive(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setAngularDrive(MethodInvocation*) */

void __thiscall JointConstructor::setAngularDrive(JointConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if (param_1[0x10] != (MethodInvocation)0x0) {
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x20000 << (ulong)(uVar1 & 0x1f);
  }
  if (param_1[0x20] != (MethodInvocation)0x0) {
    *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) | 0x4000 << (ulong)(uVar1 & 0x1f);
  }
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x120) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 300) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x138) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x144) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + (long)(int)uVar1 * 4 + 0x150) = *(undefined4 *)(param_1 + 0x70);
  return;
}


