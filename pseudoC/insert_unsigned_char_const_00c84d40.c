// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<unsigned_char_const*>
// Entry Point: 00c84d40
// Size: 588 bytes
// Signature: type __thiscall insert<unsigned_char_const*>(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> * this, __wrap_iter param_1, uchar * param_2, uchar * param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<unsigned char
   const*>::value&&is_constructible<unsigned char, std::__ndk1::iterator_traits<unsigned char
   const*>::reference>::value, std::__ndk1::__wrap_iter<unsigned char*> >::type
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::insert<unsigned char
   const*>(std::__ndk1::__wrap_iter<unsigned char const*>, unsigned char const*, unsigned char
   const*) */

type __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
insert<unsigned_char_const*>
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,__wrap_iter param_1,
          uchar *param_2,uchar *param_3)

{
  void *__dest;
  undefined *__dest_00;
  undefined8 *puVar1;
  void *__dest_01;
  void *__src;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *__dest_02;
  uchar *__src_00;
  size_t sVar12;
  void *pvVar13;
  long lVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  __src = (void *)(ulong)param_1;
  sVar12 = (long)param_3 - (long)param_2;
  if ((long)sVar12 < 1) goto LAB_00c84f50;
  __dest_00 = *(undefined **)(this + 8);
  if (*(long *)(this + 0x10) - (long)__dest_00 < (long)sVar12) {
    pvVar13 = *(void **)this;
    puVar3 = __dest_00 + (sVar12 - (long)pvVar13);
    if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar2 = *(long *)(this + 0x10) - (long)pvVar13;
    puVar5 = (undefined *)(uVar2 * 2);
    sVar15 = (long)__src - (long)pvVar13;
    if (puVar3 <= puVar5) {
      puVar3 = puVar5;
    }
    if (0x3ffffffffffffffe < uVar2) {
      puVar3 = (undefined *)0x7fffffffffffffff;
    }
    if (puVar3 == (undefined *)0x0) {
      __dest_01 = (void *)0x0;
    }
    else {
      __dest_01 = operator_new((ulong)puVar3);
    }
    __dest = (void *)((long)__dest_01 + sVar15);
    memcpy(__dest,param_2,sVar12);
    __dest_02 = (void *)((long)__dest + sVar12);
    if (0 < (long)sVar15) {
      memcpy(__dest_01,pvVar13,sVar15);
    }
    sVar12 = (long)__dest_00 - (long)__src;
    if (0 < (long)sVar12) {
      memcpy(__dest_02,__src,sVar12);
      __dest_02 = (void *)((long)__dest_02 + sVar12);
    }
    pvVar13 = *(void **)this;
    *(void **)this = __dest_01;
    *(void **)(this + 8) = __dest_02;
    *(undefined **)(this + 0x10) = (undefined *)((long)__dest_01 + (long)puVar3);
    __src = __dest;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
    goto LAB_00c84f50;
  }
  lVar14 = (long)__dest_00 - (long)__src;
  puVar3 = __dest_00;
  __src_00 = param_3;
  if (lVar14 < (long)sVar12) {
    __src_00 = param_2 + lVar14;
    sVar15 = (long)param_3 - (long)__src_00;
    if ((long)sVar15 < 1) {
      *(undefined **)(this + 8) = __dest_00;
    }
    else {
      memcpy(__dest_00,__src_00,sVar15);
      puVar3 = __dest_00 + sVar15;
      *(undefined **)(this + 8) = puVar3;
    }
    if (lVar14 < 1) goto LAB_00c84f50;
  }
  sVar15 = (long)puVar3 - ((long)__src + sVar12);
  puVar5 = puVar3 + -sVar12;
  puVar7 = puVar3;
  if (puVar5 < __dest_00) {
    uVar2 = (long)(__dest_00 + (long)param_3) - (long)(puVar3 + (long)param_2);
    puVar6 = puVar3;
    if ((0x1f < uVar2) && ((__dest_00 <= puVar3 || (puVar3 + uVar2 <= puVar5)))) {
      uVar8 = uVar2 & 0xffffffffffffffe0;
      puVar5 = puVar5 + uVar8;
      puVar7 = puVar3 + uVar8;
      puVar9 = (undefined8 *)(puVar3 + 0x10);
      puVar10 = (undefined8 *)(puVar3 + (long)param_2 + (0x10 - (long)param_3));
      uVar11 = uVar8;
      do {
        puVar1 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar18 = puVar10[1];
        uVar17 = *puVar10;
        uVar11 = uVar11 - 0x20;
        puVar10 = puVar10 + 4;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar18;
        *puVar9 = uVar17;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar6 = puVar7;
      if (uVar2 == uVar8) goto LAB_00c84f28;
    }
    do {
      puVar4 = puVar5 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar5;
      puVar5 = puVar4;
      puVar6 = puVar7;
    } while (puVar4 < __dest_00);
  }
LAB_00c84f28:
  *(undefined **)(this + 8) = puVar7;
  if (sVar15 != 0) {
    memmove(puVar3 + -sVar15,__src,sVar15);
  }
  if ((long)__src_00 - (long)param_2 != 0) {
    memmove(__src,param_2,(long)__src_00 - (long)param_2);
  }
LAB_00c84f50:
  return (type)__src;
}


