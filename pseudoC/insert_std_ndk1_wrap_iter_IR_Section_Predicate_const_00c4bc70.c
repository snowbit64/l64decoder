// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<IR_Section::Predicate_const*>>
// Entry Point: 00c4bc70
// Size: 1004 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<IR_Section::Predicate_const*>>(vector<IR_Section::Predicate,std::__ndk1::allocator<IR_Section::Predicate>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<IR_Section::Predicate
   const*> >::value&&is_constructible<IR_Section::Predicate,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<IR_Section::Predicate const*>
   >::reference>::value, std::__ndk1::__wrap_iter<IR_Section::Predicate*> >::type
   std::__ndk1::vector<IR_Section::Predicate, std::__ndk1::allocator<IR_Section::Predicate>
   >::insert<std::__ndk1::__wrap_iter<IR_Section::Predicate const*>
   >(std::__ndk1::__wrap_iter<IR_Section::Predicate const*>,
   std::__ndk1::__wrap_iter<IR_Section::Predicate const*>,
   std::__ndk1::__wrap_iter<IR_Section::Predicate const*>) */

type __thiscall
std::__ndk1::vector<IR_Section::Predicate,std::__ndk1::allocator<IR_Section::Predicate>>::
insert<std::__ndk1::__wrap_iter<IR_Section::Predicate_const*>>
          (vector<IR_Section::Predicate,std::__ndk1::allocator<IR_Section::Predicate>> *this,
          __wrap_iter param_1,__wrap_iter param_2,__wrap_iter param_3)

