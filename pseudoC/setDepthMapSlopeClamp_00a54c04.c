// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthMapSlopeClamp
// Entry Point: 00a54c04
// Size: 8 bytes
// Signature: undefined __thiscall setDepthMapSlopeClamp(LightSource * this, float param_1)


/* LightSource::setDepthMapSlopeClamp(float) */

void __thiscall LightSource::setDepthMapSlopeClamp(LightSource *this,float param_1)

{
  *(float *)(this + 0x1b4) = param_1;
  return;
}


