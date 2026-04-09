// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ShaderStructLayout_const&>
// Entry Point: 006f51a8
// Size: 448 bytes
// Signature: void __thiscall __push_back_slow_path<ShaderStructLayout_const&>(vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> * this, ShaderStructLayout * param_1)


/* void std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout>
   >::__push_back_slow_path<ShaderStructLayout const&>(ShaderStructLayout const&) */

void __thiscall
std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
__push_back_slow_path<ShaderStructLayout_const&>
          (vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *this,
          ShaderStructLayout *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  basic_string *pbVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_80;
  basic_string *local_78;
  basic_string *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  uVar6 = *local_60 - *(long *)this;
  uVar8 = (long)uVar6 >> 5;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffffffffffbf < uVar6) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 6);
  }
  pbVar9 = (basic_string *)((long)pvVar5 + lVar10 * 0x40);
  pvVar11 = (void *)((long)pvVar5 + uVar1 * 0x40);
  local_80 = pvVar5;
  local_78 = pbVar9;
  local_70 = pbVar9;
  pvStack_68 = pvVar11;
                    /* try { // try from 006f524c to 006f5257 has its CatchHandler @ 006f5384 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar9);
  *(undefined2 *)(pbVar9 + 6) = *(undefined2 *)(param_1 + 0x18);
                    /* try { // try from 006f5268 to 006f526b has its CatchHandler @ 006f5368 */
  vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::vector
            ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
             (pbVar9 + 8),(vector *)(param_1 + 0x20));
  local_70 = *(basic_string **)this;
  pvVar7 = *(void **)(this + 8);
  pbVar2 = pbVar9 + 0x10;
  *(undefined4 *)((long)pvVar5 + lVar10 * 0x40 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  local_80 = local_70;
  if ((basic_string *)pvVar7 != local_70) {
    do {
      pvVar5 = (void *)((long)pvVar7 + -0x40);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x38);
      uVar12 = *(undefined8 *)((long)pvVar7 + -0x40);
      *(undefined8 *)(pbVar9 + -0xc) = *(undefined8 *)((long)pvVar7 + -0x30);
      *(undefined8 *)(pbVar9 + -0xe) = uVar13;
      *(undefined8 *)(pbVar9 + -0x10) = uVar12;
      uVar3 = *(undefined2 *)((long)pvVar7 + -0x28);
      *(undefined8 *)((long)pvVar7 + -0x38) = 0;
      *(undefined8 *)((long)pvVar7 + -0x30) = 0;
      *(undefined8 *)((long)pvVar7 + -0x40) = 0;
      *(undefined8 *)(pbVar9 + -6) = 0;
      *(undefined8 *)(pbVar9 + -4) = 0;
      *(undefined2 *)(pbVar9 + -10) = uVar3;
      *(undefined8 *)(pbVar9 + -8) = 0;
      *(undefined8 *)(pbVar9 + -8) = *(undefined8 *)((long)pvVar7 + -0x20);
      *(undefined8 *)(pbVar9 + -6) = *(undefined8 *)((long)pvVar7 + -0x18);
      *(undefined8 *)(pbVar9 + -4) = *(undefined8 *)((long)pvVar7 + -0x10);
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + -0x20) = 0;
      pbVar9[-2] = *(basic_string *)((long)pvVar7 + -8);
      pbVar9 = local_78 + -0x10;
      pvVar7 = pvVar5;
      local_78 = pbVar9;
    } while ((basic_string *)pvVar5 != local_70);
    local_70 = *(basic_string **)(this + 8);
    local_80 = *(void **)this;
    pvVar11 = pvStack_68;
  }
  *(basic_string **)this = pbVar9;
  *(basic_string **)(this + 8) = pbVar2;
  pvStack_68 = *(void **)(this + 0x10);
  *(void **)(this + 0x10) = pvVar11;
  local_78 = (basic_string *)local_80;
  __split_buffer<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>&>::~__split_buffer
            ((__split_buffer<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>&> *)
             &local_80);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


