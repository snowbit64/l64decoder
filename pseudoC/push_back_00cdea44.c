// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00cdea44
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>> * this, MessageRange * * param_1)


/* std::__ndk1::__split_buffer<CryptoPP::MeterFilter::MessageRange*,
   std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>
   >::push_back(CryptoPP::MeterFilter::MessageRange*&&) */

void __thiscall
std::__ndk1::
__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
::push_back(__split_buffer<CryptoPP::MeterFilter::MessageRange*,std::__ndk1::allocator<CryptoPP::MeterFilter::MessageRange*>>
            *this,MessageRange **param_1)

{
  long lVar1;
  MessageRange **ppMVar2;
  MessageRange **ppMVar3;
  size_t __n;
  MessageRange **ppMVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  MessageRange **ppMVar8;
  ulong uVar9;
  ulong uVar10;
  MessageRange **ppMVar11;
  MessageRange **__src;
  MessageRange **ppMVar12;
  ulong uVar13;
  MessageRange *pMVar14;
  MessageRange *pMVar15;
  MessageRange *pMVar16;
  
  ppMVar12 = *(MessageRange ***)(this + 0x10);
  if (ppMVar12 != *(MessageRange ***)(this + 0x18)) goto LAB_00cdebc4;
  ppMVar3 = *(MessageRange ***)this;
  __src = *(MessageRange ***)(this + 8);
  if (ppMVar3 <= __src && (long)__src - (long)ppMVar3 != 0) {
    lVar6 = (long)__src - (long)ppMVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppMVar12 - (long)__src;
    ppMVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppMVar12,__src,__n);
      __src = *(MessageRange ***)(this + 8);
    }
    ppMVar12 = (MessageRange **)((long)ppMVar12 + __n);
    *(MessageRange ***)(this + 8) = __src + -(lVar1 >> 1);
    *(MessageRange ***)(this + 0x10) = ppMVar12;
    goto LAB_00cdebc4;
  }
  uVar7 = (long)ppMVar12 - (long)ppMVar3 >> 2;
  if ((long)ppMVar12 - (long)ppMVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppMVar2 = (MessageRange **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppMVar12 - (long)__src;
  ppMVar12 = ppMVar2;
  if (uVar9 != 0) {
    ppMVar12 = (MessageRange **)((long)ppMVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppMVar8 = ppMVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((MessageRange **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src))
      {
        uVar9 = (uVar9 >> 3) + 1;
        ppMVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppMVar11 = (MessageRange **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppMVar4 = ppMVar8 + -1;
          pMVar14 = ppMVar8[-2];
          pMVar16 = ppMVar8[1];
          pMVar15 = *ppMVar8;
          ppMVar8 = ppMVar8 + 4;
          uVar13 = uVar13 - 4;
          ppMVar11[-1] = *ppMVar4;
          ppMVar11[-2] = pMVar14;
          ppMVar11[1] = pMVar16;
          *ppMVar11 = pMVar15;
          ppMVar11 = ppMVar11 + 4;
        } while (uVar13 != 0);
        ppMVar8 = ppMVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00cdebac;
      }
    }
    do {
      ppMVar11 = ppMVar8 + 1;
      *ppMVar8 = *__src;
      ppMVar8 = ppMVar11;
      __src = __src + 1;
    } while (ppMVar11 != ppMVar12);
  }
LAB_00cdebac:
  *(void **)this = pvVar5;
  *(MessageRange ***)(this + 8) = ppMVar2;
  *(MessageRange ***)(this + 0x10) = ppMVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppMVar3 != (MessageRange **)0x0) {
    operator_delete(ppMVar3);
    ppMVar12 = *(MessageRange ***)(this + 0x10);
  }
LAB_00cdebc4:
  *ppMVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


