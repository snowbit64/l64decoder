// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backup_closest
// Entry Point: 00f74548
// Size: 16 bytes
// Signature: undefined __thiscall backup_closest(btVoronoiSimplexSolver * this, btVector3 * param_1)


/* btVoronoiSimplexSolver::backup_closest(btVector3&) */

void __thiscall
btVoronoiSimplexSolver::backup_closest(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x114);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x11c);
  *(undefined8 *)param_1 = uVar1;
  return;
}


