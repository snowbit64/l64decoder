// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowMapSplitDistance
// Entry Point: 00a5465c
// Size: 36 bytes
// Signature: undefined __thiscall setShadowMapSplitDistance(LightSource * this, uint param_1, float param_2)


/* LightSource::setShadowMapSplitDistance(unsigned int, float) */

void __thiscall LightSource::setShadowMapSplitDistance(LightSource *this,uint param_1,float param_2)

{
  if (param_1 < *(int *)(this + 0x1c4) - 1U && this[0x1c8] == (LightSource)0x0) {
    *(float *)(this + (ulong)param_1 * 4 + 0x1d0) = param_2;
  }
  return;
}


