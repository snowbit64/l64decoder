// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008a2a20
// Size: 68 bytes
// Signature: undefined __thiscall update(TerrainDeformation * this, float param_1)


/* non-virtual thunk to TerrainDeformation::update(float) */

float __thiscall TerrainDeformation::update(TerrainDeformation *this,float param_1)

{
  uint uVar1;
  
  if (this[0xf8] != (TerrainDeformation)0x0) {
    uVar1 = 0;
    do {
      param_1 = (float)doIteration();
      if (0x1c < uVar1) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (this[0xf8] != (TerrainDeformation)0x0);
  }
  return param_1;
}


