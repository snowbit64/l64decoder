// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEQFromLoadPoint
// Entry Point: 008aaa04
// Size: 144 bytes
// Signature: undefined __thiscall getEQFromLoadPoint(LoadSimulationRuntimeSettings * this, float param_1, vector * param_2)


/* LoadSimulationRuntimeSettings::getEQFromLoadPoint(float,
   std::__ndk1::vector<BiquadResonantFilter::Settings,
   std::__ndk1::allocator<BiquadResonantFilter::Settings> >&) const */

undefined8 __thiscall
LoadSimulationRuntimeSettings::getEQFromLoadPoint
          (LoadSimulationRuntimeSettings *this,float param_1,vector *param_2)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  
  pfVar1 = *(float **)(this + 0x48);
  if ((int)((ulong)(*(long *)(this + 0x50) - (long)pfVar1) >> 6) == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*pfVar1 != param_1) {
    uVar3 = (ulong)(*(long *)(this + 0x50) - (long)pfVar1) >> 6 & 0xffffffff;
    pfVar4 = pfVar1;
    do {
      pfVar4 = pfVar4 + 0x10;
      if (uVar3 - 1 == uVar2) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (*pfVar4 != param_1);
    if (uVar3 <= uVar2) {
      return 0;
    }
  }
  if (pfVar1 + uVar2 * 0x10 + 4 != (float *)param_2) {
    std::__ndk1::
    vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>::
    assign<BiquadResonantFilter::Settings*>
              ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                *)param_2,*(Settings **)(pfVar1 + uVar2 * 0x10 + 4),
               *(Settings **)(pfVar1 + uVar2 * 0x10 + 6));
  }
  return 1;
}


