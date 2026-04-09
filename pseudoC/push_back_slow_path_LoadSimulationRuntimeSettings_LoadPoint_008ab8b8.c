// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
// Entry Point: 008ab8b8
// Size: 380 bytes
// Signature: void __thiscall __push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>> * this, LoadPoint * param_1)


/* void std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>
   >::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>(LoadSimulationRuntimeSettings::LoadPoint&&)
    */

void __thiscall
std::__ndk1::
vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
          (vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
           *this,LoadPoint *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar12;
  
  lVar15 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar15 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar6 >> 5;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffffbf < uVar6) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar5 = operator_new(uVar1 * 0x40);
  puVar2 = (undefined8 *)((long)pvVar5 + lVar15 * 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x40);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar10 = *(undefined8 *)param_1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = *(undefined8 **)this;
  puVar11 = *(undefined8 **)(this + 8);
  *puVar2 = uVar10;
  puVar2[3] = uVar17;
  puVar2[2] = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = uVar13;
  puVar2[7] = uVar14;
  puVar2[6] = uVar16;
  puVar2[5] = uVar10;
  puVar7 = puVar2;
  if (puVar11 == puVar3) {
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      puVar12 = puVar11 + -8;
      uVar4 = *(undefined4 *)(puVar11 + -7);
      puVar8 = puVar7 + -8;
      *puVar8 = *puVar12;
      *(undefined4 *)(puVar7 + -7) = uVar4;
      puVar7[-5] = 0;
      puVar7[-4] = 0;
      uVar10 = puVar11[-5];
      puVar7[-6] = puVar11[-6];
      puVar7[-5] = uVar10;
      puVar7[-4] = puVar11[-4];
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      uVar13 = puVar11[-2];
      uVar10 = puVar11[-3];
      puVar11[-4] = 0;
      puVar7[-1] = puVar11[-1];
      puVar7[-2] = uVar13;
      puVar7[-3] = uVar10;
      puVar7 = puVar8;
      puVar11 = puVar12;
    } while (puVar12 != puVar3);
    puVar3 = *(undefined8 **)this;
    puVar11 = *(undefined8 **)(this + 8);
    *(undefined8 **)this = puVar8;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar5;
    while (puVar2 = puVar11, puVar2 != puVar3) {
      pvVar5 = (void *)puVar2[-6];
      puVar11 = puVar2 + -8;
      if (pvVar5 != (void *)0x0) {
        puVar2[-5] = pvVar5;
        operator_delete(pvVar5);
      }
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}


