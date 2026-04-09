// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<float*>
// Entry Point: 009f808c
// Size: 740 bytes
// Signature: type __thiscall insert<float*>(vector<float,std::__ndk1::allocator<float>> * this, __wrap_iter param_1, float * param_2, float * param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<float*>::value&&is_constructible<float,
   std::__ndk1::iterator_traits<float*>::reference>::value, std::__ndk1::__wrap_iter<float*> >::type
   std::__ndk1::vector<float, std::__ndk1::allocator<float>
   >::insert<float*>(std::__ndk1::__wrap_iter<float const*>, float*, float*) */

type __thiscall
std::__ndk1::vector<float,std::__ndk1::allocator<float>>::insert<float*>
          (vector<float,std::__ndk1::allocator<float>> *this,__wrap_iter param_1,float *param_2,
          float *param_3)

{
  void *__src;
  undefined4 *__dest;
  undefined8 *puVar1;
  void *__dest_00;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float *__src_00;
  void *__dest_01;
  size_t sVar13;
  void *__src_01;
  ulong uVar14;
  void *__dest_02;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *puVar7;
  
  __src_01 = *(void **)this;
  uVar15 = (long)param_3 - (long)param_2;
  uVar14 = (ulong)param_1 - (long)__src_01;
  __src = (void *)((long)__src_01 + (uVar14 & 0xfffffffffffffffc));
  __dest_02 = __src;
  if ((long)uVar15 < 1) goto LAB_009f8338;
  __dest = *(undefined4 **)(this + 8);
  lVar16 = (long)uVar15 >> 2;
  if (*(long *)(this + 0x10) - (long)__dest >> 2 < lVar16) {
    uVar10 = lVar16 + ((long)__dest - (long)__src_01 >> 2);
    if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar2 = *(long *)(this + 0x10) - (long)__src_01;
    uVar5 = (long)uVar2 >> 1;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x7ffffffffffffffb < uVar2) {
      uVar10 = 0x3fffffffffffffff;
    }
    if (uVar10 == 0) {
      __dest_00 = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest_00 = operator_new(uVar10 << 2);
    }
    __dest_02 = (void *)((long)__dest_00 + ((long)uVar14 >> 2) * 4);
    memcpy(__dest_02,param_2,uVar15 & 0xfffffffffffffffc);
    __dest_01 = (void *)((long)__dest_02 + lVar16 * 4);
    if (0 < (long)uVar14) {
      memcpy(__dest_00,__src_01,uVar14);
    }
    sVar13 = (long)__dest - (long)__src;
    if (0 < (long)sVar13) {
      memcpy(__dest_01,__src,sVar13);
      __dest_01 = (void *)((long)__dest_01 + sVar13);
      __src_01 = *(void **)this;
    }
    *(void **)this = __dest_00;
    *(void **)(this + 8) = __dest_01;
    *(void **)(this + 0x10) = (void *)((long)__dest_00 + uVar10 * 4);
    if (__src_01 != (void *)0x0) {
      operator_delete(__src_01);
    }
    goto LAB_009f8338;
  }
  lVar3 = (long)__dest - (long)__src >> 2;
  puVar4 = __dest;
  __src_00 = param_3;
  if (lVar3 < lVar16) {
    __src_00 = param_2 + lVar3;
    sVar13 = (long)param_3 - (long)__src_00;
    if (0 < (long)sVar13) {
      memcpy(__dest,__src_00,sVar13);
      puVar4 = (undefined4 *)((long)__dest + sVar13);
    }
    *(undefined4 **)(this + 8) = puVar4;
    if ((long)__dest - (long)__src < 1) goto LAB_009f8338;
  }
  uVar15 = (long)puVar4 - (long)((long)__src + lVar16 * 4);
  uVar10 = uVar15 & 0xfffffffffffffffc;
  puVar6 = (undefined4 *)((long)__src + uVar10);
  puVar9 = puVar4;
  if (puVar6 < __dest) {
    uVar2 = uVar14 & 0xfffffffffffffffc;
    puVar9 = (undefined4 *)((long)__src_01 + uVar10 + uVar2 + 4);
    puVar8 = __dest;
    if (__dest <= puVar9) {
      puVar8 = puVar9;
    }
    uVar10 = (long)puVar8 + (~(ulong)__src_01 - (uVar2 + uVar10));
    puVar8 = puVar4;
    if (0x1b < uVar10) {
      puVar9 = (undefined4 *)((long)__src_01 + (uVar15 & 0xfffffffffffffffc) + uVar2 + 4);
      puVar8 = __dest;
      if (__dest <= puVar9) {
        puVar8 = puVar9;
      }
      lVar16 = ((long)uVar15 >> 2) + ((long)uVar14 >> 2);
      uVar14 = (long)puVar8 + (~(ulong)__src_01 - (uVar2 + (uVar15 & 0xfffffffffffffffc)));
      if (((undefined4 *)((long)__src_01 + (lVar16 + (uVar14 >> 2)) * 4 + 4) <= puVar4) ||
         (puVar8 = puVar4,
         (undefined4 *)((long)puVar4 + (uVar14 & 0xfffffffffffffffc) + 4) <= puVar6)) {
        uVar14 = (uVar10 >> 2) + 1;
        puVar12 = (undefined8 *)(puVar4 + 4);
        uVar2 = uVar14 & 0x7ffffffffffffff8;
        puVar11 = (undefined8 *)((long)__src_01 + lVar16 * 4 + 0x10);
        puVar6 = puVar6 + uVar2;
        puVar9 = puVar4 + uVar2;
        uVar10 = uVar2;
        do {
          puVar1 = puVar11 + -1;
          uVar17 = puVar11[-2];
          uVar19 = puVar11[1];
          uVar18 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar10 = uVar10 - 8;
          puVar12[-1] = *puVar1;
          puVar12[-2] = uVar17;
          puVar12[1] = uVar19;
          *puVar12 = uVar18;
          puVar12 = puVar12 + 4;
        } while (uVar10 != 0);
        puVar8 = puVar9;
        if (uVar14 == uVar2) goto LAB_009f8310;
      }
    }
    do {
      puVar7 = puVar6 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar6;
      puVar6 = puVar7;
      puVar8 = puVar9;
    } while (puVar7 < __dest);
  }
LAB_009f8310:
  *(undefined4 **)(this + 8) = puVar9;
  if (uVar15 != 0) {
    memmove(puVar4 + -((long)uVar15 >> 2),__src,uVar15);
  }
  if ((long)__src_00 - (long)param_2 != 0) {
    memmove(__src,param_2,(long)__src_00 - (long)param_2);
  }
LAB_009f8338:
  return (type)__dest_02;
}


