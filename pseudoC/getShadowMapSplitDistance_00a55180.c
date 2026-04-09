// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShadowMapSplitDistance
// Entry Point: 00a55180
// Size: 12 bytes
// Signature: undefined __thiscall getShadowMapSplitDistance(LightSource * this, uint param_1)


/* LightSource::getShadowMapSplitDistance(unsigned int) const */

undefined4 __thiscall LightSource::getShadowMapSplitDistance(LightSource *this,uint param_1)

{
  return *(undefined4 *)(this + (ulong)param_1 * 4 + 0x1d0);
}


