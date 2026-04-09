// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<Preprocessor::Comment>
// Entry Point: 00bf3330
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<Preprocessor::Comment>(vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> * this, Comment * param_1)


/* void std::__ndk1::vector<Preprocessor::Comment, std::__ndk1::allocator<Preprocessor::Comment>
   >::__push_back_slow_path<Preprocessor::Comment>(Preprocessor::Comment&&) */

void __thiscall
std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
__push_back_slow_path<Preprocessor::Comment>
          (vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *this,
          Comment *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = (long)uVar5 >> 5;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7fffffffffffffbf < uVar5) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 6);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = (undefined8 *)((long)pvVar4 + lVar13 * 0x40);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar17 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  pvVar3 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x40);
  puVar2[4] = uVar15;
  puVar2[3] = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  puVar2[2] = uVar6;
  puVar2[1] = uVar17;
  *puVar2 = uVar16;
  puVar2[5] = uVar11;
  puVar2[7] = uVar15;
  puVar2[6] = uVar14;
  puVar8 = puVar2;
  if (pvVar10 == pvVar3) {
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x38);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x40);
      pvVar12 = (void *)((long)pvVar10 + -0x40);
      puVar8[-6] = *(undefined8 *)((long)pvVar10 + -0x30);
      puVar8[-7] = uVar11;
      puVar8[-8] = uVar6;
      *(undefined8 *)((long)pvVar10 + -0x38) = 0;
      *(undefined8 *)((long)pvVar10 + -0x30) = 0;
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x20);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x28);
      *(undefined8 *)((long)pvVar10 + -0x40) = 0;
      puVar8[-3] = *(undefined8 *)((long)pvVar10 + -0x18);
      puVar9 = puVar8 + -8;
      puVar8[-4] = uVar11;
      puVar8[-5] = uVar6;
      *(undefined8 *)((long)pvVar10 + -0x20) = 0;
      *(undefined8 *)((long)pvVar10 + -0x18) = 0;
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x10);
      *(undefined8 *)((long)pvVar10 + -0x28) = 0;
      puVar8[-1] = *(undefined8 *)((long)pvVar10 + -8);
      puVar8[-2] = uVar6;
      puVar8 = puVar9;
      pvVar10 = pvVar12;
    } while (pvVar12 != pvVar3);
    pvVar3 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar4;
    while (pvVar4 = pvVar10, pvVar4 != pvVar3) {
      if ((*(byte *)((long)pvVar4 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x18));
      }
      pvVar10 = (void *)((long)pvVar4 + -0x40);
      if ((*(byte *)((long)pvVar4 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x30));
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


