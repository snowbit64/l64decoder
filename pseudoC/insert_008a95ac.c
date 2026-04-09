// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 008a95ac
// Size: 1032 bytes
// Signature: undefined __thiscall insert(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>> * this, __wrap_iter param_1, LoadPoint * param_2)


/* std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>
   >::insert(std::__ndk1::__wrap_iter<LoadSimulationRuntimeSettings::LoadPoint const*>,
   LoadSimulationRuntimeSettings::LoadPoint const&) */

undefined8 * __thiscall
std::__ndk1::
vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
::insert(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
         *this,__wrap_iter param_1,LoadPoint *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  LoadPoint *pLVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
  *local_70;
  long local_68;
  
  puVar13 = (undefined8 *)(ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar2 = *(long *)this;
  puVar11 = *(undefined8 **)(this + 8);
  lVar15 = (long)puVar13 - lVar2 >> 6;
  if (puVar11 < *(undefined8 **)(this + 0x10)) {
    puVar14 = puVar13;
    if (puVar13 == puVar11) {
      lVar2 = lVar2 + lVar15 * 0x40;
      uVar12 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar13 = uVar12;
                    /* try { // try from 008a97c8 to 008a97cb has its CatchHandler @ 008a99b4 */
      vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
      ::vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                *)(lVar2 + 0x10),(vector *)(param_2 + 0x10));
      uVar18 = *(undefined8 *)(param_2 + 0x30);
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(lVar2 + 0x30) = uVar18;
      *(undefined8 *)(lVar2 + 0x28) = uVar12;
      *(undefined8 **)(this + 8) = puVar13 + 8;
    }
    else {
      pLVar6 = (LoadPoint *)((long)puVar11 + (-0x40 - (long)puVar13));
      puVar10 = puVar11;
      for (puVar8 = (undefined8 *)((long)puVar13 + ((ulong)pLVar6 & 0xffffffffffffffc0));
          puVar8 < puVar11; puVar8 = puVar8 + 8) {
        uVar3 = *(undefined4 *)(puVar8 + 1);
        uVar12 = *puVar8;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 1) = uVar3;
        *puVar10 = uVar12;
        puVar10[2] = puVar8[2];
        puVar10[3] = puVar8[3];
        puVar10[4] = puVar8[4];
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar18 = puVar8[6];
        uVar12 = puVar8[5];
        puVar8[4] = 0;
        puVar10[7] = puVar8[7];
        puVar10[6] = uVar18;
        puVar10[5] = uVar12;
        puVar10 = puVar10 + 8;
      }
      *(undefined8 **)(this + 8) = puVar10;
      if (pLVar6 != (LoadPoint *)0x0) {
        puVar11 = puVar11 + -4;
        lVar17 = ((long)pLVar6 >> 6) << 6;
        do {
          pvVar5 = (void *)puVar11[-2];
          uVar12 = *(undefined8 *)((long)puVar13 + lVar17 + -0x40);
          *(undefined4 *)(puVar11 + -3) = *(undefined4 *)((long)puVar13 + lVar17 + -0x38);
          puVar11[-4] = uVar12;
          if (pvVar5 != (void *)0x0) {
            puVar11[-1] = pvVar5;
            operator_delete(pvVar5);
            puVar11[-2] = 0;
            puVar11[-1] = 0;
            *puVar11 = 0;
          }
          lVar16 = lVar17 + -0x40;
          puVar11[-2] = *(undefined8 *)((long)puVar13 + lVar17 + -0x30);
          puVar11[-1] = *(undefined8 *)((long)puVar13 + lVar17 + -0x28);
          *puVar11 = *(undefined8 *)((long)puVar13 + lVar17 + -0x20);
          *(undefined8 *)((long)puVar13 + lVar17 + -0x30) = 0;
          *(undefined8 *)((long)puVar13 + lVar17 + -0x28) = 0;
          uVar18 = *(undefined8 *)((long)puVar13 + lVar17 + -0x10);
          uVar12 = *(undefined8 *)((long)puVar13 + lVar17 + -0x18);
          *(undefined8 *)((long)puVar13 + lVar17 + -0x20) = 0;
          puVar11[3] = *(undefined8 *)((long)puVar13 + lVar17 + -8);
          puVar11[2] = uVar18;
          puVar11[1] = uVar12;
          puVar11 = puVar11 + -8;
          lVar17 = lVar16;
        } while (lVar16 != 0);
        puVar10 = *(undefined8 **)(this + 8);
      }
      puVar11 = (undefined8 *)(param_2 + (ulong)(puVar13 <= param_2 && param_2 < puVar10) * 0x40);
      uVar12 = *puVar11;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar11 + 1);
      *puVar13 = uVar12;
      if (puVar13 != puVar11) {
        vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
        ::assign<BiquadResonantFilter::Settings*>
                  ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                    *)(lVar2 + lVar15 * 0x40 + 0x10),(Settings *)puVar11[2],(Settings *)puVar11[3]);
      }
      lVar2 = lVar2 + lVar15 * 0x40;
      uVar18 = puVar11[6];
      uVar12 = puVar11[5];
      *(undefined8 *)(lVar2 + 0x38) = puVar11[7];
      *(undefined8 *)(lVar2 + 0x30) = uVar18;
      *(undefined8 *)(lVar2 + 0x28) = uVar12;
    }
  }
  else {
    uVar1 = ((long)puVar11 - lVar2 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)*(undefined8 **)(this + 0x10) - lVar2;
    uVar9 = (long)uVar7 >> 5;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    local_70 = this + 0x10;
    if (0x7fffffffffffffbf < uVar7) {
      uVar1 = 0x3ffffffffffffff;
    }
    if (uVar1 == 0) {
      local_90 = (undefined8 *)0x0;
    }
    else {
      if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_90 = (undefined8 *)operator_new(uVar1 << 6);
    }
    local_88 = local_90 + lVar15 * 8;
    local_78 = local_90 + uVar1 * 8;
    local_80 = local_88;
                    /* try { // try from 008a97fc to 008a9807 has its CatchHandler @ 008a99bc */
    FUN_008ad900(&local_90,param_2);
    puVar14 = local_88;
    puVar8 = *(undefined8 **)this;
    puVar11 = puVar13;
    while (puVar8 != puVar11) {
      uVar12 = puVar11[-8];
      uVar3 = *(undefined4 *)(puVar11 + -7);
      local_88[-5] = 0;
      local_88[-4] = 0;
      local_88[-6] = 0;
      local_88[-8] = uVar12;
      *(undefined4 *)(local_88 + -7) = uVar3;
      local_88[-6] = puVar11[-6];
      local_88[-5] = puVar11[-5];
      local_88[-4] = puVar11[-4];
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      uVar18 = puVar11[-2];
      uVar12 = puVar11[-3];
      puVar11[-4] = 0;
      local_88[-1] = puVar11[-1];
      local_88[-2] = uVar18;
      local_88[-3] = uVar12;
      local_88 = local_88 + -8;
      puVar11 = puVar11 + -8;
    }
    puVar11 = *(undefined8 **)(this + 8);
    if (puVar11 != puVar13) {
      do {
        uVar3 = *(undefined4 *)(puVar13 + 1);
        uVar12 = *puVar13;
        local_80[3] = 0;
        local_80[4] = 0;
        local_80[2] = 0;
        *(undefined4 *)(local_80 + 1) = uVar3;
        *local_80 = uVar12;
        local_80[2] = puVar13[2];
        local_80[3] = puVar13[3];
        local_80[4] = puVar13[4];
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar8 = puVar13 + 7;
        puVar13[2] = 0;
        uVar18 = puVar13[6];
        uVar12 = puVar13[5];
        puVar13 = puVar13 + 8;
        local_80[7] = *puVar8;
        local_80[6] = uVar18;
        local_80[5] = uVar12;
        local_80 = local_80 + 8;
      } while (puVar13 != puVar11);
      puVar13 = *(undefined8 **)(this + 8);
    }
    puVar11 = *(undefined8 **)this;
    *(undefined8 **)this = local_88;
    *(undefined8 **)(this + 8) = local_80;
    uVar12 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = local_78;
    local_90 = puVar11;
    local_88 = puVar11;
    local_78 = (undefined8 *)uVar12;
    local_80 = puVar13;
    while (puVar8 = local_80, local_80 != puVar11) {
      while( true ) {
        local_80 = puVar8 + -8;
        pvVar5 = (void *)puVar8[-6];
        if (pvVar5 != (void *)0x0) break;
        puVar8 = local_80;
        puVar13 = local_90;
        if (local_80 == puVar11) goto joined_r0x008a9994;
      }
      puVar8[-5] = pvVar5;
      operator_delete(pvVar5);
      puVar13 = local_90;
    }
joined_r0x008a9994:
    if (puVar13 != (undefined8 *)0x0) {
      operator_delete(puVar13);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


