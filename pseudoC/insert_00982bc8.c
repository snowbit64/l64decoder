// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00982bc8
// Size: 772 bytes
// Signature: undefined __thiscall insert(vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, __wrap_iter param_1, uint * param_2)


/* std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   >::insert(std::__ndk1::__wrap_iter<unsigned int const*>, unsigned int const&) */

uint * __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::insert
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,__wrap_iter param_1,
          uint *param_2)

{
  uint *__src;
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  uint *puVar8;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  size_t __n_00;
  uint *puVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint *puVar9;
  
  pvVar5 = *(void **)this;
  puVar15 = *(uint **)(this + 8);
  uVar18 = (ulong)param_1 - (long)pvVar5;
  uVar17 = (long)uVar18 >> 2;
  __src = (uint *)((long)pvVar5 + (uVar18 & 0xfffffffffffffffc));
  if (*(uint **)(this + 0x10) <= puVar15) {
    uVar6 = ((long)puVar15 - (long)pvVar5 >> 2) + 1;
    if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar12 = (long)*(uint **)(this + 0x10) - (long)pvVar5;
    uVar7 = (long)uVar12 >> 1;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar6 << 2);
    }
    puVar15 = (uint *)((long)pvVar3 + uVar17 * 4);
    pvVar16 = (void *)((long)pvVar3 + uVar6 * 4);
    if (uVar17 == uVar6) {
      if ((long)uVar18 < 1) {
        uVar17 = (long)uVar18 >> 1;
        if (uVar18 == 0) {
          uVar17 = 1;
        }
        if (uVar17 >> 0x3e != 0) {
                    /* try { // try from 00982ec0 to 00982ecb has its CatchHandler @ 00982ecc */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00982d28 to 00982d2b has its CatchHandler @ 00982ecc */
        pvVar4 = operator_new(uVar17 << 2);
        pvVar16 = (void *)((long)pvVar4 + uVar17 * 4);
        puVar15 = (uint *)((long)pvVar4 + (uVar17 & 0xfffffffffffffffc));
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          pvVar5 = *(void **)this;
        }
      }
      else {
        uVar18 = uVar17 + 2;
        if (-1 < (long)(uVar17 + 1)) {
          uVar18 = uVar17 + 1;
        }
        puVar15 = (uint *)((long)puVar15 + (uVar18 & 0x7ffffffffffffffe) * -2);
      }
    }
    __n = (long)__src - (long)pvVar5;
    puVar8 = puVar15 + 1;
    *puVar15 = *param_2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar15 - __n),pvVar5,__n);
    }
    __n_00 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_00) {
      memcpy(puVar8,__src,__n_00);
      puVar8 = (uint *)((long)puVar8 + __n_00);
    }
    pvVar5 = *(void **)this;
    *(void **)this = (void *)((long)puVar15 - __n);
    *(uint **)(this + 8) = puVar8;
    *(void **)(this + 0x10) = pvVar16;
    if (pvVar5 == (void *)0x0) {
      return puVar15;
    }
    operator_delete(pvVar5);
    return puVar15;
  }
  if (__src == puVar15) {
    *__src = *param_2;
    *(uint **)(this + 8) = __src + 1;
    return __src;
  }
  uVar6 = (long)puVar15 + (-4 - (long)__src);
  uVar12 = uVar6 & 0xfffffffffffffffc;
  puVar8 = (uint *)((long)__src + uVar12);
  puVar11 = puVar15;
  if (puVar8 < puVar15) {
    uVar18 = uVar18 & 0xfffffffffffffffc;
    puVar11 = (uint *)((long)pvVar5 + uVar12 + uVar18 + 4);
    puVar10 = puVar15;
    if (puVar15 <= puVar11) {
      puVar10 = puVar11;
    }
    uVar12 = (long)puVar10 + (~(ulong)pvVar5 - (uVar18 + uVar12));
    puVar10 = puVar15;
    if (0x1b < uVar12) {
      puVar11 = (uint *)((long)pvVar5 + (uVar6 & 0xfffffffffffffffc) + uVar18 + 4);
      puVar9 = puVar15;
      if (puVar15 <= puVar11) {
        puVar9 = puVar11;
      }
      lVar1 = ((long)uVar6 >> 2) + uVar17;
      uVar18 = (long)puVar9 + (~(ulong)pvVar5 - (uVar18 + (uVar6 & 0xfffffffffffffffc)));
      if (((uint *)((long)pvVar5 + (lVar1 + (uVar18 >> 2)) * 4 + 4) <= puVar15) ||
         ((uint *)((long)puVar15 + (uVar18 & 0xfffffffffffffffc) + 4) <= puVar8)) {
        uVar18 = (uVar12 >> 2) + 1;
        puVar14 = (undefined8 *)(puVar15 + 4);
        uVar12 = uVar18 & 0x7ffffffffffffff8;
        puVar13 = (undefined8 *)((long)pvVar5 + lVar1 * 4 + 0x10);
        puVar8 = puVar8 + uVar12;
        uVar17 = uVar12;
        do {
          puVar2 = puVar13 + -1;
          uVar19 = puVar13[-2];
          uVar21 = puVar13[1];
          uVar20 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar17 = uVar17 - 8;
          puVar14[-1] = *puVar2;
          puVar14[-2] = uVar19;
          puVar14[1] = uVar21;
          *puVar14 = uVar20;
          puVar14 = puVar14 + 4;
        } while (uVar17 != 0);
        puVar11 = puVar15 + uVar12;
        puVar10 = puVar15 + uVar12;
        if (uVar18 == uVar12) goto LAB_00982e58;
      }
    }
    do {
      puVar9 = puVar8 + 1;
      *puVar10 = *puVar8;
      puVar8 = puVar9;
      puVar11 = puVar10 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar9 < puVar15);
  }
LAB_00982e58:
  *(uint **)(this + 8) = puVar11;
  if (uVar6 != 0) {
    memmove(puVar15 + -((long)uVar6 >> 2),__src,uVar6);
    puVar11 = *(uint **)(this + 8);
  }
  *__src = param_2[__src <= param_2 && param_2 < puVar11];
  return __src;
}


