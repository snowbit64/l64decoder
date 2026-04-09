// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closest
// Entry Point: 00f742f4
// Size: 52 bytes
// Signature: undefined __thiscall closest(btVoronoiSimplexSolver * this, btVector3 * param_1)


/* btVoronoiSimplexSolver::closest(btVector3&) */

uint __thiscall btVoronoiSimplexSolver::closest(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = updateClosestVectorAndPoints();
  uVar2 = *(undefined8 *)(this + 0x114);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x11c);
  *(undefined8 *)param_1 = uVar2;
  return uVar1 & 1;
}


