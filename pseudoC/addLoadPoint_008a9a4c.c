// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLoadPoint
// Entry Point: 008a9a4c
// Size: 336 bytes
// Signature: undefined __thiscall addLoadPoint(LoadSimulationRuntimeSettings * this, LoadPoint * param_1)


/* LoadSimulationRuntimeSettings::addLoadPoint(LoadSimulationRuntimeSettings::LoadPoint const&) */

void __thiscall
LoadSimulationRuntimeSettings::addLoadPoint(LoadSimulationRuntimeSettings *this,LoadPoint *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  float **this_00;
  undefined8 uVar8;
  __less a_Stack_58 [8];
  __less a_Stack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = (float **)(this + 0x48);
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            ((LoadPoint *)*this_00,*(LoadPoint **)(this + 0x50),a_Stack_58);
  pfVar1 = *this_00;
  puVar2 = *(undefined8 **)(this + 0x50);
  if ((int)((ulong)((long)puVar2 - (long)pfVar1) >> 6) == 0) {
LAB_008a9b14:
    if (puVar2 == *(undefined8 **)(this + 0x58)) {
      std::__ndk1::
      vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
      ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
                ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                  *)this_00,param_1);
    }
    else {
      uVar5 = *(undefined8 *)param_1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
      *puVar2 = uVar5;
                    /* try { // try from 008a9b38 to 008a9b3b has its CatchHandler @ 008a9b9c */
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                *)(puVar2 + 2),(vector *)(param_1 + 0x10));
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puVar2[7] = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = uVar8;
      puVar2[5] = uVar5;
      *(undefined8 **)(this + 0x50) = puVar2 + 8;
    }
  }
  else {
    uVar4 = 0;
    if (*pfVar1 != *(float *)param_1) {
      uVar6 = (ulong)((long)puVar2 - (long)pfVar1) >> 6 & 0xffffffff;
      pfVar7 = pfVar1;
      do {
        pfVar7 = pfVar7 + 0x10;
        if (uVar6 - 1 == uVar4) goto LAB_008a9b14;
        uVar4 = uVar4 + 1;
      } while (*pfVar7 != *(float *)param_1);
      if (uVar6 <= uVar4) goto LAB_008a9b14;
    }
    puVar2 = (undefined8 *)(pfVar1 + uVar4 * 0x10);
    uVar5 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar2 = uVar5;
    if (puVar2 != (undefined8 *)param_1) {
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(puVar2 + 2),*(Settings **)(param_1 + 0x10),*(Settings **)(param_1 + 0x18));
    }
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = uVar8;
    puVar2[5] = uVar5;
  }
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            (*(LoadPoint **)(this + 0x48),*(LoadPoint **)(this + 0x50),a_Stack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


