// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 008be7e8
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&> * this, SampleLoadInfo * * param_1)


/* std::__ndk1::__split_buffer<SoundPlayer::SampleLoadInfo*,
   std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>::push_back(SoundPlayer::SampleLoadInfo*&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>::
push_back(__split_buffer<SoundPlayer::SampleLoadInfo*,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo*>&>
          *this,SampleLoadInfo **param_1)

{
  long lVar1;
  SampleLoadInfo **ppSVar2;
  SampleLoadInfo **ppSVar3;
  size_t __n;
  SampleLoadInfo **ppSVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  SampleLoadInfo **ppSVar8;
  ulong uVar9;
  ulong uVar10;
  SampleLoadInfo **ppSVar11;
  SampleLoadInfo **__src;
  SampleLoadInfo **ppSVar12;
  ulong uVar13;
  SampleLoadInfo *pSVar14;
  SampleLoadInfo *pSVar15;
  SampleLoadInfo *pSVar16;
  
  ppSVar12 = *(SampleLoadInfo ***)(this + 0x10);
  if (ppSVar12 != *(SampleLoadInfo ***)(this + 0x18)) goto LAB_008be968;
  ppSVar3 = *(SampleLoadInfo ***)this;
  __src = *(SampleLoadInfo ***)(this + 8);
  if (ppSVar3 <= __src && (long)__src - (long)ppSVar3 != 0) {
    lVar6 = (long)__src - (long)ppSVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppSVar12 - (long)__src;
    ppSVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppSVar12,__src,__n);
      __src = *(SampleLoadInfo ***)(this + 8);
    }
    ppSVar12 = (SampleLoadInfo **)((long)ppSVar12 + __n);
    *(SampleLoadInfo ***)(this + 8) = __src + -(lVar1 >> 1);
    *(SampleLoadInfo ***)(this + 0x10) = ppSVar12;
    goto LAB_008be968;
  }
  uVar7 = (long)ppSVar12 - (long)ppSVar3 >> 2;
  if ((long)ppSVar12 - (long)ppSVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppSVar2 = (SampleLoadInfo **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppSVar12 - (long)__src;
  ppSVar12 = ppSVar2;
  if (uVar9 != 0) {
    ppSVar12 = (SampleLoadInfo **)((long)ppSVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppSVar8 = ppSVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((SampleLoadInfo **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src
         )) {
        uVar9 = (uVar9 >> 3) + 1;
        ppSVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppSVar11 = (SampleLoadInfo **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppSVar4 = ppSVar8 + -1;
          pSVar14 = ppSVar8[-2];
          pSVar16 = ppSVar8[1];
          pSVar15 = *ppSVar8;
          ppSVar8 = ppSVar8 + 4;
          uVar13 = uVar13 - 4;
          ppSVar11[-1] = *ppSVar4;
          ppSVar11[-2] = pSVar14;
          ppSVar11[1] = pSVar16;
          *ppSVar11 = pSVar15;
          ppSVar11 = ppSVar11 + 4;
        } while (uVar13 != 0);
        ppSVar8 = ppSVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_008be950;
      }
    }
    do {
      ppSVar11 = ppSVar8 + 1;
      *ppSVar8 = *__src;
      ppSVar8 = ppSVar11;
      __src = __src + 1;
    } while (ppSVar11 != ppSVar12);
  }
LAB_008be950:
  *(void **)this = pvVar5;
  *(SampleLoadInfo ***)(this + 8) = ppSVar2;
  *(SampleLoadInfo ***)(this + 0x10) = ppSVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppSVar3 != (SampleLoadInfo **)0x0) {
    operator_delete(ppSVar3);
    ppSVar12 = *(SampleLoadInfo ***)(this + 0x10);
  }
LAB_008be968:
  *ppSVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


