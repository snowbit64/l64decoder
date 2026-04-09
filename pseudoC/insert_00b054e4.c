// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00b054e4
// Size: 776 bytes
// Signature: undefined __thiscall insert(vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>> * this, __wrap_iter param_1, Image * * param_2)


/* std::__ndk1::vector<WebResourceManager::Image*,
   std::__ndk1::allocator<WebResourceManager::Image*>
   >::insert(std::__ndk1::__wrap_iter<WebResourceManager::Image* const*>, WebResourceManager::Image*
   const&) */

Image ** __thiscall
std::__ndk1::vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>>::
insert(vector<WebResourceManager::Image*,std::__ndk1::allocator<WebResourceManager::Image*>> *this,
      __wrap_iter param_1,Image **param_2)

{
  Image **__src;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  Image **ppIVar7;
  Image **ppIVar9;
  Image **ppIVar10;
  ulong uVar11;
  size_t __n_00;
  Image **ppIVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  Image *pIVar16;
  Image *pIVar17;
  Image *pIVar18;
  Image **ppIVar8;
  
  pvVar4 = *(void **)this;
  ppIVar12 = *(Image ***)(this + 8);
  uVar15 = (ulong)param_1 - (long)pvVar4;
  uVar14 = (long)uVar15 >> 3;
  __src = (Image **)((long)pvVar4 + (uVar15 & 0xfffffffffffffff8));
  if (*(Image ***)(this + 0x10) <= ppIVar12) {
    uVar5 = ((long)ppIVar12 - (long)pvVar4 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar11 = (long)*(Image ***)(this + 0x10) - (long)pvVar4;
    uVar6 = (long)uVar11 >> 2;
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar5 << 3);
    }
    ppIVar12 = (Image **)((long)pvVar2 + uVar14 * 8);
    pvVar13 = (void *)((long)pvVar2 + uVar5 * 8);
    if (uVar14 == uVar5) {
      if ((long)uVar15 < 1) {
        uVar14 = (long)uVar15 >> 2;
        if (uVar15 == 0) {
          uVar14 = 1;
        }
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00b057e0 to 00b057eb has its CatchHandler @ 00b057ec */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00b05644 to 00b05647 has its CatchHandler @ 00b057ec */
        pvVar3 = operator_new(uVar14 << 3);
        pvVar13 = (void *)((long)pvVar3 + uVar14 * 8);
        ppIVar12 = (Image **)((long)pvVar3 + (uVar14 & 0x7ffffffffffffffc) * 2);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
          pvVar4 = *(void **)this;
        }
      }
      else {
        uVar15 = uVar14 + 2;
        if (-1 < (long)(uVar14 + 1)) {
          uVar15 = uVar14 + 1;
        }
        ppIVar12 = (Image **)((long)ppIVar12 + (uVar15 & 0x3ffffffffffffffe) * -4);
      }
    }
    __n = (long)__src - (long)pvVar4;
    ppIVar7 = ppIVar12 + 1;
    *ppIVar12 = *param_2;
    if (0 < (long)__n) {
      memcpy((void *)((long)ppIVar12 - __n),pvVar4,__n);
    }
    __n_00 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_00) {
      memcpy(ppIVar7,__src,__n_00);
      ppIVar7 = (Image **)((long)ppIVar7 + __n_00);
    }
    pvVar4 = *(void **)this;
    *(void **)this = (void *)((long)ppIVar12 - __n);
    *(Image ***)(this + 8) = ppIVar7;
    *(void **)(this + 0x10) = pvVar13;
    if (pvVar4 == (void *)0x0) {
      return ppIVar12;
    }
    operator_delete(pvVar4);
    return ppIVar12;
  }
  if (__src == ppIVar12) {
    *__src = *param_2;
    *(Image ***)(this + 8) = __src + 1;
    return __src;
  }
  uVar5 = (long)ppIVar12 + (-8 - (long)__src);
  uVar11 = uVar5 & 0xfffffffffffffff8;
  ppIVar7 = (Image **)((long)__src + uVar11);
  ppIVar10 = ppIVar12;
  if (ppIVar7 < ppIVar12) {
    uVar15 = uVar15 & 0xfffffffffffffff8;
    ppIVar10 = (Image **)((long)pvVar4 + uVar11 + uVar15 + 8);
    ppIVar9 = ppIVar12;
    if (ppIVar12 <= ppIVar10) {
      ppIVar9 = ppIVar10;
    }
    uVar11 = (long)ppIVar9 + (~(ulong)pvVar4 - (uVar15 + uVar11));
    ppIVar9 = ppIVar12;
    if (0x17 < uVar11) {
      ppIVar10 = (Image **)((long)pvVar4 + (uVar5 & 0xfffffffffffffff8) + uVar15 + 8);
      ppIVar8 = ppIVar12;
      if (ppIVar12 <= ppIVar10) {
        ppIVar8 = ppIVar10;
      }
      lVar1 = ((long)uVar5 >> 3) + uVar14;
      uVar15 = (long)ppIVar8 + (~(ulong)pvVar4 - (uVar15 + (uVar5 & 0xfffffffffffffff8)));
      if (((Image **)((long)pvVar4 + (lVar1 + (uVar15 >> 3)) * 8 + 8) <= ppIVar12) ||
         ((Image **)((long)ppIVar12 + (uVar15 & 0xfffffffffffffff8) + 8) <= ppIVar7)) {
        uVar15 = (uVar11 >> 3) + 1;
        ppIVar10 = ppIVar12 + 2;
        uVar11 = uVar15 & 0x3ffffffffffffffc;
        ppIVar9 = (Image **)((long)pvVar4 + lVar1 * 8 + 0x10);
        ppIVar7 = ppIVar7 + uVar11;
        uVar14 = uVar11;
        do {
          ppIVar8 = ppIVar9 + -1;
          pIVar16 = ppIVar9[-2];
          pIVar18 = ppIVar9[1];
          pIVar17 = *ppIVar9;
          ppIVar9 = ppIVar9 + 4;
          uVar14 = uVar14 - 4;
          ppIVar10[-1] = *ppIVar8;
          ppIVar10[-2] = pIVar16;
          ppIVar10[1] = pIVar18;
          *ppIVar10 = pIVar17;
          ppIVar10 = ppIVar10 + 4;
        } while (uVar14 != 0);
        ppIVar10 = ppIVar12 + uVar11;
        ppIVar9 = ppIVar12 + uVar11;
        if (uVar15 == uVar11) goto LAB_00b05778;
      }
    }
    do {
      ppIVar8 = ppIVar7 + 1;
      *ppIVar9 = *ppIVar7;
      ppIVar7 = ppIVar8;
      ppIVar10 = ppIVar9 + 1;
      ppIVar9 = ppIVar9 + 1;
    } while (ppIVar8 < ppIVar12);
  }
LAB_00b05778:
  *(Image ***)(this + 8) = ppIVar10;
  if (uVar5 != 0) {
    memmove(ppIVar12 + -((long)uVar5 >> 3),__src,uVar5);
    ppIVar10 = *(Image ***)(this + 8);
  }
  *__src = param_2[__src <= param_2 && param_2 < ppIVar10];
  return __src;
}


