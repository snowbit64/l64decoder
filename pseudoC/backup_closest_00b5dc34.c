// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backup_closest
// Entry Point: 00b5dc34
// Size: 20 bytes
// Signature: undefined __thiscall backup_closest(SimplexSolver * this, Vector3 * param_1)


/* SimplexSolver::backup_closest(Vector3&) */

void __thiscall SimplexSolver::backup_closest(SimplexSolver *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xd0);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)param_1 = uVar1;
  return;
}


