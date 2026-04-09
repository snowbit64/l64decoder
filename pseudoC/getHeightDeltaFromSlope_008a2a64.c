// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightDeltaFromSlope
// Entry Point: 008a2a64
// Size: 12 bytes
// Signature: undefined __thiscall getHeightDeltaFromSlope(TerrainDeformation * this, float param_1)


/* TerrainDeformation::getHeightDeltaFromSlope(float) */

float __thiscall TerrainDeformation::getHeightDeltaFromSlope(TerrainDeformation *this,float param_1)

{
  return *(float *)(this + 0x44) * param_1;
}


