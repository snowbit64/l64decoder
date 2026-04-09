// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSlopeFromHeights
// Entry Point: 008a1878
// Size: 16 bytes
// Signature: undefined __thiscall getSlopeFromHeights(TerrainDeformation * this, float param_1, float param_2)


/* TerrainDeformation::getSlopeFromHeights(float, float) */

float __thiscall
TerrainDeformation::getSlopeFromHeights(TerrainDeformation *this,float param_1,float param_2)

{
  return (param_2 - param_1) / *(float *)(this + 0x44);
}


