// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMissingLoadPoints
// Entry Point: 008a92e4
// Size: 628 bytes
// Signature: undefined __thiscall addMissingLoadPoints(LoadSimulationRuntimeSettings * this, vector * param_1)


/* LoadSimulationRuntimeSettings::addMissingLoadPoints(std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint> >&) */

void __thiscall
LoadSimulationRuntimeSettings::addMissingLoadPoints
          (LoadSimulationRuntimeSettings *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 local_c0;
  undefined4 local_b8;
  Settings *local_b0;
  Settings *pSStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  Settings *local_70;
  Settings *pSStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  __less a_Stack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  local_78 = 0;
  pSStack_68 = (Settings *)0x0;
  local_70 = (Settings *)0x0;
  local_58 = 0;
  uStack_60 = 0;
  puVar8 = *(undefined8 **)(param_1 + 8);
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0;
  local_c0 = 0x3f800000;
  local_b8 = 0;
  pSStack_a8 = (Settings *)0x0;
  local_b0 = (Settings *)0x0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  uStack_88 = 0;
  uStack_84 = 0;
  if (*(undefined8 **)param_1 == puVar8) {
                    /* try { // try from 008a93a8 to 008a943f has its CatchHandler @ 008a9570 */
    std::__ndk1::
    vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
    ::__append((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)param_1,2);
    puVar8 = *(undefined8 **)param_1;
    *(undefined4 *)(puVar8 + 1) = local_78;
    *puVar8 = local_80;
    if (puVar8 != &local_80) {
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(puVar8 + 2),local_70,pSStack_68);
    }
    puVar8[7] = CONCAT44(uStack_44,uStack_48);
    puVar8[6] = CONCAT44(uStack_4c,uStack_50);
    puVar8[5] = local_58;
    lVar7 = *(long *)param_1;
    *(undefined4 *)(lVar7 + 0x48) = local_b8;
    *(undefined8 *)(lVar7 + 0x40) = local_c0;
    if ((undefined8 *)(lVar7 + 0x40) != &local_c0) {
      std::__ndk1::
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::assign<BiquadResonantFilter::Settings*>
                ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(lVar7 + 0x50),local_b0,pSStack_a8);
    }
    *(ulong *)(lVar7 + 0x70) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(lVar7 + 0x68) = local_98;
    *(ulong *)(lVar7 + 0x78) = CONCAT44(uStack_84,uStack_88);
  }
  else {
    if (*(float *)(puVar8 + -8) < 1.0) {
      if (puVar8 == *(undefined8 **)(param_1 + 0x10)) {
        std::__ndk1::
        vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
        ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
                  ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                    *)param_1,(LoadPoint *)&local_c0);
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = 0x3f800000;
                    /* try { // try from 008a9388 to 008a938b has its CatchHandler @ 008a9560 */
        std::__ndk1::
        vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
        ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                  *)(puVar8 + 2),(vector *)&local_b0);
        puVar8[7] = CONCAT44(uStack_84,uStack_88);
        puVar8[6] = CONCAT44(uStack_8c,uStack_90);
        puVar8[5] = local_98;
        *(undefined8 **)(param_1 + 8) = puVar8 + 8;
      }
    }
    pfVar3 = *(float **)param_1;
    fVar9 = *pfVar3;
    if (fVar9 <= 0.0) {
      if (fVar9 < 0.0) {
        puVar8 = *(undefined8 **)(param_1 + 8);
        if ((int)((ulong)((long)puVar8 - (long)pfVar3) >> 6) != 0) {
          if (fVar9 == 0.0) goto LAB_008a9510;
          uVar5 = (ulong)((long)puVar8 - (long)pfVar3) >> 6 & 0xffffffff;
          uVar2 = 1;
          do {
            uVar6 = uVar2;
            pfVar3 = pfVar3 + 0x10;
            if (uVar5 == uVar6) break;
            uVar2 = uVar6 + 1;
          } while (*pfVar3 != 0.0);
          if (uVar6 < uVar5) goto LAB_008a9510;
        }
        if (puVar8 == *(undefined8 **)(param_1 + 0x10)) {
                    /* try { // try from 008a94f4 to 008a950f has its CatchHandler @ 008a955c */
          std::__ndk1::
          vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
          ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
                    ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                      *)param_1,(LoadPoint *)&local_80);
          puVar4 = *(undefined8 **)(param_1 + 8);
        }
        else {
          *(undefined4 *)(puVar8 + 1) = local_78;
          *puVar8 = local_80;
                    /* try { // try from 008a94d4 to 008a94d7 has its CatchHandler @ 008a9558 */
          std::__ndk1::
          vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
          ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                    *)(puVar8 + 2),(vector *)&local_70);
          puVar4 = puVar8 + 8;
          puVar8[7] = CONCAT44(uStack_44,uStack_48);
          puVar8[6] = CONCAT44(uStack_4c,uStack_50);
          puVar8[5] = local_58;
          *(undefined8 **)(param_1 + 8) = puVar4;
        }
        std::__ndk1::
        __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
                  (*(LoadPoint **)param_1,(LoadPoint *)puVar4,a_Stack_40);
      }
    }
    else {
                    /* try { // try from 008a9450 to 008a945b has its CatchHandler @ 008a956c */
      std::__ndk1::
      vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
      ::insert((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)param_1,(__wrap_iter)pfVar3,(LoadPoint *)&local_80);
    }
  }
LAB_008a9510:
  if (local_b0 != (Settings *)0x0) {
    pSStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_70 != (Settings *)0x0) {
    pSStack_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


