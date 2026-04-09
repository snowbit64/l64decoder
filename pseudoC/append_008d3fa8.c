// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008d3fa8
// Size: 500 bytes
// Signature: undefined __thiscall __append(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> * this, ulong param_1, ushort * param_2)


/* std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >::__append(unsigned
   long, unsigned short const&) */

void __thiscall
std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
          (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this,ulong param_1,
          ushort *param_2)

{
  ushort uVar1;
  void *__dest;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  size_t __n;
  long lVar11;
  
  puVar3 = *(ushort **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 1)) {
    puVar5 = puVar3;
    if (param_1 != 0) {
      puVar5 = puVar3 + param_1;
      uVar7 = param_1 - 1 & 0x7fffffffffffffff;
      if ((0xe < uVar7) && ((param_2 + 1 <= puVar3 || (puVar3 + param_1 <= param_2)))) {
        uVar7 = uVar7 + 1;
        uVar1 = *param_2;
        uVar9 = uVar7 & 0xfffffffffffffff0;
        puVar2 = (undefined8 *)(puVar3 + 8);
        uVar6 = uVar9;
        do {
          puVar2[-1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
          puVar2[-2] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
          puVar2[1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
          *puVar2 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
          puVar2 = puVar2 + 4;
          uVar6 = uVar6 - 0x10;
        } while (uVar6 != 0);
        puVar3 = puVar3 + uVar9;
        if (uVar7 == uVar9) goto LAB_008d40a0;
      }
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = *param_2;
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
    }
LAB_008d40a0:
    *(ushort **)(this + 8) = puVar5;
    return;
  }
  pvVar10 = *(void **)this;
  __n = (long)puVar3 - (long)pvVar10;
  lVar11 = (long)__n >> 1;
  uVar7 = lVar11 + param_1;
  if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - (long)pvVar10;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0x7ffffffffffffffd < uVar6) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar7 << 1);
  }
  puVar3 = (ushort *)((long)__dest + lVar11 * 2);
  uVar6 = param_1 - 1 & 0x7fffffffffffffff;
  puVar5 = puVar3;
  if ((0xe < uVar6) &&
     ((param_2 + 1 <= puVar3 || ((ushort *)((long)__dest + (param_1 + lVar11) * 2) <= param_2)))) {
    uVar6 = uVar6 + 1;
    uVar1 = *param_2;
    uVar8 = uVar6 & 0xfffffffffffffff0;
    puVar2 = (undefined8 *)((long)__dest + lVar11 * 2 + 0x10);
    uVar9 = uVar8;
    do {
      puVar2[-1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      puVar2[-2] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      puVar2[1] = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      *puVar2 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
      puVar2 = puVar2 + 4;
      uVar9 = uVar9 - 0x10;
    } while (uVar9 != 0);
    puVar5 = puVar3 + uVar8;
    if (uVar6 == uVar8) goto LAB_008d4124;
  }
  do {
    puVar4 = puVar5 + 1;
    *puVar5 = *param_2;
    puVar5 = puVar4;
  } while (puVar4 != puVar3 + param_1);
LAB_008d4124:
  if (0 < (long)__n) {
    memcpy(__dest,pvVar10,__n);
  }
  pvVar10 = *(void **)this;
  *(void **)this = __dest;
  *(ushort **)(this + 8) = puVar3 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar7 * 2);
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar10);
  return;
}


