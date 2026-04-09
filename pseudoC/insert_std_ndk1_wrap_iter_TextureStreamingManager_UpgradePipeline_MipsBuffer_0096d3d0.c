// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>>
// Entry Point: 0096d3d0
// Size: 632 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>>(vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>
   >::value&&is_constructible<TextureStreamingManager::UpgradePipeline::MipsBuffer,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>
   >::reference>::value,
   std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*> >::type
   std::__ndk1::vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>
   >::insert<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>
   >(std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer const*>,
   std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>,
   std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>) */

type __thiscall
std::__ndk1::
vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>
::insert<std::__ndk1::__wrap_iter<TextureStreamingManager::UpgradePipeline::MipsBuffer*>>
          (vector<TextureStreamingManager::UpgradePipeline::MipsBuffer,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::MipsBuffer>>
           *this,__wrap_iter param_1,__wrap_iter param_2,__wrap_iter param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *__src;
  undefined8 *__src_00;
  size_t sVar6;
  size_t __n;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar7 = (undefined8 *)(ulong)param_3;
  __src_00 = (undefined8 *)(ulong)param_2;
  __src = (undefined8 *)(ulong)param_1;
  puVar13 = __src;
  if (0 < (long)puVar7 - (long)__src_00) {
    puVar1 = *(undefined8 **)(this + 8);
    lVar2 = ((long)puVar7 - (long)__src_00) / 0x18;
    if ((*(long *)(this + 0x10) - (long)puVar1 >> 3) * -0x5555555555555555 < lVar2) {
      lVar14 = *(long *)this;
      uVar10 = lVar2 + ((long)puVar1 - lVar14 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = *(long *)(this + 0x10) - lVar14 >> 3;
      uVar12 = lVar8 * 0x5555555555555556;
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar10 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar4 = operator_new(uVar10 * 0x18);
      }
      puVar13 = (undefined8 *)((long)pvVar4 + ((long)__src - lVar14 >> 3) * 8);
      lVar14 = lVar2 * 0x18;
      puVar7 = puVar13 + lVar2 * 3;
      puVar9 = puVar13;
      do {
        lVar14 = lVar14 + -0x18;
        uVar16 = __src_00[1];
        uVar15 = *__src_00;
        puVar9[2] = __src_00[2];
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + 3;
        __src_00 = __src_00 + 3;
      } while (lVar14 != 0);
      sVar6 = (long)__src - (long)*(void **)this;
      if (0 < (long)sVar6) {
        memcpy((void *)((long)puVar13 - sVar6),*(void **)this,sVar6);
      }
      __n = (long)puVar1 - (long)__src;
      if (0 < (long)__n) {
        memcpy(puVar7,__src,__n);
        puVar7 = puVar7 + (__n / 0x18) * 3;
      }
      pvVar5 = *(void **)this;
      *(void **)this = (void *)((long)puVar13 - sVar6);
      *(undefined8 **)(this + 8) = puVar7;
      *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar10 * 0x18);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      lVar14 = (long)puVar1 - (long)__src >> 3;
      puVar9 = puVar1;
      if (lVar14 * -0x5555555555555555 < lVar2) {
        for (puVar11 = __src_00 + lVar14; puVar11 != puVar7; puVar11 = puVar11 + 3) {
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          puVar9[2] = puVar11[2];
          puVar9[1] = uVar16;
          *puVar9 = uVar15;
          puVar9 = puVar9 + 3;
        }
        *(undefined8 **)(this + 8) = puVar9;
        puVar7 = __src_00 + lVar14;
        if ((long)puVar1 - (long)__src < 1) goto LAB_0096d618;
      }
      sVar6 = (long)puVar9 - (long)(__src + lVar2 * 3);
      puVar3 = puVar9;
      for (puVar11 = puVar9 + lVar2 * -3; puVar11 < puVar1; puVar11 = puVar11 + 3) {
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        puVar3[2] = puVar11[2];
        puVar3[1] = uVar16;
        *puVar3 = uVar15;
        puVar3 = puVar3 + 3;
      }
      *(undefined8 **)(this + 8) = puVar3;
      if (sVar6 != 0) {
        memmove((void *)((long)puVar9 - sVar6),__src,sVar6);
      }
      if ((long)puVar7 - (long)__src_00 != 0) {
        memmove(__src,__src_00,(long)puVar7 - (long)__src_00);
      }
    }
  }
LAB_0096d618:
  return (type)puVar13;
}


