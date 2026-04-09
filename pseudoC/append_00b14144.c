// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b14144
// Size: 512 bytes
// Signature: undefined __thiscall __append(vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1, uint * param_2)


/* std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >::__append(unsigned long,
   unsigned int const&) */

void __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1,
          uint *param_2)

{
  uint uVar1;
  void *__dest;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  size_t __n;
  long lVar11;
  
  puVar3 = *(uint **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 2)) {
    puVar5 = puVar3;
    if (param_1 != 0) {
      puVar5 = puVar3 + param_1;
      uVar8 = param_1 - 1 & 0x3fffffffffffffff;
      if ((6 < uVar8) && ((param_2 + 1 <= puVar3 || (puVar3 + param_1 <= param_2)))) {
        uVar8 = uVar8 + 1;
        uVar1 = *param_2;
        uVar7 = uVar8 & 0x7ffffffffffffff8;
        puVar2 = (undefined8 *)(puVar3 + 4);
        uVar6 = uVar7;
        do {
          puVar2[-1] = CONCAT44(uVar1,uVar1);
          puVar2[-2] = CONCAT44(uVar1,uVar1);
          puVar2[1] = CONCAT44(uVar1,uVar1);
          *puVar2 = CONCAT44(uVar1,uVar1);
          puVar2 = puVar2 + 4;
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
        puVar3 = puVar3 + uVar7;
        if (uVar8 == uVar7) goto LAB_00b14248;
      }
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = *param_2;
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
    }
LAB_00b14248:
    *(uint **)(this + 8) = puVar5;
    return;
  }
  pvVar10 = *(void **)this;
  __n = (long)puVar3 - (long)pvVar10;
  lVar11 = (long)__n >> 2;
  uVar8 = lVar11 + param_1;
  if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - (long)pvVar10;
  uVar7 = (long)uVar6 >> 1;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar8 << 2);
  }
  puVar3 = (uint *)((long)__dest + lVar11 * 4);
  uVar6 = param_1 - 1 & 0x3fffffffffffffff;
  puVar5 = puVar3;
  if ((6 < uVar6) &&
     ((param_2 + 1 <= puVar3 || ((uint *)((long)__dest + (param_1 + lVar11) * 4) <= param_2)))) {
    uVar6 = uVar6 + 1;
    uVar1 = *param_2;
    uVar9 = uVar6 & 0x7ffffffffffffff8;
    puVar2 = (undefined8 *)((long)__dest + lVar11 * 4 + 0x10);
    uVar7 = uVar9;
    do {
      puVar2[-1] = CONCAT44(uVar1,uVar1);
      puVar2[-2] = CONCAT44(uVar1,uVar1);
      puVar2[1] = CONCAT44(uVar1,uVar1);
      *puVar2 = CONCAT44(uVar1,uVar1);
      puVar2 = puVar2 + 4;
      uVar7 = uVar7 - 8;
    } while (uVar7 != 0);
    puVar5 = puVar3 + uVar9;
    if (uVar6 == uVar9) goto LAB_00b142cc;
  }
  do {
    puVar4 = puVar5 + 1;
    *puVar5 = *param_2;
    puVar5 = puVar4;
  } while (puVar4 != puVar3 + param_1);
LAB_00b142cc:
  if (0 < (long)__n) {
    memcpy(__dest,pvVar10,__n);
  }
  pvVar10 = *(void **)this;
  *(void **)this = __dest;
  *(uint **)(this + 8) = puVar3 + param_1;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 4);
  if (pvVar10 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar10);
  return;
}


