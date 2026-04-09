// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createUnitCube
// Entry Point: 00b7aae4
// Size: 48 bytes
// Signature: undefined __cdecl createUnitCube(float param_1, float param_2, float param_3)


/* IndexedTriangleSet::createUnitCube(float, float, float) */

void IndexedTriangleSet::createUnitCube(float param_1,float param_2,float param_3)

{
  createCuboid(param_1 + -0.5,param_1 + 0.5,param_2 + -0.5,param_2 + 0.5,param_3 + -0.5,
               param_3 + 0.5);
  return;
}


