// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSolver
// Entry Point: 00f88d90
// Size: 32 bytes
// Signature: undefined __cdecl getSolver(_ param_1)


/* btSoftBody::getSolver(btSoftBody::ePSolver::_) */

undefined * btSoftBody::getSolver(_ param_1)

{
  if (param_1 < 4) {
    return (&PTR_PSolve_Links_0101bc58)[(int)param_1];
  }
  return (undefined *)0x0;
}


