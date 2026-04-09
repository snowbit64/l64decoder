// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setHeightScale
// Entry Point: 008e6e98
// Size: 24 bytes
// Signature: undefined __thiscall setHeightScale(BaseTerrain * this, float param_1)


/* BaseTerrain::setHeightScale(float) */

void __thiscall BaseTerrain::setHeightScale(BaseTerrain *this,float param_1)

{
  *(float *)(this + 0xa0) = param_1;
  *(float *)(this + 0xa4) = param_1 / 65535.0;
  return;
}


