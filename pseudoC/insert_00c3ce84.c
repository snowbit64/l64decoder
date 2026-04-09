// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00c3ce84
// Size: 776 bytes
// Signature: undefined __thiscall insert(vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> * this, __wrap_iter param_1, uint * * param_2)


/* std::__ndk1::vector<unsigned int*, std::__ndk1::allocator<unsigned int*>
   >::insert(std::__ndk1::__wrap_iter<unsigned int* const*>, unsigned int* const&) */

uint ** __thiscall
std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
          (vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *this,__wrap_iter param_1,
          uint **param_2)

{
  uint **__src;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  uint **ppuVar7;
  uint **ppuVar9;
  uint **ppuVar10;
  ulong uVar11;
  size_t __n_00;
  uint **ppuVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint **ppuVar8;
  
  pvVar4 = *(void **)this;
  ppuVar12 = *(uint ***)(this + 8);
  uVar15 = (ulong)param_1 - (long)pvVar4;
  uVar14 = (long)uVar15 >> 3;
  __src = (uint **)((long)pvVar4 + (uVar15 & 0xfffffffffffffff8));
  if (*(uint ***)(this + 0x10) <= ppuVar12) {
    uVar5 = ((long)ppuVar12 - (long)pvVar4 >> 3) + 1;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar11 = (long)*(uint ***)(this + 0x10) - (long)pvVar4;
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
    ppuVar12 = (uint **)((long)pvVar2 + uVar14 * 8);
    pvVar13 = (void *)((long)pvVar2 + uVar5 * 8);
    if (uVar14 == uVar5) {
      if ((long)uVar15 < 1) {
        uVar14 = (long)uVar15 >> 2;
        if (uVar15 == 0) {
          uVar14 = 1;
        }
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00c3d180 to 00c3d18b has its CatchHandler @ 00c3d18c */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00c3cfe4 to 00c3cfe7 has its CatchHandler @ 00c3d18c */
        pvVar3 = operator_new(uVar14 << 3);
        pvVar13 = (void *)((long)pvVar3 + uVar14 * 8);
        ppuVar12 = (uint **)((long)pvVar3 + (uVar14 & 0x7ffffffffffffffc) * 2);
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
        ppuVar12 = (uint **)((long)ppuVar12 + (uVar15 & 0x3ffffffffffffffe) * -4);
      }
    }
    __n = (long)__src - (long)pvVar4;
    ppuVar7 = ppuVar12 + 1;
    *ppuVar12 = *param_2;
    if (0 < (long)__n) {
      memcpy((void *)((long)ppuVar12 - __n),pvVar4,__n);
    }
    __n_00 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_00) {
      memcpy(ppuVar7,__src,__n_00);
      ppuVar7 = (uint **)((long)ppuVar7 + __n_00);
    }
    pvVar4 = *(void **)this;
    *(void **)this = (void *)((long)ppuVar12 - __n);
    *(uint ***)(this + 8) = ppuVar7;
    *(void **)(this + 0x10) = pvVar13;
    if (pvVar4 == (void *)0x0) {
      return ppuVar12;
    }
    operator_delete(pvVar4);
    return ppuVar12;
  }
  if (__src == ppuVar12) {
    *__src = *param_2;
    *(uint ***)(this + 8) = __src + 1;
    return __src;
  }
  uVar5 = (long)ppuVar12 + (-8 - (long)__src);
  uVar11 = uVar5 & 0xfffffffffffffff8;
  ppuVar7 = (uint **)((long)__src + uVar11);
  ppuVar10 = ppuVar12;
  if (ppuVar7 < ppuVar12) {
    uVar15 = uVar15 & 0xfffffffffffffff8;
    ppuVar10 = (uint **)((long)pvVar4 + uVar11 + uVar15 + 8);
    ppuVar9 = ppuVar12;
    if (ppuVar12 <= ppuVar10) {
      ppuVar9 = ppuVar10;
    }
    uVar11 = (long)ppuVar9 + (~(ulong)pvVar4 - (uVar15 + uVar11));
    ppuVar9 = ppuVar12;
    if (0x17 < uVar11) {
      ppuVar10 = (uint **)((long)pvVar4 + (uVar5 & 0xfffffffffffffff8) + uVar15 + 8);
      ppuVar8 = ppuVar12;
      if (ppuVar12 <= ppuVar10) {
        ppuVar8 = ppuVar10;
      }
      lVar1 = ((long)uVar5 >> 3) + uVar14;
      uVar15 = (long)ppuVar8 + (~(ulong)pvVar4 - (uVar15 + (uVar5 & 0xfffffffffffffff8)));
      if (((uint **)((long)pvVar4 + (lVar1 + (uVar15 >> 3)) * 8 + 8) <= ppuVar12) ||
         ((uint **)((long)ppuVar12 + (uVar15 & 0xfffffffffffffff8) + 8) <= ppuVar7)) {
        uVar15 = (uVar11 >> 3) + 1;
        ppuVar10 = ppuVar12 + 2;
        uVar11 = uVar15 & 0x3ffffffffffffffc;
        ppuVar9 = (uint **)((long)pvVar4 + lVar1 * 8 + 0x10);
        ppuVar7 = ppuVar7 + uVar11;
        uVar14 = uVar11;
        do {
          ppuVar8 = ppuVar9 + -1;
          puVar16 = ppuVar9[-2];
          puVar18 = ppuVar9[1];
          puVar17 = *ppuVar9;
          ppuVar9 = ppuVar9 + 4;
          uVar14 = uVar14 - 4;
          ppuVar10[-1] = *ppuVar8;
          ppuVar10[-2] = puVar16;
          ppuVar10[1] = puVar18;
          *ppuVar10 = puVar17;
          ppuVar10 = ppuVar10 + 4;
        } while (uVar14 != 0);
        ppuVar10 = ppuVar12 + uVar11;
        ppuVar9 = ppuVar12 + uVar11;
        if (uVar15 == uVar11) goto LAB_00c3d118;
      }
    }
    do {
      ppuVar8 = ppuVar7 + 1;
      *ppuVar9 = *ppuVar7;
      ppuVar7 = ppuVar8;
      ppuVar10 = ppuVar9 + 1;
      ppuVar9 = ppuVar9 + 1;
    } while (ppuVar8 < ppuVar12);
  }
LAB_00c3d118:
  *(uint ***)(this + 8) = ppuVar10;
  if (uVar5 != 0) {
    memmove(ppuVar12 + -((long)uVar5 >> 3),__src,uVar5);
    ppuVar10 = *(uint ***)(this + 8);
  }
  *__src = param_2[__src <= param_2 && param_2 < ppuVar10];
  return __src;
}


