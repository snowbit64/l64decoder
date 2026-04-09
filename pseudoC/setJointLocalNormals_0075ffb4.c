// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLocalNormals
// Entry Point: 0075ffb4
// Size: 56 bytes
// Signature: undefined __thiscall setJointLocalNormals(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointLocalNormals(MethodInvocation*) */

void __thiscall
JointConstructor::setJointLocalNormals(JointConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  this[0x59] = (JointConstructor)0x0;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  return;
}


