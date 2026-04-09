// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008abaa4
// Size: 468 bytes
// Signature: undefined __thiscall __append(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>> * this, ulong param_1)


/* std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
::__append(vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar11;
  
  puVar5 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar5 >> 6) < param_1) {
    lVar12 = (long)puVar5 - *(long *)this >> 6;
    uVar1 = lVar12 + param_1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar8 = *(long *)(this + 0x10) - *(long *)this;
    uVar9 = (long)uVar8 >> 5;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffffffffffbf < uVar8) {
      uVar1 = 0x3ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 << 6);
    }
    puVar6 = (undefined8 *)((long)pvVar4 + lVar12 * 0x40);
    pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x40);
    puVar2 = puVar6 + param_1 * 8;
    puVar5 = puVar6;
    do {
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined8 *)((long)puVar5 + 0x34) = 0x3f800000;
      *(undefined4 *)((long)puVar5 + 0x3c) = 0;
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar2);
    puVar5 = *(undefined8 **)this;
    puVar10 = *(undefined8 **)(this + 8);
    if (*(undefined8 **)(this + 8) == puVar5) {
      *(undefined8 **)this = puVar6;
      *(undefined8 **)(this + 8) = puVar2;
      *(void **)(this + 0x10) = pvVar4;
    }
    else {
      do {
        puVar11 = puVar10 + -8;
        uVar3 = *(undefined4 *)(puVar10 + -7);
        puVar7 = puVar6 + -8;
        *puVar7 = *puVar11;
        *(undefined4 *)(puVar6 + -7) = uVar3;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-6] = 0;
        uVar13 = puVar10[-5];
        puVar6[-6] = puVar10[-6];
        puVar6[-5] = uVar13;
        puVar6[-4] = puVar10[-4];
        puVar10[-6] = 0;
        puVar10[-5] = 0;
        uVar14 = puVar10[-2];
        uVar13 = puVar10[-3];
        puVar10[-4] = 0;
        puVar6[-1] = puVar10[-1];
        puVar6[-2] = uVar14;
        puVar6[-3] = uVar13;
        puVar6 = puVar7;
        puVar10 = puVar11;
      } while (puVar11 != puVar5);
      puVar5 = *(undefined8 **)this;
      puVar6 = *(undefined8 **)(this + 8);
      *(undefined8 **)this = puVar7;
      *(undefined8 **)(this + 8) = puVar2;
      *(void **)(this + 0x10) = pvVar4;
      while (puVar2 = puVar6, puVar2 != puVar5) {
        pvVar4 = (void *)puVar2[-6];
        puVar6 = puVar2 + -8;
        if (pvVar4 != (void *)0x0) {
          puVar2[-5] = pvVar4;
          operator_delete(pvVar4);
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete(puVar5);
      return;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_1 != 0) {
      puVar6 = puVar5 + param_1 * 8;
      do {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 6) = 0;
        *(undefined8 *)((long)puVar5 + 0x34) = 0x3f800000;
        *(undefined4 *)((long)puVar5 + 0x3c) = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar6);
    }
    *(undefined8 **)(this + 8) = puVar6;
  }
  return;
}


