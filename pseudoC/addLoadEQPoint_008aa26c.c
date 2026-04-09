// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLoadEQPoint
// Entry Point: 008aa26c
// Size: 400 bytes
// Signature: undefined __thiscall addLoadEQPoint(LoadSimulationRuntimeSettings * this, float param_1, vector * param_2)


/* LoadSimulationRuntimeSettings::addLoadEQPoint(float,
   std::__ndk1::vector<BiquadResonantFilter::Settings,
   std::__ndk1::allocator<BiquadResonantFilter::Settings> > const&) */

void __thiscall
LoadSimulationRuntimeSettings::addLoadEQPoint
          (LoadSimulationRuntimeSettings *this,float param_1,vector *param_2)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  float **this_00;
  undefined8 *puVar6;
  float local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (float **)(this + 0x48);
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            ((LoadPoint *)*this_00,*(LoadPoint **)(this + 0x50),(__less *)&local_98);
  pfVar1 = *this_00;
  puVar6 = *(undefined8 **)(this + 0x50);
  if ((int)((ulong)((long)puVar6 - (long)pfVar1) >> 6) == 0) {
LAB_008aa31c:
    uStack_94 = 0;
    local_90 = 0;
    local_68 = 0;
    pvStack_80 = (void *)0x0;
    local_88 = (void *)0x0;
    uStack_70 = 0;
    local_78 = 0;
    local_64 = 0x3f800000;
    uStack_60 = 0;
    local_5c = 0;
    local_98 = param_1;
    if (&local_88 != (void **)param_2) {
                    /* try { // try from 008aa354 to 008aa35b has its CatchHandler @ 008aa408 */
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)&local_88,*(Settings **)param_2,*(Settings **)(param_2 + 8));
      puVar6 = *(undefined8 **)(this + 0x50);
    }
    if (puVar6 == *(undefined8 **)(this + 0x58)) {
                    /* try { // try from 008aa3a4 to 008aa3af has its CatchHandler @ 008aa408 */
      std::__ndk1::
      vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
      ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
                ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                  *)this_00,(LoadPoint *)&local_98);
    }
    else {
      *(undefined4 *)(puVar6 + 1) = local_90;
      *puVar6 = CONCAT44(uStack_94,local_98);
                    /* try { // try from 008aa380 to 008aa387 has its CatchHandler @ 008aa3fc */
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                *)(puVar6 + 2),(vector *)&local_88);
      puVar6[7] = CONCAT44(local_5c,uStack_60);
      puVar6[6] = CONCAT44(local_64,local_68);
      puVar6[5] = uStack_70;
      *(undefined8 **)(this + 0x50) = puVar6 + 8;
    }
    if (local_88 != (void *)0x0) {
      pvStack_80 = local_88;
      operator_delete(local_88);
    }
  }
  else {
    uVar3 = 0;
    if (*pfVar1 != param_1) {
      uVar4 = (ulong)((long)puVar6 - (long)pfVar1) >> 6 & 0xffffffff;
      pfVar5 = pfVar1;
      do {
        pfVar5 = pfVar5 + 0x10;
        if (uVar4 - 1 == uVar3) goto LAB_008aa31c;
        uVar3 = uVar3 + 1;
      } while (*pfVar5 != param_1);
      if (uVar4 <= uVar3) goto LAB_008aa31c;
    }
    if (pfVar1 + uVar3 * 0x10 + 4 != (float *)param_2) {
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(pfVar1 + uVar3 * 0x10 + 4),*(Settings **)param_2,*(Settings **)(param_2 + 8));
    }
  }
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            (*(LoadPoint **)(this + 0x48),*(LoadPoint **)(this + 0x50),(__less *)&local_98);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


