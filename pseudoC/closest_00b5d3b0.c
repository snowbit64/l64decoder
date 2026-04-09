// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closest
// Entry Point: 00b5d3b0
// Size: 56 bytes
// Signature: undefined __thiscall closest(SimplexSolver * this, Vector3 * param_1)


/* SimplexSolver::closest(Vector3&) */

uint __thiscall SimplexSolver::closest(SimplexSolver *this,Vector3 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = updateClosestVectorAndPoints();
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0xd0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return uVar2 & 1;
}


