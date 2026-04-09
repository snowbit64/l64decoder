// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<Luau::HotComment>
// Entry Point: 00ef7c40
// Size: 408 bytes
// Signature: void __thiscall __push_back_slow_path<Luau::HotComment>(vector<Luau::HotComment,std::__ndk1::allocator<Luau::HotComment>> * this, HotComment * param_1)


/* void std::__ndk1::vector<Luau::HotComment, std::__ndk1::allocator<Luau::HotComment>
   >::__push_back_slow_path<Luau::HotComment>(Luau::HotComment&&) */

void __thiscall
std::__ndk1::vector<Luau::HotComment,std::__ndk1::allocator<Luau::HotComment>>::
__push_back_slow_path<Luau::HotComment>
          (vector<Luau::HotComment,std::__ndk1::allocator<Luau::HotComment>> *this,
          HotComment *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar9 = lVar8 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x30);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar10 = (undefined8 *)((long)pvVar5 + lVar6 * 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar13 = *(undefined8 *)param_1;
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  pvVar3 = *(void **)this;
  pvVar7 = *(void **)(this + 8);
  puVar10[1] = *(undefined8 *)(param_1 + 8);
  *puVar10 = uVar13;
  *(undefined4 *)(puVar10 + 2) = uVar4;
  puVar2 = puVar10 + 6;
  puVar10[5] = uVar11;
  puVar10[4] = uVar15;
  puVar10[3] = uVar14;
  if (pvVar7 == pvVar3) {
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x28);
      uVar11 = *(undefined8 *)((long)pvVar7 + -0x30);
      *(undefined4 *)(puVar10 + -4) = *(undefined4 *)((long)pvVar7 + -0x20);
      puVar10[-5] = uVar13;
      puVar10[-6] = uVar11;
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x10);
      uVar11 = *(undefined8 *)((long)pvVar7 + -0x18);
      puVar10[-1] = *(undefined8 *)((long)pvVar7 + -8);
      pvVar12 = (void *)((long)pvVar7 + -0x30);
      puVar10[-2] = uVar13;
      puVar10[-3] = uVar11;
      puVar10 = puVar10 + -6;
      *(undefined8 *)((long)pvVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + -8) = 0;
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      pvVar7 = pvVar12;
    } while (pvVar12 != pvVar3);
    pvVar3 = *(void **)this;
    pvVar7 = *(void **)(this + 8);
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
    while (pvVar5 = pvVar7, pvVar5 != pvVar3) {
      pvVar7 = (void *)((long)pvVar5 + -0x30);
      if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -8));
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


