// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>
// Entry Point: 007253f4
// Size: 684 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>(vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<OrientedBox const*>
   >::value&&is_constructible<OrientedBox,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<OrientedBox const*> >::reference>::value,
   std::__ndk1::__wrap_iter<OrientedBox*> >::type std::__ndk1::vector<OrientedBox,
   std::__ndk1::allocator<OrientedBox> >::insert<std::__ndk1::__wrap_iter<OrientedBox const*>
   >(std::__ndk1::__wrap_iter<OrientedBox const*>, std::__ndk1::__wrap_iter<OrientedBox const*>,
   std::__ndk1::__wrap_iter<OrientedBox const*>) */

type __thiscall
std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::
insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>
          (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *this,__wrap_iter param_1,
          __wrap_iter param_2,__wrap_iter param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *__src;
  undefined8 *__src_00;
  size_t sVar4;
  size_t __n;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *__dest;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar5 = (undefined8 *)(ulong)param_3;
  __src_00 = (undefined8 *)(ulong)param_2;
  __src = (undefined8 *)(ulong)param_1;
  puVar13 = __src;
  if (0 < (long)puVar5 - (long)__src_00) {
    puVar1 = *(undefined8 **)(this + 8);
    lVar8 = ((long)puVar5 - (long)__src_00) / 0x1c;
    if ((*(long *)(this + 0x10) - (long)puVar1 >> 2) * 0x6db6db6db6db6db7 < lVar8) {
      lVar14 = *(long *)this;
      uVar9 = lVar8 + ((long)puVar1 - lVar14 >> 2) * 0x6db6db6db6db6db7;
      if (0x924924924924924 < uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = *(long *)(this + 0x10) - lVar14 >> 2;
      uVar11 = lVar6 * -0x2492492492492492;
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (0x492492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
        uVar9 = 0x924924924924924;
      }
      if (uVar9 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (0x924924924924924 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar2 = operator_new(uVar9 * 0x1c);
      }
      puVar13 = (undefined8 *)((long)pvVar2 + ((long)__src - lVar14 >> 2) * 4);
      lVar8 = lVar8 * 0x1c;
      __dest = (void *)((long)puVar13 + lVar8);
      puVar5 = puVar13;
      do {
        uVar15 = *(undefined8 *)((long)__src_00 + 0xc);
        lVar8 = lVar8 + -0x1c;
        uVar17 = __src_00[1];
        uVar16 = *__src_00;
        *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)((long)__src_00 + 0x14);
        *(undefined8 *)((long)puVar5 + 0xc) = uVar15;
        puVar5[1] = uVar17;
        *puVar5 = uVar16;
        puVar5 = (undefined8 *)((long)puVar5 + 0x1c);
        __src_00 = (undefined8 *)((long)__src_00 + 0x1c);
      } while (lVar8 != 0);
      sVar4 = (long)__src - (long)*(void **)this;
      if (0 < (long)sVar4) {
        memcpy((void *)((long)puVar13 - sVar4),*(void **)this,sVar4);
      }
      __n = (long)puVar1 - (long)__src;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
        __dest = (void *)((long)__dest + (__n / 0x1c) * 0x1c);
      }
      pvVar3 = *(void **)this;
      *(void **)this = (void *)((long)puVar13 - sVar4);
      *(void **)(this + 8) = __dest;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x1c);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      lVar14 = (long)puVar1 - (long)__src >> 2;
      puVar7 = puVar1;
      if (lVar14 * 0x6db6db6db6db6db7 < lVar8) {
        puVar12 = (undefined8 *)((long)__src_00 + lVar14 * 4);
        for (puVar10 = puVar12; puVar10 != puVar5; puVar10 = (undefined8 *)((long)puVar10 + 0x1c)) {
          uVar15 = *(undefined8 *)((long)puVar10 + 0xc);
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          *(undefined8 *)((long)puVar7 + 0x14) = *(undefined8 *)((long)puVar10 + 0x14);
          *(undefined8 *)((long)puVar7 + 0xc) = uVar15;
          puVar7[1] = uVar17;
          *puVar7 = uVar16;
          puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
        }
        *(undefined8 **)(this + 8) = puVar7;
        puVar5 = puVar12;
        if ((long)puVar1 - (long)__src < 1) goto LAB_00725670;
      }
      sVar4 = (long)puVar7 - (long)((long)__src + lVar8 * 0x1c);
      puVar12 = puVar7;
      for (puVar10 = (undefined8 *)((long)puVar7 + lVar8 * -0x1c); puVar10 < puVar1;
          puVar10 = (undefined8 *)((long)puVar10 + 0x1c)) {
        uVar15 = *(undefined8 *)((long)puVar10 + 0xc);
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        *(undefined8 *)((long)puVar12 + 0x14) = *(undefined8 *)((long)puVar10 + 0x14);
        *(undefined8 *)((long)puVar12 + 0xc) = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = (undefined8 *)((long)puVar12 + 0x1c);
      }
      *(undefined8 **)(this + 8) = puVar12;
      if (sVar4 != 0) {
        memmove((void *)((long)puVar7 - sVar4),__src,sVar4);
      }
      if ((long)puVar5 - (long)__src_00 != 0) {
        memmove(__src,__src_00,(long)puVar5 - (long)__src_00);
      }
    }
  }
LAB_00725670:
  return (type)puVar13;
}


