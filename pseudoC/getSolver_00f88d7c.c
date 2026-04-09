// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSolver
// Entry Point: 00f88d7c
// Size: 20 bytes
// Signature: undefined __cdecl getSolver(_ param_1)


/* btSoftBody::getSolver(btSoftBody::eVSolver::_) */

code * btSoftBody::getSolver(_ param_1)

{
  code *pcVar1;
  
  pcVar1 = VSolve_Links;
  if (param_1 != 0) {
    pcVar1 = (code *)0x0;
  }
  return pcVar1;
}


