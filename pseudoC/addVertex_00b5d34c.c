// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertex
// Entry Point: 00b5d34c
// Size: 100 bytes
// Signature: undefined __thiscall addVertex(SimplexSolver * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* SimplexSolver::addVertex(Vector3 const&, Vector3 const&, Vector3 const&) */

void __thiscall
SimplexSolver::addVertex(SimplexSolver *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(uint *)this;
  this[0xe9] = (SimplexSolver)0x1;
  *(undefined4 *)(this + 0xe4) = uVar1;
  *(undefined8 *)(this + 0xdc) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + (ulong)uVar2 * 0xc + 4) = *(undefined8 *)param_1;
  *(undefined4 *)(this + (ulong)uVar2 * 0xc + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + (ulong)uVar2 * 0xc + 0x40) = *(undefined8 *)param_2;
  *(undefined4 *)(this + (ulong)uVar2 * 0xc + 0x48) = uVar1;
  uVar3 = *(undefined8 *)param_3;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(uint *)this = uVar2 + 1;
  *(undefined8 *)(this + (ulong)uVar2 * 0xc + 0x7c) = uVar3;
  *(undefined4 *)(this + (ulong)uVar2 * 0xc + 0x84) = uVar1;
  return;
}


