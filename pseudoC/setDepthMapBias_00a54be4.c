// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthMapBias
// Entry Point: 00a54be4
// Size: 8 bytes
// Signature: undefined __thiscall setDepthMapBias(LightSource * this, float param_1)


/* LightSource::setDepthMapBias(float) */

void __thiscall LightSource::setDepthMapBias(LightSource *this,float param_1)

{
  *(float *)(this + 0x1ac) = param_1;
  return;
}


