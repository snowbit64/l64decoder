// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPCSSDepthBiasFactor
// Entry Point: 00a55660
// Size: 8 bytes
// Signature: undefined __thiscall setPCSSDepthBiasFactor(LightSource * this, float param_1)


/* LightSource::setPCSSDepthBiasFactor(float) */

void __thiscall LightSource::setPCSSDepthBiasFactor(LightSource *this,float param_1)

{
  *(float *)(this + 0x238) = param_1;
  return;
}


