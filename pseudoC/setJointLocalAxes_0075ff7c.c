// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLocalAxes
// Entry Point: 0075ff7c
// Size: 56 bytes
// Signature: undefined __thiscall setJointLocalAxes(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointLocalAxes(MethodInvocation*) */

void __thiscall
JointConstructor::setJointLocalAxes(JointConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  this[0x58] = (JointConstructor)0x0;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x24) = uVar3;
  return;
}


