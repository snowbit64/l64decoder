// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ShaderStructLayout::Field_const&>
// Entry Point: 00aa9f7c
// Size: 404 bytes
// Signature: void __thiscall __push_back_slow_path<ShaderStructLayout::Field_const&>(vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> * this, Field * param_1)


/* void std::__ndk1::vector<ShaderStructLayout::Field,
   std::__ndk1::allocator<ShaderStructLayout::Field>
   >::__push_back_slow_path<ShaderStructLayout::Field const&>(ShaderStructLayout::Field const&) */

void __thiscall
std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
__push_back_slow_path<ShaderStructLayout::Field_const&>
          (vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *this
          ,Field *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  basic_string *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = (long)uVar6 >> 4;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffffffffffdf < uVar6) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 5);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar11 * 0x20);
                    /* try { // try from 00aaa018 to 00aaa023 has its CatchHandler @ 00aaa110 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
  pbVar10 = *(byte **)this;
  pbVar7 = *(byte **)(this + 8);
  pbVar2 = pbVar12 + 8;
  *(undefined8 *)(pbVar12 + 6) = *(undefined8 *)(param_1 + 0x18);
  pbVar9 = pbVar10;
  if (pbVar7 != pbVar10) {
    do {
      pbVar9 = pbVar7 + -0x20;
      uVar14 = *(undefined8 *)(pbVar7 + -0x18);
      uVar13 = *(undefined8 *)(pbVar7 + -0x20);
      *(undefined8 *)(pbVar12 + -4) = *(undefined8 *)(pbVar7 + -0x10);
      *(undefined8 *)(pbVar12 + -6) = uVar14;
      *(undefined8 *)(pbVar12 + -8) = uVar13;
      *(undefined8 *)(pbVar7 + -0x18) = 0;
      *(undefined8 *)(pbVar7 + -0x10) = 0;
      *(undefined8 *)(pbVar7 + -0x20) = 0;
      *(undefined8 *)(pbVar12 + -2) = *(undefined8 *)(pbVar7 + -8);
      pbVar12 = pbVar12 + -8;
      pbVar7 = pbVar9;
    } while (pbVar9 != pbVar10);
    pbVar10 = *(byte **)(this + 8);
    pbVar9 = *(byte **)this;
  }
  *(basic_string **)this = pbVar12;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
  while (pbVar7 = pbVar10, pbVar7 != pbVar9) {
    pbVar10 = pbVar7 + -0x20;
    if ((*pbVar10 & 1) != 0) {
      operator_delete(*(void **)(pbVar7 + -0x10));
    }
  }
  if (pbVar9 != (byte *)0x0) {
    operator_delete(pbVar9);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


