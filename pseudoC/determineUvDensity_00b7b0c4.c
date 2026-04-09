// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: determineUvDensity
// Entry Point: 00b7b0c4
// Size: 36 bytes
// Signature: undefined __cdecl determineUvDensity(double param_1, double param_2, double param_3)


/* IndexedTriangleSet::determineUvDensity(double, double, double) */

float IndexedTriangleSet::determineUvDensity(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = param_2 * 0.75;
  if (param_2 * 0.75 <= param_2 - param_3) {
    dVar1 = param_2 - param_3;
  }
  if (dVar1 <= param_1) {
    dVar1 = param_1;
  }
  return (float)dVar1;
}


