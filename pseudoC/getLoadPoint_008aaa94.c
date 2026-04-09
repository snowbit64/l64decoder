// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoadPoint
// Entry Point: 008aaa94
// Size: 172 bytes
// Signature: undefined __thiscall getLoadPoint(LoadSimulationRuntimeSettings * this, float param_1, LoadPoint * param_2)


/* LoadSimulationRuntimeSettings::getLoadPoint(float, LoadSimulationRuntimeSettings::LoadPoint&)
   const */

undefined8 __thiscall
LoadSimulationRuntimeSettings::getLoadPoint
          (LoadSimulationRuntimeSettings *this,float param_1,LoadPoint *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pfVar2 = *(float **)(this + 0x48);
  if ((int)((ulong)(*(long *)(this + 0x50) - (long)pfVar2) >> 6) == 0) {
LAB_008aab30:
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    if (*pfVar2 != param_1) {
      uVar5 = (ulong)(*(long *)(this + 0x50) - (long)pfVar2) >> 6 & 0xffffffff;
      pfVar6 = pfVar2;
      do {
        pfVar6 = pfVar6 + 0x10;
        if (uVar5 - 1 == uVar3) goto LAB_008aab30;
        uVar3 = uVar3 + 1;
      } while (*pfVar6 != param_1);
      if (uVar5 <= uVar3) goto LAB_008aab30;
    }
    puVar1 = (undefined8 *)(pfVar2 + uVar3 * 0x10);
    uVar4 = *puVar1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined8 *)param_2 = uVar4;
    if (puVar1 != (undefined8 *)param_2) {
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(param_2 + 0x10),(Settings *)puVar1[2],(Settings *)puVar1[3]);
    }
    uVar4 = 1;
    uVar8 = puVar1[6];
    uVar7 = puVar1[5];
    *(undefined8 *)(param_2 + 0x38) = puVar1[7];
    *(undefined8 *)(param_2 + 0x30) = uVar8;
    *(undefined8 *)(param_2 + 0x28) = uVar7;
  }
  return uVar4;
}


