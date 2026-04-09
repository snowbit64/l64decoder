// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScaleForTexelSize
// Entry Point: 0095d24c
// Size: 36 bytes
// Signature: undefined __cdecl getScaleForTexelSize(float param_1)


/* MultiresTexture::getScaleForTexelSize(float) const */

float MultiresTexture::getScaleForTexelSize(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1);
  return fVar1 / 0.6931472;
}


