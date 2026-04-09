// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeightChangeAmount
// Entry Point: 0089f2e8
// Size: 8 bytes
// Signature: undefined __thiscall setHeightChangeAmount(TerrainDeformation * this, float param_1)


/* TerrainDeformation::setHeightChangeAmount(float) */

void __thiscall TerrainDeformation::setHeightChangeAmount(TerrainDeformation *this,float param_1)

{
  *(float *)(this + 0xb8) = param_1;
  return;
}


