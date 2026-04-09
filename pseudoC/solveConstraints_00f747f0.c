// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConstraints
// Entry Point: 00f747f0
// Size: 96 bytes
// Signature: undefined __cdecl solveConstraints(float param_1)


/* btDefaultSoftBodySolver::solveConstraints(float) */

float btDefaultSoftBodySolver::solveConstraints(float param_1)

{
  int iVar1;
  long in_x0;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(in_x0 + 0x1c);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(*(long *)(*(long *)(in_x0 + 0x28) + lVar3 * 8) + 0xec);
      if (iVar1 != 2 && iVar1 != 5) {
        param_1 = (float)btSoftBody::solveConstraints();
        iVar2 = *(int *)(in_x0 + 0x1c);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return param_1;
}


