// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointWorldPositions
// Entry Point: 0075ff40
// Size: 60 bytes
// Signature: undefined __thiscall setJointWorldPositions(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointWorldPositions(MethodInvocation*) */

void __thiscall
JointConstructor::setJointWorldPositions(JointConstructor *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  this[0x5a] = (JointConstructor)0x1;
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar2;
  *(undefined4 *)(this + 0x54) = uVar3;
  return;
}


