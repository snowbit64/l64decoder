// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchLoadPoint
// Entry Point: 008a9ba4
// Size: 124 bytes
// Signature: undefined __thiscall searchLoadPoint(LoadSimulationRuntimeSettings * this, float param_1, uint * param_2)


/* LoadSimulationRuntimeSettings::searchLoadPoint(float, unsigned int&) const */

bool __thiscall
LoadSimulationRuntimeSettings::searchLoadPoint
          (LoadSimulationRuntimeSettings *this,float param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  
  pfVar3 = *(float **)(this + 0x48);
  if ((int)((ulong)(*(long *)(this + 0x50) - (long)pfVar3) >> 6) == 0) {
    return false;
  }
  if (*pfVar3 == param_1) {
    *param_2 = 0;
    return true;
  }
  uVar2 = (ulong)(*(long *)(this + 0x50) - (long)pfVar3) >> 6 & 0xffffffff;
  uVar1 = 0;
  do {
    pfVar3 = pfVar3 + 0x10;
    if (uVar2 - 1 == uVar1) {
      return uVar1 + 1 < uVar2;
    }
    uVar1 = uVar1 + 1;
  } while (*pfVar3 != param_1);
  *param_2 = (uint)uVar1;
  return uVar1 < uVar2;
}


