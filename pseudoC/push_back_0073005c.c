// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0073005c
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>> * this, pair * * param_1)


/* std::__ndk1::__split_buffer<std::__ndk1::pair<unsigned short, unsigned short>*,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned short, unsigned short>*>
   >::push_back(std::__ndk1::pair<unsigned short, unsigned short>*&&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
::push_back(__split_buffer<std::__ndk1::pair<unsigned_short,unsigned_short>*,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>*>>
            *this,pair **param_1)

{
  long lVar1;
  pair **pppVar2;
  pair **pppVar3;
  size_t __n;
  pair **pppVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  pair **pppVar8;
  ulong uVar9;
  ulong uVar10;
  pair **pppVar11;
  pair **__src;
  pair **pppVar12;
  ulong uVar13;
  pair *ppVar14;
  pair *ppVar15;
  pair *ppVar16;
  
  pppVar12 = *(pair ***)(this + 0x10);
  if (pppVar12 != *(pair ***)(this + 0x18)) goto LAB_007301dc;
  pppVar3 = *(pair ***)this;
  __src = *(pair ***)(this + 8);
  if (pppVar3 <= __src && (long)__src - (long)pppVar3 != 0) {
    lVar6 = (long)__src - (long)pppVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)pppVar12 - (long)__src;
    pppVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(pppVar12,__src,__n);
      __src = *(pair ***)(this + 8);
    }
    pppVar12 = (pair **)((long)pppVar12 + __n);
    *(pair ***)(this + 8) = __src + -(lVar1 >> 1);
    *(pair ***)(this + 0x10) = pppVar12;
    goto LAB_007301dc;
  }
  uVar7 = (long)pppVar12 - (long)pppVar3 >> 2;
  if ((long)pppVar12 - (long)pppVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  pppVar2 = (pair **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)pppVar12 - (long)__src;
  pppVar12 = pppVar2;
  if (uVar9 != 0) {
    pppVar12 = (pair **)((long)pppVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    pppVar8 = pppVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((pair **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        pppVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        pppVar11 = (pair **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          pppVar4 = pppVar8 + -1;
          ppVar14 = pppVar8[-2];
          ppVar16 = pppVar8[1];
          ppVar15 = *pppVar8;
          pppVar8 = pppVar8 + 4;
          uVar13 = uVar13 - 4;
          pppVar11[-1] = *pppVar4;
          pppVar11[-2] = ppVar14;
          pppVar11[1] = ppVar16;
          *pppVar11 = ppVar15;
          pppVar11 = pppVar11 + 4;
        } while (uVar13 != 0);
        pppVar8 = pppVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_007301c4;
      }
    }
    do {
      pppVar11 = pppVar8 + 1;
      *pppVar8 = *__src;
      pppVar8 = pppVar11;
      __src = __src + 1;
    } while (pppVar11 != pppVar12);
  }
LAB_007301c4:
  *(void **)this = pvVar5;
  *(pair ***)(this + 8) = pppVar2;
  *(pair ***)(this + 0x10) = pppVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (pppVar3 != (pair **)0x0) {
    operator_delete(pppVar3);
    pppVar12 = *(pair ***)(this + 0x10);
  }
LAB_007301dc:
  *pppVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