{
  undefined8 *__src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *__src_00;
  size_t __n;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  size_t __n_00;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar6 = (undefined8 *)(ulong)param_3;
  __src_00 = (undefined8 *)(ulong)param_2;
  uVar7 = *(ulong *)this;
  lVar19 = (long)puVar6 - (long)__src_00;
  uVar12 = param_1 - uVar7;
  __src = (undefined8 *)(uVar7 + (uVar12 & 0xfffffffffffffff8));
  puVar18 = __src;
  if (lVar19 < 1) goto LAB_00c4c028;
  puVar1 = *(undefined8 **)(this + 8);
  lVar3 = (long)uVar12 >> 3;
  lVar20 = lVar19 >> 3;
  if (lVar20 <= *(long *)(this + 0x10) - (long)puVar1 >> 3) {
    uVar10 = (long)puVar1 - (long)__src;
    lVar19 = (long)uVar10 >> 3;
    puVar8 = puVar1;
    if (lVar19 < lVar20) {
      puVar15 = __src_00 + lVar19;
      if (puVar15 != puVar6) {
        uVar13 = (long)puVar6 + (-8 - ((uVar10 & 0xfffffffffffffff8) + (long)__src_00));
        puVar11 = puVar1;
        puVar14 = puVar15;
        if ((0x17 < uVar13) &&
           ((__src_00 + lVar19 + (uVar13 >> 3) + 1 <= puVar1 ||
            ((undefined8 *)((long)puVar1 + (uVar13 & 0xfffffffffffffff8) + 8) <= puVar15)))) {
          uVar13 = (uVar13 >> 3) + 1;
          uVar16 = uVar13 & 0x3ffffffffffffffc;
          puVar8 = __src_00 + lVar19 + 2;
          puVar11 = puVar1 + 2;
          uVar17 = uVar16;
          do {
            puVar14 = puVar8 + -1;
            uVar21 = puVar8[-2];
            uVar23 = puVar8[1];
            uVar22 = *puVar8;
            puVar8 = puVar8 + 4;
            uVar17 = uVar17 - 4;
            puVar11[-1] = *puVar14;
            puVar11[-2] = uVar21;
            puVar11[1] = uVar23;
            *puVar11 = uVar22;
            puVar11 = puVar11 + 4;
          } while (uVar17 != 0);
          puVar8 = puVar1 + uVar16;
          puVar11 = puVar1 + uVar16;
          puVar14 = puVar15 + uVar16;
          if (uVar13 == uVar16) goto LAB_00c4bef4;
        }
        do {
          puVar9 = puVar14 + 1;
          *puVar11 = *puVar14;
          puVar8 = puVar11 + 1;
          puVar11 = puVar11 + 1;
          puVar14 = puVar9;
        } while (puVar9 != puVar6);
      }
LAB_00c4bef4:
      *(undefined8 **)(this + 8) = puVar8;
      puVar6 = puVar15;
      if ((long)uVar10 < 1) goto LAB_00c4c028;
    }
    uVar10 = (long)puVar8 - (long)(__src + lVar20);
    uVar13 = uVar10 & 0xfffffffffffffff8;
    puVar15 = (undefined8 *)((long)__src + uVar13);
    puVar11 = puVar8;
    if (puVar15 < puVar1) {
      uVar12 = uVar12 & 0xfffffffffffffff8;
      puVar11 = (undefined8 *)(uVar12 + uVar7 + uVar13 + 8);
      puVar14 = puVar1;
      if (puVar1 <= puVar11) {
        puVar14 = puVar11;
      }
      uVar13 = (long)puVar14 + (~uVar7 - (uVar12 + uVar13));
      puVar14 = puVar8;
      if (0x17 < uVar13) {
        puVar11 = (undefined8 *)(uVar12 + uVar7 + (uVar10 & 0xfffffffffffffff8) + 8);
        puVar14 = puVar1;
        if (puVar1 <= puVar11) {
          puVar14 = puVar11;
        }
        uVar12 = (long)puVar14 + (~uVar7 - (uVar12 + (uVar10 & 0xfffffffffffffff8)));
        lVar3 = ((long)uVar10 >> 3) + lVar3;
        if (((undefined8 *)(uVar7 + (lVar3 + (uVar12 >> 3)) * 8 + 8) <= puVar8) ||
           (puVar14 = puVar8,
           (undefined8 *)((long)puVar8 + (uVar12 & 0xfffffffffffffff8) + 8) <= puVar15)) {
          uVar12 = (uVar13 >> 3) + 1;
          puVar14 = puVar8 + 2;
          uVar13 = uVar12 & 0x3ffffffffffffffc;
          puVar9 = (undefined8 *)(uVar7 + lVar3 * 8 + 0x10);
          puVar15 = puVar15 + uVar13;
          puVar11 = puVar8 + uVar13;
          uVar7 = uVar13;
          do {
            puVar2 = puVar9 + -1;
            uVar21 = puVar9[-2];
            uVar23 = puVar9[1];
            uVar22 = *puVar9;
            puVar9 = puVar9 + 4;
            uVar7 = uVar7 - 4;
            puVar14[-1] = *puVar2;
            puVar14[-2] = uVar21;
            puVar14[1] = uVar23;
            *puVar14 = uVar22;
            puVar14 = puVar14 + 4;
          } while (uVar7 != 0);
          puVar14 = puVar11;
          if (uVar12 == uVar13) goto LAB_00c4c000;
        }
      }
      do {
        puVar9 = puVar15 + 1;
        puVar11 = puVar14 + 1;
        *puVar14 = *puVar15;
        puVar15 = puVar9;
        puVar14 = puVar11;
      } while (puVar9 < puVar1);
    }
LAB_00c4c000:
    *(undefined8 **)(this + 8) = puVar11;
    if (uVar10 != 0) {
      memmove(puVar8 + -((long)uVar10 >> 3),__src,uVar10);
    }
    if ((long)puVar6 - (long)__src_00 != 0) {
      memmove(__src,__src_00,(long)puVar6 - (long)__src_00);
    }
    goto LAB_00c4c028;
  }
  uVar12 = lVar20 + ((long)((long)puVar1 - uVar7) >> 3);
  if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - uVar7;
  uVar10 = (long)uVar7 >> 2;
  if (uVar12 <= uVar10) {
    uVar12 = uVar10;
  }
  if (0x7ffffffffffffff7 < uVar7) {
    uVar12 = 0x1fffffffffffffff;
  }
  if (uVar12 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar12 << 3);
  }
  puVar18 = (undefined8 *)((long)pvVar4 + lVar3 * 8);
  uVar7 = lVar19 - 8;
  puVar6 = puVar18 + lVar20;
  puVar8 = puVar18;
  if ((uVar7 < 0x18) ||
     ((puVar18 < (undefined8 *)((long)__src_00 + (uVar7 & 0xfffffffffffffff8) + 8) &&
      (__src_00 < (undefined8 *)((long)pvVar4 + (lVar3 + (uVar7 >> 3)) * 8 + 8))))) {
LAB_00c4bdfc:
    do {
      puVar15 = puVar8 + 1;
      *puVar8 = *__src_00;
      puVar8 = puVar15;
      __src_00 = __src_00 + 1;
    } while (puVar15 != puVar6);
  }
  else {
    uVar7 = (uVar7 >> 3) + 1;
    uVar13 = uVar7 & 0x3ffffffffffffffc;
    puVar8 = __src_00 + 2;
    puVar15 = (undefined8 *)((long)pvVar4 + lVar3 * 8 + 0x10);
    uVar10 = uVar13;
    do {
      puVar11 = puVar8 + -1;
      uVar21 = puVar8[-2];
      uVar23 = puVar8[1];
      uVar22 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar10 = uVar10 - 4;
      puVar15[-1] = *puVar11;
      puVar15[-2] = uVar21;
      puVar15[1] = uVar23;
      *puVar15 = uVar22;
      puVar15 = puVar15 + 4;
    } while (uVar10 != 0);
    puVar8 = puVar18 + uVar13;
    __src_00 = __src_00 + uVar13;
    if (uVar7 != uVar13) goto LAB_00c4bdfc;
  }
  __n = (long)__src - (long)*(void **)this;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar18 - __n),*(void **)this,__n);
  }
  __n_00 = (long)puVar1 - (long)__src;
  if (0 < (long)__n_00) {
    memcpy(puVar6,__src,__n_00);
    puVar6 = (undefined8 *)((long)puVar6 + __n_00);
  }
  pvVar5 = *(void **)this;
  *(void **)this = (void *)((long)puVar18 - __n);
  *(undefined8 **)(this + 8) = puVar6;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar12 * 8);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
LAB_00c4c028:
  return (type)puVar18;
}


