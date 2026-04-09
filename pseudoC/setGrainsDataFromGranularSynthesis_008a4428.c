// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGrainsDataFromGranularSynthesis
// Entry Point: 008a4428
// Size: 968 bytes
// Signature: undefined __thiscall setGrainsDataFromGranularSynthesis(GranularSynthesisRuntimeSettings * this, unordered_map * param_1, unordered_map * param_2, RampType * param_3)


/* GranularSynthesisRuntimeSettings::setGrainsDataFromGranularSynthesis(std::__ndk1::unordered_map<int,
   std::__ndk1::pair<int, int>, std::__ndk1::hash<int>, std::__ndk1::equal_to<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, std::__ndk1::pair<int, int> > > > const&,
   std::__ndk1::unordered_map<int, float, std::__ndk1::hash<int>, std::__ndk1::equal_to<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, float> > >&,
   GranularSynthesisRuntimeSettings::RampType const&) */

void __thiscall
GranularSynthesisRuntimeSettings::setGrainsDataFromGranularSynthesis
          (GranularSynthesisRuntimeSettings *this,unordered_map *param_1,unordered_map *param_2,
          RampType *param_3)

{
  int iVar1;
  Grain *pGVar2;
  Grain *pGVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  void **ppvVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long **pplVar20;
  long *plVar21;
  void *pvVar22;
  long *this_00;
  undefined8 *puVar23;
  float fVar24;
  undefined4 uVar25;
  undefined2 uVar26;
  float fVar27;
  undefined8 uVar28;
  SortByRpm aSStack_78 [8];
  void *local_70;
  undefined8 uStack_68;
  void **local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 008a47b4 to 008a47bf has its CatchHandler @ 008a47f0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "GranularSynthesisSettings::setGrainsDataFromGranularSynthesis: input empty.\n"
                      );
    goto LAB_008a477c;
  }
  puVar23 = (undefined8 *)(this + 0x48);
  *puVar23 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this_00 = (long *)(this + 0x30);
  *(RampType *)(this + 0x10) = *param_3;
  *(long *)(this + 0x38) = *this_00;
  lVar11 = *(long *)(param_1 + 0x18);
  if ((int)*(long *)(param_2 + 0x18) <= (int)*(long *)(param_1 + 0x18)) {
    lVar11 = *(long *)(param_2 + 0x18);
  }
  if (lVar11 << 0x20 != 0) {
    std::__ndk1::
    vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
    ::__append((vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
                *)this_00,(lVar11 << 0x20) >> 0x20);
  }
  plVar10 = *(long **)(param_1 + 0x10);
  local_50 = 0x3f800000;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  uStack_58 = 0;
  local_60 = (void **)0x0;
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    uVar4 = *(uint *)(plVar10 + 2);
    if (((ulong)uVar4 < *(ulong *)(param_1 + 0x18)) &&
       (uVar12 = *(ulong *)(param_2 + 8), uVar12 != 0)) {
      uVar13 = (ulong)(int)uVar4;
      uVar28 = NEON_cnt(uVar12,1);
      uVar26 = NEON_uaddlv(uVar28,1);
      uVar16 = CONCAT62((int6)((ulong)uVar28 >> 0x10),uVar26) & 0xffffffff;
      if (uVar16 < 2) {
        uVar18 = uVar12 - 1 & uVar13;
      }
      else {
        uVar18 = uVar13;
        if (uVar12 <= uVar13) {
          uVar18 = 0;
          if (uVar12 != 0) {
            uVar18 = uVar13 / uVar12;
          }
          uVar18 = uVar13 - uVar18 * uVar12;
        }
      }
      pplVar20 = *(long ***)(*(long *)param_2 + uVar18 * 8);
      if ((pplVar20 != (long **)0x0) && (plVar21 = *pplVar20, plVar21 != (long *)0x0)) {
        iVar8 = *(int *)((long)plVar10 + 0x14);
        do {
          uVar9 = plVar21[1];
          if (uVar9 == uVar13) {
            if (*(uint *)(plVar21 + 2) == uVar4) {
              fVar27 = *(float *)((long)plVar21 + 0x14);
              piVar14 = (int *)(*this_00 + (ulong)uVar4 * 0x10);
              *piVar14 = (iVar8 - *(int *)(plVar10 + 3)) + 1;
              piVar14[1] = iVar8;
              piVar14[2] = (int)(fVar27 * 120.0);
              *(undefined *)(piVar14 + 3) = 1;
              break;
            }
          }
          else {
            if (uVar16 < 2) {
              uVar9 = uVar9 & uVar12 - 1;
            }
            else if (uVar12 <= uVar9) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar9 / uVar12;
              }
              uVar9 = uVar9 - uVar5 * uVar12;
            }
            if (uVar9 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
                    /* try { // try from 008a45f0 to 008a469b has its CatchHandler @ 008a4808 */
  std::__ndk1::
  __sort<GranularSynthesisRuntimeSettings::Grain::SortByRpm&,GranularSynthesisRuntimeSettings::Grain*>
            (*(Grain **)(this + 0x30),*(Grain **)(this + 0x38),aSStack_78);
  pGVar2 = *(Grain **)(this + 0x30);
  pGVar3 = *(Grain **)(this + 0x38);
  lVar11 = (long)pGVar3 - (long)pGVar2 >> 4;
  if (lVar11 != 1) {
    lVar17 = 0;
    iVar8 = *(int *)(this + 0x10);
    do {
      if (iVar8 == 0) {
        pfVar19 = (float *)(pGVar2 + (lVar17 + 1) * 0x10 + 8);
        fVar24 = *pfVar19;
        fVar27 = 1e-06;
        if (fVar24 <= *(float *)(pGVar2 + lVar17 * 0x10 + 8)) {
LAB_008a4688:
          *pfVar19 = fVar24 + fVar27;
        }
      }
      else if (iVar8 == 1) {
        pfVar19 = (float *)(pGVar2 + (lVar17 + 1) * 0x10 + 8);
        fVar24 = *pfVar19;
        fVar27 = -1e-06;
        if (*(float *)(pGVar2 + lVar17 * 0x10 + 8) <= fVar24) goto LAB_008a4688;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar11 + -1);
  }
  std::__ndk1::
  __sort<GranularSynthesisRuntimeSettings::Grain::SortByWavIdx&,GranularSynthesisRuntimeSettings::Grain*>
            (pGVar2,pGVar3,(SortByWavIdx *)aSStack_78);
  lVar11 = *(long *)(this + 0x30);
  ppvVar7 = local_60;
  if (lVar11 == *(long *)(this + 0x38)) {
    uVar25 = 0;
    *(undefined4 *)puVar23 = 0;
LAB_008a4754:
    *(undefined4 *)(this + 0x4c) = uVar25;
  }
  else {
    uVar12 = *(long *)(this + 0x38) - lVar11;
    *(undefined8 *)(this + 0x50) = 0x7fffffff;
    if (0 < (int)(uVar12 >> 4)) {
      iVar8 = 0;
      uVar13 = uVar12 >> 4 & 0xffffffff;
      piVar14 = (int *)(lVar11 + 4);
      iVar15 = 0x7fffffff;
      do {
        iVar1 = (*piVar14 - piVar14[-1]) + 1;
        if (iVar8 < iVar1) {
          *(int *)(this + 0x54) = iVar1;
          iVar8 = iVar1;
        }
        if (iVar1 < iVar15) {
          *(int *)(this + 0x50) = iVar1;
          iVar15 = iVar1;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    if (*(int *)(this + 0x10) == 1) {
      *(undefined4 *)puVar23 = *(undefined4 *)(uVar12 + lVar11 + -8);
      uVar25 = *(undefined4 *)(lVar11 + 8);
      goto LAB_008a4754;
    }
    if (*(int *)(this + 0x10) == 0) {
      *(undefined4 *)puVar23 = *(undefined4 *)(lVar11 + 8);
      uVar25 = *(undefined4 *)(uVar12 + lVar11 + -8);
      goto LAB_008a4754;
    }
  }
  while (ppvVar7 != (void **)0x0) {
    pvVar22 = *ppvVar7;
    operator_delete(ppvVar7);
    ppvVar7 = (void **)pvVar22;
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
LAB_008a477c:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


