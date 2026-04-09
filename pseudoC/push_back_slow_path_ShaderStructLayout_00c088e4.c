// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ShaderStructLayout>
// Entry Point: 00c088e4
// Size: 444 bytes
// Signature: void __thiscall __push_back_slow_path<ShaderStructLayout>(vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> * this, ShaderStructLayout * param_1)


/* void std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout>
   >::__push_back_slow_path<ShaderStructLayout>(ShaderStructLayout&&) */

void __thiscall
std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
__push_back_slow_path<ShaderStructLayout>
          (vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *this,
          ShaderStructLayout *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_50 = (long *)(this + 0x10);
  uVar8 = *local_50 - *(long *)this;
  uVar10 = (long)uVar8 >> 5;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x7fffffffffffffbf < uVar8) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0x40);
  puVar7 = (undefined8 *)((long)pvVar6 + lVar12 * 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar7[2] = uVar9;
  uVar4 = *(undefined2 *)(param_1 + 0x18);
  puVar7[1] = uVar14;
  *puVar7 = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(puVar7 + 3) = uVar4;
  puVar7[6] = uVar11;
  local_60 = *(long *)this;
  lVar12 = *(long *)(this + 8);
  *(undefined4 *)(puVar7 + 7) = uVar3;
  puVar2 = puVar7 + 8;
  puVar7[5] = uVar13;
  puVar7[4] = uVar9;
  local_70 = local_60;
  if (lVar12 != local_60) {
    do {
      uVar11 = *(undefined8 *)(lVar12 + -0x38);
      uVar9 = *(undefined8 *)(lVar12 + -0x40);
      puVar7[-6] = *(undefined8 *)(lVar12 + -0x30);
      puVar7[-7] = uVar11;
      puVar7[-8] = uVar9;
      uVar4 = *(undefined2 *)(lVar12 + -0x28);
      *(undefined8 *)(lVar12 + -0x38) = 0;
      *(undefined8 *)(lVar12 + -0x30) = 0;
      *(undefined8 *)(lVar12 + -0x40) = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *(undefined2 *)(puVar7 + -5) = uVar4;
      puVar7[-4] = 0;
      puVar7[-4] = *(undefined8 *)(lVar12 + -0x20);
      puVar7[-3] = *(undefined8 *)(lVar12 + -0x18);
      puVar7[-2] = *(undefined8 *)(lVar12 + -0x10);
      *(undefined8 *)(lVar12 + -0x18) = 0;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined8 *)(lVar12 + -0x20) = 0;
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(lVar12 + -8);
      lVar12 = lVar12 + -0x40;
      puVar7 = puVar7 + -8;
    } while (lVar12 != local_60);
    local_60 = *(long *)(this + 8);
    local_70 = *(long *)this;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  uStack_58 = *(undefined8 *)(this + 0x10);
  *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar1 * 0x40);
  local_68 = local_70;
  __split_buffer<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>&>::~__split_buffer
            ((__split_buffer<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>&> *)
             &local_70);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


