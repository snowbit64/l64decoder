// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inSimplex
// Entry Point: 00b5dbac
// Size: 136 bytes
// Signature: undefined __thiscall inSimplex(SimplexSolver * this, Vector3 * param_1)


/* SimplexSolver::inSimplex(Vector3 const&) */

byte __thiscall SimplexSolver::inSimplex(SimplexSolver *this,Vector3 *param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  float *pfVar4;
  
  uVar3 = (ulong)*(uint *)this;
  bVar2 = 0;
  if (*(uint *)this != 0) {
    pfVar4 = (float *)(this + 8);
    do {
      if ((*(float *)param_1 == pfVar4[-1]) && (*(float *)(param_1 + 4) == *pfVar4)) {
        bVar1 = *(float *)(param_1 + 8) == pfVar4[1];
      }
      else {
        bVar1 = false;
      }
      bVar2 = bVar1 | bVar2;
      pfVar4 = pfVar4 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((*(float *)(this + 0xdc) == *(float *)param_1) &&
     (*(float *)(this + 0xe0) == *(float *)(param_1 + 4))) {
    bVar2 = *(float *)(this + 0xe4) == *(float *)(param_1 + 8) | bVar2;
  }
  return bVar2;
}


