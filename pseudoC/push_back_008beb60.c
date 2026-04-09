// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 008beb60
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>&> * this, IChannel * * param_1)


/* std::__ndk1::__split_buffer<SoundPlayer::IChannel*,
   std::__ndk1::allocator<SoundPlayer::IChannel*>&>::push_back(SoundPlayer::IChannel*&&) */

void __thiscall
std::__ndk1::__split_buffer<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>&>
::push_back(__split_buffer<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>&>
            *this,IChannel **param_1)

{
  long lVar1;
  IChannel **ppIVar2;
  IChannel **ppIVar3;
  size_t __n;
  IChannel **ppIVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  IChannel **ppIVar8;
  ulong uVar9;
  ulong uVar10;
  IChannel **ppIVar11;
  IChannel **__src;
  IChannel **ppIVar12;
  ulong uVar13;
  IChannel *pIVar14;
  IChannel *pIVar15;
  IChannel *pIVar16;
  
  ppIVar12 = *(IChannel ***)(this + 0x10);
  if (ppIVar12 != *(IChannel ***)(this + 0x18)) goto LAB_008bece0;
  ppIVar3 = *(IChannel ***)this;
  __src = *(IChannel ***)(this + 8);
  if (ppIVar3 <= __src && (long)__src - (long)ppIVar3 != 0) {
    lVar6 = (long)__src - (long)ppIVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppIVar12 - (long)__src;
    ppIVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppIVar12,__src,__n);
      __src = *(IChannel ***)(this + 8);
    }
    ppIVar12 = (IChannel **)((long)ppIVar12 + __n);
    *(IChannel ***)(this + 8) = __src + -(lVar1 >> 1);
    *(IChannel ***)(this + 0x10) = ppIVar12;
    goto LAB_008bece0;
  }
  uVar7 = (long)ppIVar12 - (long)ppIVar3 >> 2;
  if ((long)ppIVar12 - (long)ppIVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppIVar2 = (IChannel **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppIVar12 - (long)__src;
  ppIVar12 = ppIVar2;
  if (uVar9 != 0) {
    ppIVar12 = (IChannel **)((long)ppIVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppIVar8 = ppIVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((IChannel **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        ppIVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppIVar11 = (IChannel **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppIVar4 = ppIVar8 + -1;
          pIVar14 = ppIVar8[-2];
          pIVar16 = ppIVar8[1];
          pIVar15 = *ppIVar8;
          ppIVar8 = ppIVar8 + 4;
          uVar13 = uVar13 - 4;
          ppIVar11[-1] = *ppIVar4;
          ppIVar11[-2] = pIVar14;
          ppIVar11[1] = pIVar16;
          *ppIVar11 = pIVar15;
          ppIVar11 = ppIVar11 + 4;
        } while (uVar13 != 0);
        ppIVar8 = ppIVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_008becc8;
      }
    }
    do {
      ppIVar11 = ppIVar8 + 1;
      *ppIVar8 = *__src;
      ppIVar8 = ppIVar11;
      __src = __src + 1;
    } while (ppIVar11 != ppIVar12);
  }
LAB_008becc8:
  *(void **)this = pvVar5;
  *(IChannel ***)(this + 8) = ppIVar2;
  *(IChannel ***)(this + 0x10) = ppIVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppIVar3 != (IChannel **)0x0) {
    operator_delete(ppIVar3);
    ppIVar12 = *(IChannel ***)(this + 0x10);
  }
LAB_008bece0:
  *ppIVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


