// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btRand2
// Entry Point: 00f316a8
// Size: 36 bytes
// Signature: undefined btRand2(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSequentialImpulseConstraintSolver::btRand2() */

void btSequentialImpulseConstraintSolver::btRand2(void)

{
  long in_x0;
  
  *(ulong *)(in_x0 + 0x140) = (ulong)(*(int *)(in_x0 + 0x140) * 0x19660d + 0x3c6ef35f);
  return;
}


