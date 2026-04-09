// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<Luau::BytecodeBuilder::Function_const&>
// Entry Point: 00efd8d4
// Size: 644 bytes
// Signature: void __thiscall __push_back_slow_path<Luau::BytecodeBuilder::Function_const&>(vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>> * this, Function * param_1)


/* void std::__ndk1::vector<Luau::BytecodeBuilder::Function,
   std::__ndk1::allocator<Luau::BytecodeBuilder::Function>
   >::__push_back_slow_path<Luau::BytecodeBuilder::Function const&>(Luau::BytecodeBuilder::Function
   const&) */

void __thiscall
std::__ndk1::
vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>::
__push_back_slow_path<Luau::BytecodeBuilder::Function_const&>
          (vector<Luau::BytecodeBuilder::Function,std::__ndk1::allocator<Luau::BytecodeBuilder::Function>>
           *this,Function *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  basic_string *pbVar14;
  void *pvVar15;
  undefined8 uVar16;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar12 = lVar10 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  if (0x1745d1745d1745c < (ulong)(lVar10 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar6 = operator_new(uVar1 * 0x58);
  }
  pbVar14 = (basic_string *)((long)pvVar6 + lVar8 * 8);
  pvVar15 = (void *)((long)pvVar6 + uVar1 * 0x58);
                    /* try { // try from 00efd9b4 to 00efd9bf has its CatchHandler @ 00efdbc4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar14);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar6 + lVar8 * 8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)((long)pvVar6 + lVar8 * 8 + 0x20) = uVar3;
                    /* try { // try from 00efd9e0 to 00efd9e7 has its CatchHandler @ 00efdb98 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar6 + lVar8 * 8 + 0x28));
                    /* try { // try from 00efd9f8 to 00efd9fb has its CatchHandler @ 00efdb58 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar6 + lVar8 * 8 + 0x40));
  pvVar6 = *(void **)this;
  pbVar2 = pbVar14 + 0x16;
  pvVar9 = *(void **)(this + 8);
  if (*(void **)(this + 8) == pvVar6) {
    *(basic_string **)this = pbVar14;
    *(basic_string **)(this + 8) = pbVar2;
    *(void **)(this + 0x10) = pvVar15;
  }
  else {
    do {
      uVar16 = *(undefined8 *)((long)pvVar9 + -0x50);
      uVar13 = *(undefined8 *)((long)pvVar9 + -0x58);
      *(undefined8 *)(pbVar14 + -0x12) = *(undefined8 *)((long)pvVar9 + -0x48);
      *(undefined8 *)(pbVar14 + -0x14) = uVar16;
      *(undefined8 *)(pbVar14 + -0x16) = uVar13;
      *(undefined8 *)((long)pvVar9 + -0x50) = 0;
      *(undefined8 *)((long)pvVar9 + -0x48) = 0;
      uVar13 = *(undefined8 *)((long)pvVar9 + -0x40);
      *(undefined8 *)((long)pvVar9 + -0x58) = 0;
      pbVar14[-0xe] = *(basic_string *)((long)pvVar9 + -0x38);
      *(undefined8 *)(pbVar14 + -0x10) = uVar13;
      uVar16 = *(undefined8 *)((long)pvVar9 + -0x28);
      uVar13 = *(undefined8 *)((long)pvVar9 + -0x30);
      *(undefined8 *)(pbVar14 + -8) = *(undefined8 *)((long)pvVar9 + -0x20);
      *(undefined8 *)(pbVar14 + -10) = uVar16;
      *(undefined8 *)(pbVar14 + -0xc) = uVar13;
      *(undefined8 *)((long)pvVar9 + -0x28) = 0;
      *(undefined8 *)((long)pvVar9 + -0x20) = 0;
      uVar16 = *(undefined8 *)((long)pvVar9 + -0x10);
      uVar13 = *(undefined8 *)((long)pvVar9 + -0x18);
      *(undefined8 *)((long)pvVar9 + -0x30) = 0;
      *(undefined8 *)(pbVar14 + -2) = *(undefined8 *)((long)pvVar9 + -8);
      pvVar11 = (void *)((long)pvVar9 + -0x58);
      *(undefined8 *)(pbVar14 + -4) = uVar16;
      *(undefined8 *)(pbVar14 + -6) = uVar13;
      pbVar14 = pbVar14 + -0x16;
      *(undefined8 *)((long)pvVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar9 + -0x10) = 0;
      *(undefined8 *)((long)pvVar9 + -8) = 0;
      pvVar9 = pvVar11;
    } while (pvVar11 != pvVar6);
    pvVar6 = *(void **)this;
    pvVar9 = *(void **)(this + 8);
    *(basic_string **)this = pbVar14;
    *(basic_string **)(this + 8) = pbVar2;
    *(void **)(this + 0x10) = pvVar15;
    for (; pvVar9 != pvVar6; pvVar9 = (void *)((long)pvVar9 + -0x58)) {
      if ((*(byte *)((long)pvVar9 + -0x18) & 1) == 0) {
        if ((*(byte *)((long)pvVar9 + -0x30) & 1) == 0) goto LAB_00efdb00;
LAB_00efdb20:
        operator_delete(*(void **)((long)pvVar9 + -0x20));
        bVar4 = *(byte *)((long)pvVar9 + -0x58);
      }
      else {
        operator_delete(*(void **)((long)pvVar9 + -8));
        if ((*(byte *)((long)pvVar9 + -0x30) & 1) != 0) goto LAB_00efdb20;
LAB_00efdb00:
        bVar4 = *(byte *)((long)pvVar9 + -0x58);
      }
      if ((bVar4 & 1) != 0) {
        operator_delete(*(void **)((long)pvVar9 + -0x48));
      }
    }
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


