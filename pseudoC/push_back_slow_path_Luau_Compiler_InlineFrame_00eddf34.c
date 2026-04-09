// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<Luau::Compiler::InlineFrame>
// Entry Point: 00eddf34
// Size: 444 bytes
// Signature: void __thiscall __push_back_slow_path<Luau::Compiler::InlineFrame>(vector<Luau::Compiler::InlineFrame,std::__ndk1::allocator<Luau::Compiler::InlineFrame>> * this, InlineFrame * param_1)


/* void std::__ndk1::vector<Luau::Compiler::InlineFrame,
   std::__ndk1::allocator<Luau::Compiler::InlineFrame>
   >::__push_back_slow_path<Luau::Compiler::InlineFrame>(Luau::Compiler::InlineFrame&&) */

void __thiscall
std::__ndk1::vector<Luau::Compiler::InlineFrame,std::__ndk1::allocator<Luau::Compiler::InlineFrame>>
::__push_back_slow_path<Luau::Compiler::InlineFrame>
          (vector<Luau::Compiler::InlineFrame,std::__ndk1::allocator<Luau::Compiler::InlineFrame>>
           *this,InlineFrame *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = (*(long *)(this + 8) - *(long *)this) / 0x30;
  uVar1 = lVar6 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar8 = operator_new(uVar1 * 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar11 = (undefined8 *)((long)pvVar8 + lVar6 * 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar14 = *(undefined8 *)param_1;
  pvVar2 = (void *)((long)pvVar8 + uVar1 * 0x30);
  uVar5 = *(undefined2 *)(param_1 + 0x10);
  pvVar3 = *(void **)this;
  pvVar4 = *(void **)(this + 8);
  puVar11[1] = *(undefined8 *)(param_1 + 8);
  *puVar11 = uVar14;
  *(undefined2 *)(puVar11 + 2) = uVar5;
  puVar11[5] = uVar13;
  puVar11[4] = uVar16;
  puVar11[3] = uVar15;
  if (pvVar4 == pvVar3) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar11 + 6;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar9 = 0;
    do {
      lVar7 = lVar9 + lVar6 * 0x30;
      lVar12 = lVar9 + -0x30;
      uVar14 = *(undefined8 *)((long)pvVar4 + lVar9 + -0x28);
      uVar13 = *(undefined8 *)((long)pvVar4 + lVar9 + -0x30);
      *(undefined2 *)((long)pvVar8 + lVar7 + -0x20) = *(undefined2 *)((long)pvVar4 + lVar9 + -0x20);
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x28) = uVar14;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x30) = uVar13;
      uVar13 = *(undefined8 *)((long)pvVar4 + lVar9 + -0x10);
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x18) = *(undefined8 *)((long)pvVar4 + lVar9 + -0x18);
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x10) = uVar13;
      *(undefined8 *)((long)pvVar8 + lVar7 + -8) = *(undefined8 *)((long)pvVar4 + lVar9 + -8);
      *(undefined8 *)((long)pvVar4 + lVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar4 + lVar9 + -0x10) = 0;
      *(undefined8 *)((long)pvVar4 + lVar9 + -8) = 0;
      lVar9 = lVar12;
    } while ((void *)((long)pvVar4 + lVar12) != pvVar3);
    *(void **)(this + 0x10) = pvVar2;
    pvVar3 = *(void **)this;
    pvVar2 = *(void **)(this + 8);
    *(long *)this = (long)pvVar8 + lVar12 + lVar6 * 0x30;
    *(undefined8 **)(this + 8) = puVar11 + 6;
    while (pvVar4 = pvVar2, pvVar4 != pvVar3) {
      pvVar8 = *(void **)((long)pvVar4 + -0x18);
      pvVar2 = (void *)((long)pvVar4 + -0x30);
      if (pvVar8 != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x10) = pvVar8;
        operator_delete(pvVar8);
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


