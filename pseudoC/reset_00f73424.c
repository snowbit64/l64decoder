// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00f73424
// Size: 56 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btVoronoiSimplexSolver::reset() */

void btVoronoiSimplexSolver::reset(void)

{
  undefined4 *in_x0;
  
  *(undefined *)(in_x0 + 0x4e) = 0;
  *in_x0 = 0;
  *(undefined *)(in_x0 + 0x59) = 1;
  *(undefined8 *)(in_x0 + 0x54) = 0;
  *(undefined8 *)(in_x0 + 0x56) = 0;
  *(undefined *)(in_x0 + 0x58) = 0;
  *(undefined8 *)(in_x0 + 0x4b) = 0x5d5e0b6b;
  *(undefined8 *)(in_x0 + 0x49) = 0x5d5e0b6b5d5e0b6b;
  *(byte *)(in_x0 + 0x53) = *(byte *)(in_x0 + 0x53) & 0xf0;
  return;
}


