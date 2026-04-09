// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthMapSlopeScaleBias
// Entry Point: 00a54bf4
// Size: 8 bytes
// Signature: undefined __thiscall setDepthMapSlopeScaleBias(LightSource * this, float param_1)


/* LightSource::setDepthMapSlopeScaleBias(float) */

void __thiscall LightSource::setDepthMapSlopeScaleBias(LightSource *this,float param_1)

{
  *(float *)(this + 0x1b0) = param_1;
  return;
}


