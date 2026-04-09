// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00b030f8
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>> * this, Streamable * * * param_1)


/* std::__ndk1::__split_buffer<Streamable**, std::__ndk1::allocator<Streamable**>
   >::push_back(Streamable**&&) */

void __thiscall
std::__ndk1::__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>>::push_back
          (__split_buffer<Streamable**,std::__ndk1::allocator<Streamable**>> *this,
          Streamable ***param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *__src;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar12 = *(undefined8 **)(this + 0x10);
  if (puVar12 != *(undefined8 **)(this + 0x18)) goto LAB_00b03278;
  puVar3 = *(undefined8 **)this;
  __src = *(undefined8 **)(this + 8);
  if (puVar3 <= __src && (long)__src - (long)puVar3 != 0) {
    lVar6 = (long)__src - (long)puVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)puVar12 - (long)__src;
    puVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(puVar12,__src,__n);
      __src = *(undefined8 **)(this + 8);
    }
    puVar12 = (undefined8 *)((long)puVar12 + __n);
    *(undefined8 **)(this + 8) = __src + -(lVar1 >> 1);
    *(undefined8 **)(this + 0x10) = puVar12;
    goto LAB_00b03278;
  }
  uVar7 = (long)puVar12 - (long)puVar3 >> 2;
  if ((long)puVar12 - (long)puVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar2 = (undefined8 *)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)puVar12 - (long)__src;
  puVar12 = puVar2;
  if (uVar9 != 0) {
    puVar12 = (undefined8 *)((long)puVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    puVar8 = puVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((undefined8 *)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)) {
        uVar9 = (uVar9 >> 3) + 1;
        puVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        puVar11 = (undefined8 *)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          puVar4 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar16 = puVar8[1];
          uVar15 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar13 = uVar13 - 4;
          puVar11[-1] = *puVar4;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        puVar8 = puVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00b03260;
      }
    }
    do {
      puVar11 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar11;
      __src = __src + 1;
    } while (puVar11 != puVar12);
  }
LAB_00b03260:
  *(void **)this = pvVar5;
  *(undefined8 **)(this + 8) = puVar2;
  *(undefined8 **)(this + 0x10) = puVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
    puVar12 = *(undefined8 **)(this + 0x10);
  }
LAB_00b03278:
  *puVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


