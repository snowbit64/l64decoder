// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 007bf8f8
// Size: 580 bytes
// Signature: undefined __thiscall __append(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>> * this, ulong param_1)


/* std::__ndk1::vector<FieldCropsQuery::CropTypeIndex,
   std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>::
__append(vector<FieldCropsQuery::CropTypeIndex,std::__ndk1::allocator<FieldCropsQuery::CropTypeIndex>>
         *this,ulong param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  size_t __n;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar3 >> 2) * 0xf83e0f83e0f83e1)) {
    puVar5 = puVar3;
    if (param_1 != 0) {
      puVar5 = puVar3 + param_1 * 0x21;
      uVar7 = param_1 * 0x84 - 0x84;
      if (0x83 < uVar7) {
        uVar7 = uVar7 / 0x84 + 1;
        uVar9 = uVar7 & 0x3fffffffffffffe;
        lVar2 = (long)puVar3 + 0x86;
        uVar8 = uVar9;
        do {
          *(undefined4 *)(lVar2 + -0x86) = 0;
          uVar8 = uVar8 - 2;
          *(undefined4 *)(lVar2 + -2) = 0;
          lVar2 = lVar2 + 0x108;
        } while (uVar8 != 0);
        puVar3 = puVar3 + uVar9 * 0x21;
        if (uVar7 == uVar9) goto LAB_007bfa4c;
      }
      do {
        puVar4 = puVar3 + 0x21;
        *puVar3 = 0;
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
    }
LAB_007bfa4c:
    *(undefined4 **)(this + 8) = puVar5;
    return;
  }
  pvVar11 = *(void **)this;
  __n = (long)puVar3 - (long)pvVar11;
  lVar2 = (long)__n / 0x84;
  uVar7 = lVar2 + param_1;
  if (0x1f07c1f07c1f07c < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)pvVar11 >> 2;
  uVar8 = lVar6 * 0x1f07c1f07c1f07c2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0xf83e0f83e0f83d < (ulong)(lVar6 * 0xf83e0f83e0f83e1)) {
    uVar7 = 0x1f07c1f07c1f07c;
  }
  if (uVar7 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x1f07c1f07c1f07c < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar1 = operator_new(uVar7 * 0x84);
  }
  puVar5 = (undefined4 *)((long)pvVar1 + lVar2 * 0x84);
  uVar8 = param_1 * 0x84 - 0x84;
  puVar3 = puVar5;
  if (0x83 < uVar8) {
    uVar8 = uVar8 / 0x84 + 1;
    uVar10 = uVar8 & 0x3fffffffffffffe;
    lVar2 = (long)pvVar1 + lVar2 * 0x84 + 0x86;
    uVar9 = uVar10;
    do {
      *(undefined4 *)(lVar2 + -0x86) = 0;
      uVar9 = uVar9 - 2;
      *(undefined4 *)(lVar2 + -2) = 0;
      lVar2 = lVar2 + 0x108;
    } while (uVar9 != 0);
    puVar3 = puVar5 + uVar10 * 0x21;
    if (uVar8 == uVar10) goto LAB_007bfac8;
  }
  do {
    puVar4 = puVar3 + 0x21;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != puVar5 + param_1 * 0x21);
LAB_007bfac8:
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar5 - __n),pvVar11,__n);
  }
  pvVar11 = *(void **)this;
  *(void **)this = (void *)((long)puVar5 - __n);
  *(undefined4 **)(this + 8) = puVar5 + param_1 * 0x21;
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar7 * 0x84);
  if (pvVar11 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar11);
  return;
}


