// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00b5d32c
// Size: 32 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimplexSolver::reset() */

void SimplexSolver::reset(void)

{
  undefined4 *in_x0;
  
  *in_x0 = 0;
  *(undefined2 *)(in_x0 + 0x3a) = 0x100;
  in_x0[0x39] = 0x7f7fffff;
  *(undefined8 *)(in_x0 + 0x37) = 0x7f7fffff7f7fffff;
  return;
}


