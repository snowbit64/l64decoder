// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0074c500
// Size: 600 bytes
// Signature: undefined __thiscall __append(vector<CollisionEffectManager::EffectModel,std::__ndk1::allocator<CollisionEffectManager::EffectModel>> * this, ulong param_1)


/* std::__ndk1::vector<CollisionEffectManager::EffectModel,
   std::__ndk1::allocator<CollisionEffectManager::EffectModel> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<CollisionEffectManager::EffectModel,std::__ndk1::allocator<CollisionEffectManager::EffectModel>>
::__append(vector<CollisionEffectManager::EffectModel,std::__ndk1::allocator<CollisionEffectManager::EffectModel>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 3) * -0x71c71c71c71c71c7) < param_1) {
    lVar5 = (long)puVar6 - *(long *)this >> 3;
    uVar1 = lVar5 * -0x71c71c71c71c71c7 + param_1;
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar10 = lVar8 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x38e38e38e38e38e;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x48);
    }
    puVar9 = (undefined8 *)((long)pvVar3 + lVar5 * 8);
    pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x48);
    puVar7 = puVar9 + param_1 * 9;
    puVar6 = puVar9;
    do {
      *puVar6 = 1;
      puVar6[1] = 0x4234000000000000;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[8] = 0;
      puVar6 = puVar6 + 9;
    } while (puVar6 != puVar7);
    pvVar2 = *(void **)this;
    pvVar4 = *(void **)(this + 8);
    if (*(void **)(this + 8) == pvVar2) {
      *(undefined8 **)this = puVar9;
      *(undefined8 **)(this + 8) = puVar7;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        uVar14 = *(undefined8 *)((long)pvVar4 + -0x40);
        uVar13 = *(undefined8 *)((long)pvVar4 + -0x48);
        uVar11 = *(undefined8 *)((long)pvVar4 + -0x38);
        puVar9[-5] = 0;
        puVar9[-4] = 0;
        puVar9[-8] = uVar14;
        puVar9[-9] = uVar13;
        puVar9[-7] = uVar11;
        puVar9[-6] = 0;
        uVar11 = *(undefined8 *)((long)pvVar4 + -0x28);
        puVar9[-6] = *(undefined8 *)((long)pvVar4 + -0x30);
        puVar9[-5] = uVar11;
        puVar9[-4] = *(undefined8 *)((long)pvVar4 + -0x20);
        *(undefined8 *)((long)pvVar4 + -0x30) = 0;
        *(undefined8 *)((long)pvVar4 + -0x28) = 0;
        *(undefined8 *)((long)pvVar4 + -0x20) = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        uVar11 = *(undefined8 *)((long)pvVar4 + -0x10);
        puVar9[-3] = *(undefined8 *)((long)pvVar4 + -0x18);
        puVar9[-2] = uVar11;
        puVar9[-1] = *(undefined8 *)((long)pvVar4 + -8);
        pvVar12 = (void *)((long)pvVar4 + -0x48);
        *(undefined8 *)((long)pvVar4 + -0x18) = 0;
        *(undefined8 *)((long)pvVar4 + -0x10) = 0;
        puVar9 = puVar9 + -9;
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        pvVar4 = pvVar12;
      } while (pvVar12 != pvVar2);
      pvVar2 = *(void **)this;
      pvVar4 = *(void **)(this + 8);
      *(undefined8 **)this = puVar9;
      *(undefined8 **)(this + 8) = puVar7;
      *(void **)(this + 0x10) = pvVar3;
      while (pvVar3 = pvVar4, pvVar3 != pvVar2) {
        pvVar4 = *(void **)((long)pvVar3 + -0x18);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x10) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar12 = *(void **)((long)pvVar3 + -0x30);
        pvVar4 = (void *)((long)pvVar3 + -0x48);
        if (pvVar12 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x28) = pvVar12;
          operator_delete(pvVar12);
        }
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  else {
    puVar7 = puVar6;
    if (param_1 != 0) {
      puVar7 = puVar6 + param_1 * 9;
      do {
        *puVar6 = 1;
        puVar6[1] = 0x4234000000000000;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[8] = 0;
        puVar6 = puVar6 + 9;
      } while (puVar6 != puVar7);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  return;
}


