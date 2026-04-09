// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0074c758
// Size: 376 bytes
// Signature: undefined __thiscall __append(vector<CollisionEffectManager::EffectModel::SoundDesc,std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc>> * this, ulong param_1)


/* std::__ndk1::vector<CollisionEffectManager::EffectModel::SoundDesc,
   std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<CollisionEffectManager::EffectModel::SoundDesc,std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc>>
::__append(vector<CollisionEffectManager::EffectModel::SoundDesc,std::__ndk1::allocator<CollisionEffectManager::EffectModel::SoundDesc>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 3) * -0x5555555555555555) < param_1) {
    lVar6 = (long)puVar8 - *(long *)this >> 3;
    uVar1 = lVar6 * -0x5555555555555555 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    auVar9 = NEON_fmov(0x3f800000,4);
    puVar4 = (undefined8 *)((long)pvVar2 + lVar6 * 8);
    puVar5 = puVar4;
    do {
      *puVar5 = 0;
      puVar5[2] = auVar9._8_8_;
      puVar5[1] = auVar9._0_8_;
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar4 + param_1 * 3);
    __src = *(void **)this;
    __n = (long)puVar8 - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar4 - __n);
    *(undefined8 **)(this + 8) = puVar4 + param_1 * 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar5 = puVar8;
    if (param_1 != 0) {
      auVar9 = NEON_fmov(0x3f800000,4);
      puVar5 = puVar8 + param_1 * 3;
      do {
        *puVar8 = 0;
        puVar8[2] = auVar9._8_8_;
        puVar8[1] = auVar9._0_8_;
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar5);
    }
    *(undefined8 **)(this + 8) = puVar5;
  }
  return;
}


