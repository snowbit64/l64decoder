// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>>
// Entry Point: 00af5ad4
// Size: 652 bytes
// Signature: type __thiscall insert<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>>(vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>> * this, __wrap_iter param_1, __wrap_iter param_2, __wrap_iter param_3)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>
   >::value&&is_constructible<GiantsAdsProvider::ContentData,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>
   >::reference>::value, std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*> >::type
   std::__ndk1::vector<GiantsAdsProvider::ContentData,
   std::__ndk1::allocator<GiantsAdsProvider::ContentData>
   >::insert<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>
   >(std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData const*>,
   std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>,
   std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>) */

type __thiscall
std::__ndk1::
vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>::
insert<std::__ndk1::__wrap_iter<GiantsAdsProvider::ContentData*>>
          (vector<GiantsAdsProvider::ContentData,std::__ndk1::allocator<GiantsAdsProvider::ContentData>>
           *this,__wrap_iter param_1,__wrap_iter param_2,__wrap_iter param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *__src;
  undefined8 *__src_00;
  size_t sVar6;
  size_t __n;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar7 = (undefined8 *)(ulong)param_3;
  __src_00 = (undefined8 *)(ulong)param_2;
  __src = (undefined8 *)(ulong)param_1;
  puVar14 = __src;
  if (0 < (long)puVar7 - (long)__src_00) {
    puVar2 = *(undefined8 **)(this + 8);
    lVar3 = ((long)puVar7 - (long)__src_00) / 0x28;
    if ((*(long *)(this + 0x10) - (long)puVar2 >> 3) * -0x3333333333333333 < lVar3) {
      lVar15 = *(long *)this;
      uVar11 = lVar3 + ((long)puVar2 - lVar15 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = *(long *)(this + 0x10) - lVar15 >> 3;
      uVar13 = lVar8 * -0x6666666666666666;
      if (uVar11 <= uVar13) {
        uVar11 = uVar13;
      }
      if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
        uVar11 = 0x666666666666666;
      }
      if (uVar11 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (0x666666666666666 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar4 = operator_new(uVar11 * 0x28);
      }
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)__src - lVar15 >> 3) * 8);
      lVar15 = lVar3 * 0x28;
      puVar9 = puVar14 + lVar3 * 5;
      puVar7 = puVar14;
      do {
        uVar18 = *__src_00;
        uVar17 = __src_00[3];
        uVar16 = __src_00[2];
        lVar15 = lVar15 + -0x28;
        uVar12 = __src_00[4];
        puVar7[1] = __src_00[1];
        *puVar7 = uVar18;
        puVar7[3] = uVar17;
        puVar7[2] = uVar16;
        __src_00 = __src_00 + 5;
        puVar7[4] = uVar12;
        puVar7 = puVar7 + 5;
      } while (lVar15 != 0);
      sVar6 = (long)__src - (long)*(void **)this;
      if (0 < (long)sVar6) {
        memcpy((void *)((long)puVar14 - sVar6),*(void **)this,sVar6);
      }
      __n = (long)puVar2 - (long)__src;
      if (0 < (long)__n) {
        memcpy(puVar9,__src,__n);
        puVar9 = puVar9 + (__n / 0x28) * 5;
      }
      pvVar5 = *(void **)this;
      *(void **)this = (void *)((long)puVar14 - sVar6);
      *(undefined8 **)(this + 8) = puVar9;
      *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar11 * 0x28);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      lVar15 = (long)puVar2 - (long)__src >> 3;
      puVar9 = puVar2;
      if (lVar15 * -0x3333333333333333 < lVar3) {
        for (puVar10 = __src_00 + lVar15; puVar10 != puVar7; puVar10 = puVar10 + 5) {
          uVar18 = *puVar10;
          uVar17 = puVar10[3];
          uVar16 = puVar10[2];
          uVar12 = puVar10[4];
          puVar9[1] = puVar10[1];
          *puVar9 = uVar18;
          puVar9[3] = uVar17;
          puVar9[2] = uVar16;
          puVar9[4] = uVar12;
          puVar9 = puVar9 + 5;
        }
        *(undefined8 **)(this + 8) = puVar9;
        puVar7 = __src_00 + lVar15;
        if ((long)puVar2 - (long)__src < 1) goto LAB_00af5d30;
      }
      sVar6 = (long)puVar9 - (long)(__src + lVar3 * 5);
      puVar1 = puVar9;
      for (puVar10 = puVar9 + lVar3 * -5; puVar10 < puVar2; puVar10 = puVar10 + 5) {
        uVar18 = *puVar10;
        uVar17 = puVar10[3];
        uVar16 = puVar10[2];
        uVar12 = puVar10[4];
        puVar1[1] = puVar10[1];
        *puVar1 = uVar18;
        puVar1[3] = uVar17;
        puVar1[2] = uVar16;
        puVar1[4] = uVar12;
        puVar1 = puVar1 + 5;
      }
      *(undefined8 **)(this + 8) = puVar1;
      if (sVar6 != 0) {
        memmove((void *)((long)puVar9 - sVar6),__src,sVar6);
      }
      if ((long)puVar7 - (long)__src_00 != 0) {
        memmove(__src,__src_00,(long)puVar7 - (long)__src_00);
      }
    }
  }
LAB_00af5d30:
  return (type)puVar14;
}


