// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchLoadPoint
// Entry Point: 008a99d0
// Size: 124 bytes
// Signature: undefined __thiscall searchLoadPoint(LoadSimulationRuntimeSettings * this, vector * param_1, float param_2, int * param_3)


/* LoadSimulationRuntimeSettings::searchLoadPoint(std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint> > const&, float, int&) const */

bool __thiscall
LoadSimulationRuntimeSettings::searchLoadPoint
          (LoadSimulationRuntimeSettings *this,vector *param_1,float param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  
  pfVar3 = *(float **)param_1;
  if ((int)((ulong)(*(long *)(param_1 + 8) - (long)pfVar3) >> 6) == 0) {
    return false;
  }
  if (*pfVar3 == param_2) {
    *param_3 = 0;
    return true;
  }
  uVar2 = (ulong)(*(long *)(param_1 + 8) - (long)pfVar3) >> 6 & 0xffffffff;
  uVar1 = 0;
  do {
    pfVar3 = pfVar3 + 0x10;
    if (uVar2 - 1 == uVar1) {
      return uVar1 + 1 < uVar2;
    }
    uVar1 = uVar1 + 1;
  } while (*pfVar3 != param_2);
  *param_3 = (int)uVar1;
  return uVar1 < uVar2;
}


