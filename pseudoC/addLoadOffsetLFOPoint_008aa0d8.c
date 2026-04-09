// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLoadOffsetLFOPoint
// Entry Point: 008aa0d8
// Size: 364 bytes
// Signature: undefined __thiscall addLoadOffsetLFOPoint(LoadSimulationRuntimeSettings * this, float param_1, float param_2)


/* LoadSimulationRuntimeSettings::addLoadOffsetLFOPoint(float, float) */

void __thiscall
LoadSimulationRuntimeSettings::addLoadOffsetLFOPoint
          (LoadSimulationRuntimeSettings *this,float param_1,float param_2)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong *puVar6;
  float **this_00;
  float local_98;
  undefined4 uStack_94;
  float local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (float **)(this + 0x48);
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            ((LoadPoint *)*this_00,*(LoadPoint **)(this + 0x50),(__less *)&local_98);
  pfVar2 = *this_00;
  puVar6 = *(ulong **)(this + 0x50);
  if ((int)((ulong)((long)puVar6 - (long)pfVar2) >> 6) == 0) {
LAB_008aa178:
    uStack_94 = 0;
    local_68 = 0;
    local_5c = 0;
    pvStack_80 = (void *)0x0;
    local_88 = (void *)0x0;
    uStack_70 = 0;
    local_78 = 0;
    local_64 = 0x3f800000;
    uStack_60 = 0;
    local_98 = param_1;
    local_90 = param_2;
    if (puVar6 == *(ulong **)(this + 0x58)) {
                    /* try { // try from 008aa1e8 to 008aa1f3 has its CatchHandler @ 008aa244 */
      std::__ndk1::
      vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
      ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
                ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                  *)this_00,(LoadPoint *)&local_98);
    }
    else {
      *(float *)(puVar6 + 1) = param_2;
      *puVar6 = (ulong)(uint)param_1;
                    /* try { // try from 008aa1c8 to 008aa1cb has its CatchHandler @ 008aa24c */
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                *)(puVar6 + 2),(vector *)&local_88);
      puVar6[7] = CONCAT44(local_5c,uStack_60);
      puVar6[6] = CONCAT44(local_64,local_68);
      puVar6[5] = uStack_70;
      *(ulong **)(this + 0x50) = puVar6 + 8;
    }
    if (local_88 != (void *)0x0) {
      pvStack_80 = local_88;
      operator_delete(local_88);
    }
    pfVar2 = *(float **)(this + 0x48);
    puVar6 = *(ulong **)(this + 0x50);
  }
  else {
    uVar3 = 0;
    if (*pfVar2 != param_1) {
      uVar4 = (ulong)((long)puVar6 - (long)pfVar2) >> 6 & 0xffffffff;
      pfVar5 = pfVar2;
      do {
        pfVar5 = pfVar5 + 0x10;
        if (uVar4 - 1 == uVar3) goto LAB_008aa178;
        uVar3 = uVar3 + 1;
      } while (*pfVar5 != param_1);
      if (uVar4 <= uVar3) goto LAB_008aa178;
    }
    pfVar2[uVar3 * 0x10 + 2] = param_2;
  }
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            ((LoadPoint *)pfVar2,(LoadPoint *)puVar6,(__less *)&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


