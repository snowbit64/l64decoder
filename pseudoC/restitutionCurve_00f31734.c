// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: restitutionCurve
// Entry Point: 00f31734
// Size: 12 bytes
// Signature: undefined __cdecl restitutionCurve(float param_1, float param_2)


/* btSequentialImpulseConstraintSolver::restitutionCurve(float, float) */

float btSequentialImpulseConstraintSolver::restitutionCurve(float param_1,float param_2)

{
  return -param_1 * param_2;
}


