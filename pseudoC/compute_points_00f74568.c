// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_points
// Entry Point: 00f74568
// Size: 68 bytes
// Signature: undefined __thiscall compute_points(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2)


/* btVoronoiSimplexSolver::compute_points(btVector3&, btVector3&) */

void __thiscall
btVoronoiSimplexSolver::compute_points
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  
  updateClosestVectorAndPoints();
  uVar1 = *(undefined8 *)(this + 0xf4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0xfc);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x104);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + 0x10c);
  *(undefined8 *)param_2 = uVar1;
  return;
}


