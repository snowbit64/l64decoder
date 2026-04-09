// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<unsigned_int*>>
// Entry Point: 00ac4b54
// Size: 1012 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<unsigned_int*>>(vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<unsigned int*>
   >::value&&is_constructible<unsigned int,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<unsigned int*> >::reference>::value,
   std::__ndk1::__wrap_iter<unsigned int*> >::type std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >::insert<std::__ndk1::__wrap_iter<unsigned int*>
   >(std::__ndk1::__wrap_iter<unsigned int const*>, std::__ndk1::__wrap_iter<unsigned int*>,
   std::__ndk1::__wrap_iter<unsigned int*>) */

type __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
insert<std::__ndk1::__wrap_iter<unsigned_int*>>
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,__wrap_iter param_1,
          __wrap_iter param_2,__wrap_iter param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined4 *__src;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  void *__src_00;
  size_t __n;
  ulong uVar17;
  long lVar18;
  undefined4 *__src_01;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 *puVar11;
  
  puVar3 = (undefined4 *)(ulong)param_3;
  __src = (undefined4 *)(ulong)param_2;
  __src_00 = *(void **)this;
  lVar16 = (long)puVar3 - (long)__src;
  uVar17 = (ulong)param_1 - (long)__src_00;
  __src_01 = (undefined4 *)((long)__src_00 + (uVar17 & 0xfffffffffffffffc));
  if (lVar16 < 1) goto LAB_00ac4f10;
  puVar1 = *(undefined4 **)(this + 8);
  lVar15 = (long)uVar17 >> 2;
  lVar18 = lVar16 >> 2;
  if (lVar18 <= *(long *)(this + 0x10) - (long)puVar1 >> 2) {
    uVar8 = (long)puVar1 - (long)__src_01;
    lVar16 = (long)uVar8 >> 2;
    puVar7 = puVar1;
    if (lVar16 < lVar18) {
      puVar5 = __src + lVar16;
      if (puVar5 != puVar3) {
        uVar4 = (long)puVar3 + (-4 - ((uVar8 & 0xfffffffffffffffc) + (long)__src));
        puVar6 = puVar1;
        puVar10 = puVar5;
        if ((0x1b < uVar4) &&
           ((__src + lVar16 + (uVar4 >> 2) + 1 <= puVar1 ||
            ((undefined4 *)((long)puVar1 + (uVar4 & 0xfffffffffffffffc) + 4) <= puVar5)))) {
          uVar4 = (uVar4 >> 2) + 1;
          uVar12 = uVar4 & 0x7ffffffffffffff8;
          puVar14 = (undefined8 *)(puVar1 + 4);
          puVar13 = (undefined8 *)(__src + lVar16 + 4);
          uVar9 = uVar12;
          do {
            puVar2 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar9 = uVar9 - 8;
            puVar14[-1] = *puVar2;
            puVar14[-2] = uVar19;
            puVar14[1] = uVar21;
            *puVar14 = uVar20;
            puVar14 = puVar14 + 4;
          } while (uVar9 != 0);
          puVar7 = puVar1 + uVar12;
          puVar6 = puVar1 + uVar12;
          puVar10 = puVar5 + uVar12;
          if (uVar4 == uVar12) goto LAB_00ac4ddc;
        }
        do {
          puVar11 = puVar10 + 1;
          *puVar6 = *puVar10;
          puVar7 = puVar6 + 1;
          puVar6 = puVar6 + 1;
          puVar10 = puVar11;
        } while (puVar11 != puVar3);
      }
LAB_00ac4ddc:
      *(undefined4 **)(this + 8) = puVar7;
      puVar3 = puVar5;
      if ((long)uVar8 < 1) goto LAB_00ac4f10;
    }
    uVar8 = (long)puVar7 - (long)(__src_01 + lVar18);
    uVar4 = uVar8 & 0xfffffffffffffffc;
    puVar5 = (undefined4 *)((long)__src_01 + uVar4);
    puVar6 = puVar7;
    if (puVar5 < puVar1) {
      uVar17 = uVar17 & 0xfffffffffffffffc;
      puVar6 = (undefined4 *)((long)__src_00 + uVar4 + uVar17 + 4);
      puVar10 = puVar1;
      if (puVar1 <= puVar6) {
        puVar10 = puVar6;
      }
      uVar4 = (long)puVar10 + (~(ulong)__src_00 - (uVar17 + uVar4));
      puVar10 = puVar7;
      if (0x1b < uVar4) {
        puVar6 = (undefined4 *)((long)__src_00 + (uVar8 & 0xfffffffffffffffc) + uVar17 + 4);
        puVar10 = puVar1;
        if (puVar1 <= puVar6) {
          puVar10 = puVar6;
        }
        lVar15 = ((long)uVar8 >> 2) + lVar15;
        uVar17 = (long)puVar10 + (~(ulong)__src_00 - (uVar17 + (uVar8 & 0xfffffffffffffffc)));
        if (((undefined4 *)((long)__src_00 + (lVar15 + (uVar17 >> 2)) * 4 + 4) <= puVar7) ||
           (puVar10 = puVar7,
           (undefined4 *)((long)puVar7 + (uVar17 & 0xfffffffffffffffc) + 4) <= puVar5)) {
          uVar17 = (uVar4 >> 2) + 1;
          puVar14 = (undefined8 *)(puVar7 + 4);
          uVar9 = uVar17 & 0x7ffffffffffffff8;
          puVar13 = (undefined8 *)((long)__src_00 + lVar15 * 4 + 0x10);
          puVar5 = puVar5 + uVar9;
          puVar6 = puVar7 + uVar9;
          uVar4 = uVar9;
          do {
            puVar2 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar4 = uVar4 - 8;
            puVar14[-1] = *puVar2;
            puVar14[-2] = uVar19;
            puVar14[1] = uVar21;
            *puVar14 = uVar20;
            puVar14 = puVar14 + 4;
          } while (uVar4 != 0);
          puVar10 = puVar6;
          if (uVar17 == uVar9) goto LAB_00ac4ee8;
        }
      }
      do {
        puVar11 = puVar5 + 1;
        puVar6 = puVar10 + 1;
        *puVar10 = *puVar5;
        puVar5 = puVar11;
        puVar10 = puVar6;
      } while (puVar11 < puVar1);
    }
LAB_00ac4ee8:
    *(undefined4 **)(this + 8) = puVar6;
    if (uVar8 != 0) {
      memmove(puVar7 + -((long)uVar8 >> 2),__src_01,uVar8);
    }
    if ((long)puVar3 - (long)__src != 0) {
      memmove(__src_01,__src,(long)puVar3 - (long)__src);
    }
    goto LAB_00ac4f10;
  }
  uVar8 = lVar18 + ((long)puVar1 - (long)__src_00 >> 2);
  if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar4 = *(long *)(this + 0x10) - (long)__src_00;
  uVar9 = (long)uVar4 >> 1;
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar8 << 2);
  }
  puVar3 = (undefined4 *)((long)__dest + lVar15 * 4);
  uVar4 = lVar16 - 4;
  puVar7 = puVar3 + lVar18;
  puVar5 = puVar3;
  if ((uVar4 < 0x1c) ||
     ((puVar3 < (undefined4 *)((long)__src + (uVar4 & 0xfffffffffffffffc) + 4) &&
      (__src < (undefined4 *)((long)__dest + (lVar15 + (uVar4 >> 2)) * 4 + 4))))) {
LAB_00ac4ce8:
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = *__src;
      puVar5 = puVar6;
      __src = __src + 1;
    } while (puVar6 != puVar7);
  }
  else {
    uVar4 = (uVar4 >> 2) + 1;
    uVar12 = uVar4 & 0x7ffffffffffffff8;
    puVar14 = (undefined8 *)(__src + 4);
    puVar13 = (undefined8 *)((long)__dest + lVar15 * 4 + 0x10);
    uVar9 = uVar12;
    do {
      puVar2 = puVar14 + -1;
      uVar19 = puVar14[-2];
      uVar21 = puVar14[1];
      uVar20 = *puVar14;
      puVar14 = puVar14 + 4;
      uVar9 = uVar9 - 8;
      puVar13[-1] = *puVar2;
      puVar13[-2] = uVar19;
      puVar13[1] = uVar21;
      *puVar13 = uVar20;
      puVar13 = puVar13 + 4;
    } while (uVar9 != 0);
    puVar5 = puVar3 + uVar12;
    __src = __src + uVar12;
    if (uVar4 != uVar12) goto LAB_00ac4ce8;
  }
  if (0 < (long)uVar17) {
    memcpy(__dest,__src_00,uVar17);
  }
  __n = (long)puVar1 - (long)__src_01;
  if (0 < (long)__n) {
    memcpy(puVar7,__src_01,__n);
    puVar7 = (undefined4 *)((long)puVar7 + __n);
    __src_00 = *(void **)this;
  }
  *(void **)this = __dest;
  *(undefined4 **)(this + 8) = puVar7;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 4);
  __src_01 = puVar3;
  if (__src_00 != (void *)0x0) {
    operator_delete(__src_00);
  }
LAB_00ac4f10:
  return (type)__src_01;
}


