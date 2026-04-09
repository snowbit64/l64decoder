// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoopScaleVolume
// Entry Point: 008b06bc
// Size: 48 bytes
// Signature: undefined __thiscall setLoopScaleVolume(SteadyLoopRuntimeSettings * this, uint param_1, float param_2)


/* SteadyLoopRuntimeSettings::setLoopScaleVolume(unsigned int, float) */

void __thiscall
SteadyLoopRuntimeSettings::setLoopScaleVolume
          (SteadyLoopRuntimeSettings *this,uint param_1,float param_2)

{
  if (param_1 < (uint)((int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3) * 0x38e38e39)) {
    *(float *)(*(long *)this + (ulong)param_1 * 0x48 + 0x24) = param_2;
  }
  return;
}


