// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
// Entry Point: 008ad650
// Size: 456 bytes
// Signature: void __thiscall __push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>> * this, LoadPoint * param_1)


/* void std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>
   >::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint
   const&>(LoadSimulationRuntimeSettings::LoadPoint const&) */

void __thiscall
std::__ndk1::
vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint_const&>
          (vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
           *this,LoadPoint *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar8 = *(long *)(this + 0x10) - *(long *)this;
  uVar10 = (long)uVar8 >> 5;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x7fffffffffffffbf < uVar8) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 6);
  }
  puVar14 = (undefined8 *)((long)pvVar5 + lVar13 * 0x40);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *puVar14 = *(undefined8 *)param_1;
  *(undefined4 *)(puVar14 + 1) = uVar3;
                    /* try { // try from 008ad704 to 008ad707 has its CatchHandler @ 008ad818 */
  vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>::
  vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
          *)(puVar14 + 2),(vector *)(param_1 + 0x10));
  puVar7 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  puVar2 = puVar14 + 8;
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  puVar14[6] = *(undefined8 *)(param_1 + 0x30);
  puVar14[5] = uVar15;
  puVar14[7] = uVar11;
  puVar12 = puVar7;
  if (puVar9 != puVar7) {
    do {
      puVar12 = puVar9 + -8;
      uVar11 = *puVar12;
      uVar3 = *(undefined4 *)(puVar9 + -7);
      puVar14[-5] = 0;
      puVar14[-4] = 0;
      puVar14[-6] = 0;
      puVar14[-8] = uVar11;
      *(undefined4 *)(puVar14 + -7) = uVar3;
      puVar14[-6] = puVar9[-6];
      puVar14[-5] = puVar9[-5];
      puVar14[-4] = puVar9[-4];
      puVar9[-6] = 0;
      puVar9[-5] = 0;
      uVar15 = puVar9[-2];
      uVar11 = puVar9[-3];
      puVar9[-4] = 0;
      puVar14[-1] = puVar9[-1];
      puVar14[-2] = uVar15;
      puVar14[-3] = uVar11;
      puVar14 = puVar14 + -8;
      puVar9 = puVar12;
    } while (puVar12 != puVar7);
    puVar7 = *(undefined8 **)(this + 8);
    puVar12 = *(undefined8 **)this;
  }
  *(undefined8 **)this = puVar14;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x40);
  while (puVar2 = puVar7, puVar2 != puVar12) {
    pvVar5 = (void *)puVar2[-6];
    puVar7 = puVar2 + -8;
    if (pvVar5 != (void *)0x0) {
      puVar2[-5] = pvVar5;
      operator_delete(pvVar5);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


