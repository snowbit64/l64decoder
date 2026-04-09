// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00978e98
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&> * this, WorkerResult * * param_1)


/* std::__ndk1::__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,
   std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>::push_back(TextureStreamingManager::UpgradePipeline::WorkerResult*&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
::push_back(__split_buffer<TextureStreamingManager::UpgradePipeline::WorkerResult*,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::WorkerResult*>&>
            *this,WorkerResult **param_1)

{
  long lVar1;
  WorkerResult **ppWVar2;
  WorkerResult **ppWVar3;
  size_t __n;
  WorkerResult **ppWVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  WorkerResult **ppWVar8;
  ulong uVar9;
  ulong uVar10;
  WorkerResult **ppWVar11;
  WorkerResult **__src;
  WorkerResult **ppWVar12;
  ulong uVar13;
  WorkerResult *pWVar14;
  WorkerResult *pWVar15;
  WorkerResult *pWVar16;
  
  ppWVar12 = *(WorkerResult ***)(this + 0x10);
  if (ppWVar12 != *(WorkerResult ***)(this + 0x18)) goto LAB_00979018;
  ppWVar3 = *(WorkerResult ***)this;
  __src = *(WorkerResult ***)(this + 8);
  if (ppWVar3 <= __src && (long)__src - (long)ppWVar3 != 0) {
    lVar6 = (long)__src - (long)ppWVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppWVar12 - (long)__src;
    ppWVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppWVar12,__src,__n);
      __src = *(WorkerResult ***)(this + 8);
    }
    ppWVar12 = (WorkerResult **)((long)ppWVar12 + __n);
    *(WorkerResult ***)(this + 8) = __src + -(lVar1 >> 1);
    *(WorkerResult ***)(this + 0x10) = ppWVar12;
    goto LAB_00979018;
  }
  uVar7 = (long)ppWVar12 - (long)ppWVar3 >> 2;
  if ((long)ppWVar12 - (long)ppWVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppWVar2 = (WorkerResult **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppWVar12 - (long)__src;
  ppWVar12 = ppWVar2;
  if (uVar9 != 0) {
    ppWVar12 = (WorkerResult **)((long)ppWVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppWVar8 = ppWVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((WorkerResult **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src))
      {
        uVar9 = (uVar9 >> 3) + 1;
        ppWVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppWVar11 = (WorkerResult **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppWVar4 = ppWVar8 + -1;
          pWVar14 = ppWVar8[-2];
          pWVar16 = ppWVar8[1];
          pWVar15 = *ppWVar8;
          ppWVar8 = ppWVar8 + 4;
          uVar13 = uVar13 - 4;
          ppWVar11[-1] = *ppWVar4;
          ppWVar11[-2] = pWVar14;
          ppWVar11[1] = pWVar16;
          *ppWVar11 = pWVar15;
          ppWVar11 = ppWVar11 + 4;
        } while (uVar13 != 0);
        ppWVar8 = ppWVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00979000;
      }
    }
    do {
      ppWVar11 = ppWVar8 + 1;
      *ppWVar8 = *__src;
      ppWVar8 = ppWVar11;
      __src = __src + 1;
    } while (ppWVar11 != ppWVar12);
  }
LAB_00979000:
  *(void **)this = pvVar5;
  *(WorkerResult ***)(this + 8) = ppWVar2;
  *(WorkerResult ***)(this + 0x10) = ppWVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppWVar3 != (WorkerResult **)0x0) {
    operator_delete(ppWVar3);
    ppWVar12 = *(WorkerResult ***)(this + 0x10);
  }
LAB_00979018:
  *ppWVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


