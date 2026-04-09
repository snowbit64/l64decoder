// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowExtrusionDistance
// Entry Point: 00a54ecc
// Size: 8 bytes
// Signature: undefined __thiscall setShadowExtrusionDistance(LightSource * this, float param_1)


/* LightSource::setShadowExtrusionDistance(float) */

void __thiscall LightSource::setShadowExtrusionDistance(LightSource *this,float param_1)

{
  *(float *)(this + 0x1c0) = param_1;
  return;
}


