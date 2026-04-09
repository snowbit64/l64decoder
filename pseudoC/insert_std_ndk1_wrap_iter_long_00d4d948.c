// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<long*>>
// Entry Point: 00d4d948
// Size: 1004 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<long*>>(vector<long,std::__ndk1::allocator<long>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<long*>
   >::value&&is_constructible<long, std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<long*>
   >::reference>::value, std::__ndk1::__wrap_iter<long*> >::type std::__ndk1::vector<long,
   std::__ndk1::allocator<long> >::insert<std::__ndk1::__wrap_iter<long*>
   >(std::__ndk1::__wrap_iter<long const*>, std::__ndk1::__wrap_iter<long*>,
   std::__ndk1::__wrap_iter<long*>) */

type __thiscall
std::__ndk1::vector<long,std::__ndk1::allocator<long>>::insert<std::__ndk1::__wrap_iter<long*>>
          (vector<long,std::__ndk1::allocator<long>> *this,__wrap_iter param_1,__wrap_iter param_2,
          __wrap_iter param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 *__src;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  void *__src_00;
  size_t __n;
  ulong uVar15;
  long lVar16;
  undefined8 *__src_01;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar3 = (undefined8 *)(ulong)param_3;
  __src = (undefined8 *)(ulong)param_2;
  __src_00 = *(void **)this;
  lVar14 = (long)puVar3 - (long)__src;
  uVar15 = (ulong)param_1 - (long)__src_00;
  __src_01 = (undefined8 *)((long)__src_00 + (uVar15 & 0xfffffffffffffff8));
  if (lVar14 < 1) goto LAB_00d4dd04;
  puVar1 = *(undefined8 **)(this + 8);
  lVar13 = (long)uVar15 >> 3;
  lVar16 = lVar14 >> 3;
  if (lVar16 <= *(long *)(this + 0x10) - (long)puVar1 >> 3) {
    uVar8 = (long)puVar1 - (long)__src_01;
    lVar14 = (long)uVar8 >> 3;
    puVar7 = puVar1;
    if (lVar14 < lVar16) {
      puVar5 = __src + lVar14;
      if (puVar5 != puVar3) {
        uVar4 = (long)puVar3 + (-8 - ((uVar8 & 0xfffffffffffffff8) + (long)__src));
        puVar6 = puVar1;
        puVar10 = puVar5;
        if ((0x17 < uVar4) &&
           ((__src + lVar14 + (uVar4 >> 3) + 1 <= puVar1 ||
            ((undefined8 *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8) + 8) <= puVar5)))) {
          uVar4 = (uVar4 >> 3) + 1;
          uVar11 = uVar4 & 0x3ffffffffffffffc;
          puVar7 = puVar1 + 2;
          puVar6 = __src + lVar14 + 2;
          uVar9 = uVar11;
          do {
            puVar10 = puVar6 + -1;
            uVar17 = puVar6[-2];
            uVar19 = puVar6[1];
            uVar18 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar9 = uVar9 - 4;
            puVar7[-1] = *puVar10;
            puVar7[-2] = uVar17;
            puVar7[1] = uVar19;
            *puVar7 = uVar18;
            puVar7 = puVar7 + 4;
          } while (uVar9 != 0);
          puVar7 = puVar1 + uVar11;
          puVar6 = puVar1 + uVar11;
          puVar10 = puVar5 + uVar11;
          if (uVar4 == uVar11) goto LAB_00d4dbd0;
        }
        do {
          puVar12 = puVar10 + 1;
          *puVar6 = *puVar10;
          puVar7 = puVar6 + 1;
          puVar6 = puVar6 + 1;
          puVar10 = puVar12;
        } while (puVar12 != puVar3);
      }
LAB_00d4dbd0:
      *(undefined8 **)(this + 8) = puVar7;
      puVar3 = puVar5;
      if ((long)uVar8 < 1) goto LAB_00d4dd04;
    }
    uVar8 = (long)puVar7 - (long)(__src_01 + lVar16);
    uVar4 = uVar8 & 0xfffffffffffffff8;
    puVar5 = (undefined8 *)((long)__src_01 + uVar4);
    puVar6 = puVar7;
    if (puVar5 < puVar1) {
      uVar15 = uVar15 & 0xfffffffffffffff8;
      puVar6 = (undefined8 *)((long)__src_00 + uVar4 + uVar15 + 8);
      puVar10 = puVar1;
      if (puVar1 <= puVar6) {
        puVar10 = puVar6;
      }
      uVar4 = (long)puVar10 + (~(ulong)__src_00 - (uVar15 + uVar4));
      puVar10 = puVar7;
      if (0x17 < uVar4) {
        puVar6 = (undefined8 *)((long)__src_00 + (uVar8 & 0xfffffffffffffff8) + uVar15 + 8);
        puVar10 = puVar1;
        if (puVar1 <= puVar6) {
          puVar10 = puVar6;
        }
        lVar13 = ((long)uVar8 >> 3) + lVar13;
        uVar15 = (long)puVar10 + (~(ulong)__src_00 - (uVar15 + (uVar8 & 0xfffffffffffffff8)));
        if (((undefined8 *)((long)__src_00 + (lVar13 + (uVar15 >> 3)) * 8 + 8) <= puVar7) ||
           (puVar10 = puVar7,
           (undefined8 *)((long)puVar7 + (uVar15 & 0xfffffffffffffff8) + 8) <= puVar5)) {
          uVar15 = (uVar4 >> 3) + 1;
          puVar10 = puVar7 + 2;
          uVar9 = uVar15 & 0x3ffffffffffffffc;
          puVar12 = (undefined8 *)((long)__src_00 + lVar13 * 8 + 0x10);
          puVar5 = puVar5 + uVar9;
          puVar6 = puVar7 + uVar9;
          uVar4 = uVar9;
          do {
            puVar2 = puVar12 + -1;
            uVar17 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar4 = uVar4 - 4;
            puVar10[-1] = *puVar2;
            puVar10[-2] = uVar17;
            puVar10[1] = uVar19;
            *puVar10 = uVar18;
            puVar10 = puVar10 + 4;
          } while (uVar4 != 0);
          puVar10 = puVar6;
          if (uVar15 == uVar9) goto LAB_00d4dcdc;
        }
      }
      do {
        puVar12 = puVar5 + 1;
        puVar6 = puVar10 + 1;
        *puVar10 = *puVar5;
        puVar5 = puVar12;
        puVar10 = puVar6;
      } while (puVar12 < puVar1);
    }
LAB_00d4dcdc:
    *(undefined8 **)(this + 8) = puVar6;
    if (uVar8 != 0) {
      memmove(puVar7 + -((long)uVar8 >> 3),__src_01,uVar8);
    }
    if ((long)puVar3 - (long)__src != 0) {
      memmove(__src_01,__src,(long)puVar3 - (long)__src);
    }
    goto LAB_00d4dd04;
  }
  uVar8 = lVar16 + ((long)puVar1 - (long)__src_00 >> 3);
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar4 = *(long *)(this + 0x10) - (long)__src_00;
  uVar9 = (long)uVar4 >> 2;
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar8 << 3);
  }
  puVar3 = (undefined8 *)((long)__dest + lVar13 * 8);
  uVar4 = lVar14 - 8;
  puVar7 = puVar3 + lVar16;
  puVar5 = puVar3;
  if ((uVar4 < 0x18) ||
     ((puVar3 < (undefined8 *)((long)__src + (uVar4 & 0xfffffffffffffff8) + 8) &&
      (__src < (undefined8 *)((long)__dest + (lVar13 + (uVar4 >> 3)) * 8 + 8))))) {
LAB_00d4dadc:
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = *__src;
      puVar5 = puVar6;
      __src = __src + 1;
    } while (puVar6 != puVar7);
  }
  else {
    uVar4 = (uVar4 >> 3) + 1;
    uVar11 = uVar4 & 0x3ffffffffffffffc;
    puVar5 = __src + 2;
    puVar6 = (undefined8 *)((long)__dest + lVar13 * 8 + 0x10);
    uVar9 = uVar11;
    do {
      puVar10 = puVar5 + -1;
      uVar17 = puVar5[-2];
      uVar19 = puVar5[1];
      uVar18 = *puVar5;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 4;
      puVar6[-1] = *puVar10;
      puVar6[-2] = uVar17;
      puVar6[1] = uVar19;
      *puVar6 = uVar18;
      puVar6 = puVar6 + 4;
    } while (uVar9 != 0);
    puVar5 = puVar3 + uVar11;
    __src = __src + uVar11;
    if (uVar4 != uVar11) goto LAB_00d4dadc;
  }
  if (0 < (long)uVar15) {
    memcpy(__dest,__src_00,uVar15);
  }
  __n = (long)puVar1 - (long)__src_01;
  if (0 < (long)__n) {
    memcpy(puVar7,__src_01,__n);
    puVar7 = (undefined8 *)((long)puVar7 + __n);
    __src_00 = *(void **)this;
  }
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar7;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 8);
  __src_01 = puVar3;
  if (__src_00 != (void *)0x0) {
    operator_delete(__src_00);
  }
LAB_00d4dd04:
  return (type)__src_01;
}


