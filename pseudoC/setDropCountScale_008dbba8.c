// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDropCountScale
// Entry Point: 008dbba8
// Size: 44 bytes
// Signature: undefined __thiscall setDropCountScale(Precipitation * this, float param_1)


/* Precipitation::setDropCountScale(float) */

void __thiscall Precipitation::setDropCountScale(Precipitation *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)NEON_fmin(param_1,0x3f800000);
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
  fVar3 = 0.0;
  if (0.0 <= param_1) {
    fVar3 = fVar2;
  }
  *(int *)(this + 0x6c) = (int)(fVar3 * fVar1);
  return;
}


