// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOutsideAreaConstraints
// Entry Point: 0089f398
// Size: 16 bytes
// Signature: undefined __thiscall setOutsideAreaConstraints(TerrainDeformation * this, float param_1, float param_2, float param_3)


/* TerrainDeformation::setOutsideAreaConstraints(float, float, float) */

void __thiscall
TerrainDeformation::setOutsideAreaConstraints
          (TerrainDeformation *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x98) = param_1;
  *(float *)(this + 0x9c) = param_2;
  *(float *)(this + 0xa0) = param_3;
  return;
}


