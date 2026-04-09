// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00d0fc9c
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> * this, uint * * param_1)


/* std::__ndk1::__split_buffer<unsigned int*, std::__ndk1::allocator<unsigned
   int*>&>::push_back(unsigned int*&&) */

void __thiscall
std::__ndk1::__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&>::push_back
          (__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> *this,uint **param_1
          )

{
  long lVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  size_t __n;
  uint **ppuVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  uint **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  uint **ppuVar11;
  uint **__src;
  uint **ppuVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  
  ppuVar12 = *(uint ***)(this + 0x10);
  if (ppuVar12 != *(uint ***)(this + 0x18)) goto LAB_00d0fe1c;
  ppuVar3 = *(uint ***)this;
  __src = *(uint ***)(this + 8);
  if (ppuVar3 <= __src && (long)__src - (long)ppuVar3 != 0) {
    lVar6 = (long)__src - (long)ppuVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppuVar12 - (long)__src;
    ppuVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppuVar12,__src,__n);
      __src = *(uint ***)(this + 8);
    }
    ppuVar12 = (uint **)((long)ppuVar12 + __n);
    *(uint ***)(this + 8) = __src + -(lVar1 >> 1);
    *(uint ***)(this + 0x10) = ppuVar12;
    goto LAB_00d0fe1c;
  }
  uVar7 = (long)ppuVar12 - (long)ppuVar3 >> 2;
  if ((long)ppuVar12 - (long)ppuVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppuVar2 = (uint **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppuVar12 - (long)__src;
  ppuVar12 = ppuVar2;
  if (uVar9 != 0) {
    ppuVar12 = (uint **)((long)ppuVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppuVar8 = ppuVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((uint **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        ppuVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppuVar11 = (uint **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppuVar4 = ppuVar8 + -1;
          puVar14 = ppuVar8[-2];
          puVar16 = ppuVar8[1];
          puVar15 = *ppuVar8;
          ppuVar8 = ppuVar8 + 4;
          uVar13 = uVar13 - 4;
          ppuVar11[-1] = *ppuVar4;
          ppuVar11[-2] = puVar14;
          ppuVar11[1] = puVar16;
          *ppuVar11 = puVar15;
          ppuVar11 = ppuVar11 + 4;
        } while (uVar13 != 0);
        ppuVar8 = ppuVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00d0fe04;
      }
    }
    do {
      ppuVar11 = ppuVar8 + 1;
      *ppuVar8 = *__src;
      ppuVar8 = ppuVar11;
      __src = __src + 1;
    } while (ppuVar11 != ppuVar12);
  }
LAB_00d0fe04:
  *(void **)this = pvVar5;
  *(uint ***)(this + 8) = ppuVar2;
  *(uint ***)(this + 0x10) = ppuVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppuVar3 != (uint **)0x0) {
    operator_delete(ppuVar3);
    ppuVar12 = *(uint ***)(this + 0x10);
  }
LAB_00d0fe1c:
  *ppuVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


