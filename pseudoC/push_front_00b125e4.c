// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_front
// Entry Point: 00b125e4
// Size: 448 bytes
// Signature: undefined __thiscall push_front(__split_buffer<float**,std::__ndk1::allocator<float**>&> * this, float * * * param_1)


/* std::__ndk1::__split_buffer<float**, std::__ndk1::allocator<float**>&>::push_front(float**
   const&) */

void __thiscall
std::__ndk1::__split_buffer<float**,std::__ndk1::allocator<float**>&>::push_front
          (__split_buffer<float**,std::__ndk1::allocator<float**>&> *this,float ***param_1)

{
  long lVar1;
  undefined8 *__src;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *__dest;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = *(undefined8 **)(this + 8);
  __dest = __src;
  if (__src != *(undefined8 **)this) goto LAB_00b1276c;
  uVar11 = *(ulong *)(this + 0x10);
  uVar10 = *(ulong *)(this + 0x18);
  if (uVar11 < uVar10) {
    lVar3 = (long)(uVar10 - uVar11) >> 3;
    lVar1 = lVar3 + 2;
    if (-1 < lVar3 + 1) {
      lVar1 = lVar3 + 1;
    }
    __n = uVar11 - (long)__src;
    __dest = (undefined8 *)(uVar11 + (lVar1 >> 1) * 8);
    if (__n != 0) {
      __dest = (undefined8 *)((long)__dest - __n);
      memmove(__dest,__src,__n);
      uVar11 = *(ulong *)(this + 0x10);
    }
    *(undefined8 **)(this + 8) = __dest;
    *(ulong *)(this + 0x10) = uVar11 + (lVar1 >> 1) * 8;
    goto LAB_00b1276c;
  }
  uVar4 = (long)(uVar10 - (long)__src) >> 2;
  if (uVar10 - (long)__src == 0) {
    uVar4 = 1;
  }
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar10 = uVar4 + 3 >> 2;
  pvVar2 = operator_new(uVar4 * 8);
  __dest = (undefined8 *)((long)pvVar2 + uVar10 * 8);
  uVar11 = uVar11 - (long)__src;
  puVar5 = __dest;
  if (uVar11 != 0) {
    uVar9 = uVar11 - 8;
    puVar5 = (undefined8 *)((long)__dest + (uVar11 & 0xfffffffffffffff8));
    puVar6 = __dest;
    puVar8 = __src;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar2 + uVar10 * 8)) ||
         ((undefined8 *)((long)pvVar2 + (uVar9 & 0xfffffffffffffff8) + uVar10 * 8 + 8) <= __src)) {
        uVar11 = (uVar9 >> 3) + 1;
        puVar6 = __src + 2;
        uVar9 = uVar11 & 0x3ffffffffffffffc;
        puVar8 = (undefined8 *)((long)pvVar2 + uVar10 * 8 + 0x10);
        uVar10 = uVar9;
        do {
          puVar7 = puVar6 + -1;
          uVar12 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar10 = uVar10 - 4;
          puVar8[-1] = *puVar7;
          puVar8[-2] = uVar12;
          puVar8[1] = uVar14;
          *puVar8 = uVar13;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        puVar6 = __dest + uVar9;
        puVar8 = __src + uVar9;
        if (uVar11 == uVar9) goto LAB_00b12754;
      }
    }
    do {
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar8;
      puVar6 = puVar7;
      puVar8 = puVar8 + 1;
    } while (puVar7 != puVar5);
  }
LAB_00b12754:
  *(void **)this = pvVar2;
  *(undefined8 **)(this + 8) = __dest;
  *(undefined8 **)(this + 0x10) = puVar5;
  *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar4 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = *(undefined8 **)(this + 8);
  }
LAB_00b1276c:
  __dest[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}


