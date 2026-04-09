// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00bff7a0
// Size: 776 bytes
// Signature: undefined __thiscall insert(vector<MarkovHuffmanTree::HEntry,std::__ndk1::allocator<MarkovHuffmanTree::HEntry>> * this, __wrap_iter param_1, HEntry * param_2)


/* std::__ndk1::vector<MarkovHuffmanTree::HEntry, std::__ndk1::allocator<MarkovHuffmanTree::HEntry>
   >::insert(std::__ndk1::__wrap_iter<MarkovHuffmanTree::HEntry const*>, MarkovHuffmanTree::HEntry
   const&) */

undefined8 * __thiscall
std::__ndk1::vector<MarkovHuffmanTree::HEntry,std::__ndk1::allocator<MarkovHuffmanTree::HEntry>>::
insert(vector<MarkovHuffmanTree::HEntry,std::__ndk1::allocator<MarkovHuffmanTree::HEntry>> *this,
      __wrap_iter param_1,HEntry *param_2)

{
  undefined8 *__src;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  HEntry *__n;
  size_t __n_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  HEntry *pHVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  HEntry *pHVar13;
  size_t __n_01;
  undefined8 *puVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar8;
  
  pvVar4 = *(void **)this;
  puVar14 = *(undefined8 **)(this + 8);
  uVar17 = (ulong)param_1 - (long)pvVar4;
  uVar16 = (long)uVar17 >> 3;
  __src = (undefined8 *)((long)pvVar4 + (uVar17 & 0xfffffffffffffff8));
  if (*(undefined8 **)(this + 0x10) <= puVar14) {
    uVar12 = ((long)puVar14 - (long)pvVar4 >> 3) + 1;
    if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar4;
    uVar6 = (long)uVar5 >> 2;
    if (uVar12 <= uVar6) {
      uVar12 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar12 << 3);
    }
    puVar14 = (undefined8 *)((long)pvVar2 + uVar16 * 8);
    pvVar15 = (void *)((long)pvVar2 + uVar12 * 8);
    if (uVar16 == uVar12) {
      if ((long)uVar17 < 1) {
        uVar16 = (long)uVar17 >> 2;
        if (uVar17 == 0) {
          uVar16 = 1;
        }
        if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00bffa9c to 00bffaa7 has its CatchHandler @ 00bffaa8 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00bff900 to 00bff903 has its CatchHandler @ 00bffaa8 */
        pvVar3 = operator_new(uVar16 << 3);
        pvVar15 = (void *)((long)pvVar3 + uVar16 * 8);
        puVar14 = (undefined8 *)((long)pvVar3 + (uVar16 & 0x7ffffffffffffffc) * 2);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
          pvVar4 = *(void **)this;
        }
      }
      else {
        uVar17 = uVar16 + 2;
        if (-1 < (long)(uVar16 + 1)) {
          uVar17 = uVar16 + 1;
        }
        puVar14 = (undefined8 *)((long)puVar14 + (uVar17 & 0x3ffffffffffffffe) * -4);
      }
    }
    __n_00 = (long)__src - (long)pvVar4;
    puVar7 = puVar14 + 1;
    *puVar14 = *(undefined8 *)param_2;
    if (0 < (long)__n_00) {
      memcpy((void *)((long)puVar14 - __n_00),pvVar4,__n_00);
    }
    __n_01 = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n_01) {
      memcpy(puVar7,__src,__n_01);
      puVar7 = (undefined8 *)((long)puVar7 + __n_01);
    }
    pvVar4 = *(void **)this;
    *(void **)this = (void *)((long)puVar14 - __n_00);
    *(undefined8 **)(this + 8) = puVar7;
    *(void **)(this + 0x10) = pvVar15;
    if (pvVar4 == (void *)0x0) {
      return puVar14;
    }
    operator_delete(pvVar4);
    return puVar14;
  }
  if (__src == puVar14) {
    *__src = *(undefined8 *)param_2;
    *(undefined8 **)(this + 8) = __src + 1;
    return __src;
  }
  __n = (HEntry *)((long)puVar14 + (-8 - (long)__src));
  uVar12 = (ulong)__n & 0xfffffffffffffff8;
  puVar7 = (undefined8 *)((long)__src + uVar12);
  puVar11 = puVar14;
  if (puVar7 < puVar14) {
    uVar17 = uVar17 & 0xfffffffffffffff8;
    puVar11 = (undefined8 *)((long)pvVar4 + uVar12 + uVar17 + 8);
    puVar10 = puVar14;
    if (puVar14 <= puVar11) {
      puVar10 = puVar11;
    }
    pHVar13 = (HEntry *)((long)puVar10 + (~(ulong)pvVar4 - (uVar17 + uVar12)));
    puVar10 = puVar14;
    if ((HEntry *)0x17 < pHVar13) {
      puVar11 = (undefined8 *)((long)pvVar4 + ((ulong)__n & 0xfffffffffffffff8) + uVar17 + 8);
      puVar8 = puVar14;
      if (puVar14 <= puVar11) {
        puVar8 = puVar11;
      }
      lVar1 = ((long)__n >> 3) + uVar16;
      pHVar9 = (HEntry *)
               ((long)puVar8 + (~(ulong)pvVar4 - (uVar17 + ((ulong)__n & 0xfffffffffffffff8))));
      if (((undefined8 *)((long)pvVar4 + (lVar1 + ((ulong)pHVar9 >> 3)) * 8 + 8) <= puVar14) ||
         ((undefined8 *)((long)puVar14 + ((ulong)pHVar9 & 0xfffffffffffffff8) + 8) <= puVar7)) {
        uVar17 = ((ulong)pHVar13 >> 3) + 1;
        puVar11 = puVar14 + 2;
        uVar12 = uVar17 & 0x3ffffffffffffffc;
        puVar10 = (undefined8 *)((long)pvVar4 + lVar1 * 8 + 0x10);
        puVar7 = puVar7 + uVar12;
        uVar16 = uVar12;
        do {
          puVar8 = puVar10 + -1;
          uVar18 = puVar10[-2];
          uVar20 = puVar10[1];
          uVar19 = *puVar10;
          puVar10 = puVar10 + 4;
          uVar16 = uVar16 - 4;
          puVar11[-1] = *puVar8;
          puVar11[-2] = uVar18;
          puVar11[1] = uVar20;
          *puVar11 = uVar19;
          puVar11 = puVar11 + 4;
        } while (uVar16 != 0);
        puVar11 = puVar14 + uVar12;
        puVar10 = puVar14 + uVar12;
        if (uVar17 == uVar12) goto LAB_00bffa34;
      }
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar10 = *puVar7;
      puVar7 = puVar8;
      puVar11 = puVar10 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar8 < puVar14);
  }
LAB_00bffa34:
  *(undefined8 **)(this + 8) = puVar11;
  if (__n != (HEntry *)0x0) {
    memmove(puVar14 + -((long)__n >> 3),__src,(size_t)__n);
    puVar11 = *(undefined8 **)(this + 8);
  }
  *__src = *(undefined8 *)(param_2 + (ulong)(__src <= param_2 && param_2 < puVar11) * 8);
  return __src;
}


