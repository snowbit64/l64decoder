// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0097029c
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>> * this, ReallocateRequest * * param_1)


/* std::__ndk1::__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>
   >::push_back(TextureStreamingManager::UpgradePipeline::ReallocateRequest*&&) */

void __thiscall
std::__ndk1::
__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
::push_back(__split_buffer<TextureStreamingManager::UpgradePipeline::ReallocateRequest*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest*>>
            *this,ReallocateRequest **param_1)

{
  long lVar1;
  ReallocateRequest **ppRVar2;
  ReallocateRequest **ppRVar3;
  size_t __n;
  ReallocateRequest **ppRVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ReallocateRequest **ppRVar8;
  ulong uVar9;
  ulong uVar10;
  ReallocateRequest **ppRVar11;
  ReallocateRequest **__src;
  ReallocateRequest **ppRVar12;
  ulong uVar13;
  ReallocateRequest *pRVar14;
  ReallocateRequest *pRVar15;
  ReallocateRequest *pRVar16;
  
  ppRVar12 = *(ReallocateRequest ***)(this + 0x10);
  if (ppRVar12 != *(ReallocateRequest ***)(this + 0x18)) goto LAB_0097041c;
  ppRVar3 = *(ReallocateRequest ***)this;
  __src = *(ReallocateRequest ***)(this + 8);
  if (ppRVar3 <= __src && (long)__src - (long)ppRVar3 != 0) {
    lVar6 = (long)__src - (long)ppRVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppRVar12 - (long)__src;
    ppRVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppRVar12,__src,__n);
      __src = *(ReallocateRequest ***)(this + 8);
    }
    ppRVar12 = (ReallocateRequest **)((long)ppRVar12 + __n);
    *(ReallocateRequest ***)(this + 8) = __src + -(lVar1 >> 1);
    *(ReallocateRequest ***)(this + 0x10) = ppRVar12;
    goto LAB_0097041c;
  }
  uVar7 = (long)ppRVar12 - (long)ppRVar3 >> 2;
  if ((long)ppRVar12 - (long)ppRVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppRVar2 = (ReallocateRequest **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppRVar12 - (long)__src;
  ppRVar12 = ppRVar2;
  if (uVar9 != 0) {
    ppRVar12 = (ReallocateRequest **)((long)ppRVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppRVar8 = ppRVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((ReallocateRequest **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <=
          __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        ppRVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppRVar11 = (ReallocateRequest **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppRVar4 = ppRVar8 + -1;
          pRVar14 = ppRVar8[-2];
          pRVar16 = ppRVar8[1];
          pRVar15 = *ppRVar8;
          ppRVar8 = ppRVar8 + 4;
          uVar13 = uVar13 - 4;
          ppRVar11[-1] = *ppRVar4;
          ppRVar11[-2] = pRVar14;
          ppRVar11[1] = pRVar16;
          *ppRVar11 = pRVar15;
          ppRVar11 = ppRVar11 + 4;
        } while (uVar13 != 0);
        ppRVar8 = ppRVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00970404;
      }
    }
    do {
      ppRVar11 = ppRVar8 + 1;
      *ppRVar8 = *__src;
      ppRVar8 = ppRVar11;
      __src = __src + 1;
    } while (ppRVar11 != ppRVar12);
  }
LAB_00970404:
  *(void **)this = pvVar5;
  *(ReallocateRequest ***)(this + 8) = ppRVar2;
  *(ReallocateRequest ***)(this + 0x10) = ppRVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppRVar3 != (ReallocateRequest **)0x0) {
    operator_delete(ppRVar3);
    ppRVar12 = *(ReallocateRequest ***)(this + 0x10);
  }
LAB_0097041c:
  *ppRVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


