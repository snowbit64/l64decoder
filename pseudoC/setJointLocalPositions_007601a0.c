// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointLocalPositions
// Entry Point: 007601a0
// Size: 56 bytes
// Signature: undefined __thiscall setJointLocalPositions(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointLocalPositions(MethodInvocation*) */

void __thiscall
JointConstructor::setJointLocalPositions(JointConstructor *this,MethodInvocation *param_1)

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
  this[0x5a] = (JointConstructor)0x0;
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar2;
  *(undefined4 *)(this + 0x54) = uVar3;
  return;
}


