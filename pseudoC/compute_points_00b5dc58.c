// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_points
// Entry Point: 00b5dc58
// Size: 80 bytes
// Signature: undefined __thiscall compute_points(SimplexSolver * this, Vector3 * param_1, Vector3 * param_2)


/* SimplexSolver::compute_points(Vector3&, Vector3&) */

void __thiscall SimplexSolver::compute_points(SimplexSolver *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  
  updateClosestVectorAndPoints();
  uVar1 = *(undefined4 *)(this + 0xc0);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0xb8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xcc);
  *(undefined8 *)param_2 = *(undefined8 *)(this + 0xc4);
  *(undefined4 *)(param_2 + 8) = uVar1;
  return;
}


