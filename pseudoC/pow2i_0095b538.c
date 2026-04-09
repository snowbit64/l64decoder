// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pow2i
// Entry Point: 0095b538
// Size: 36 bytes
// Signature: undefined __cdecl pow2i(int param_1)


/* MultiresTexture::pow2i(int) */

float MultiresTexture::pow2i(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = -param_1;
  if (-1 < param_1) {
    uVar1 = param_1;
  }
  fVar2 = (float)(ulong)(uint)(1 << (ulong)(uVar1 & 0x1f));
  fVar3 = 1.0 / fVar2;
  if (-1 < param_1) {
    fVar3 = fVar2;
  }
  return fVar3;
}


