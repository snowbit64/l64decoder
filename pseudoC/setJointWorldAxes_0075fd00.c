// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointWorldAxes
// Entry Point: 0075fd00
// Size: 60 bytes
// Signature: undefined __thiscall setJointWorldAxes(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointWorldAxes(MethodInvocation*) */

void __thiscall
JointConstructor::setJointWorldAxes(JointConstructor *this,MethodInvocation *param_1)

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
  this[0x58] = (JointConstructor)0x1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x24) = uVar3;
  return;
}


