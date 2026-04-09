// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTriangleUvDensityUseless
// Entry Point: 00b7ae4c
// Size: 20 bytes
// Signature: undefined __cdecl isTriangleUvDensityUseless(float param_1)


/* IndexedTriangleSet::isTriangleUvDensityUseless(float) */

bool IndexedTriangleSet::isTriangleUvDensityUseless(float param_1)

{
  return param_1 < 0.015625;
}


