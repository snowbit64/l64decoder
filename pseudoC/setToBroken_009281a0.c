// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setToBroken
// Entry Point: 009281a0
// Size: 24 bytes
// Signature: undefined __cdecl setToBroken(GsShape * param_1)


/* DestructionGeometry::setToBroken(GsShape*) */

void DestructionGeometry::setToBroken(GsShape *param_1)

{
  if (param_1[0x78] != (GsShape)0x0) {
    return;
  }
  param_1[0x78] = (GsShape)0x1;
  return;
}


