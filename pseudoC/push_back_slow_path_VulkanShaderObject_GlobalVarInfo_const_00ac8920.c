// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<VulkanShaderObject::GlobalVarInfo_const&>
// Entry Point: 00ac8920
// Size: 480 bytes
// Signature: void __thiscall __push_back_slow_path<VulkanShaderObject::GlobalVarInfo_const&>(vector<VulkanShaderObject::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>> * this, GlobalVarInfo * param_1)


/* void std::__ndk1::vector<VulkanShaderObject::GlobalVarInfo,
   std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>
   >::__push_back_slow_path<VulkanShaderObject::GlobalVarInfo
   const&>(VulkanShaderObject::GlobalVarInfo const&) */

void __thiscall
std::__ndk1::
vector<VulkanShaderObject::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>>
::__push_back_slow_path<VulkanShaderObject::GlobalVarInfo_const&>
          (vector<VulkanShaderObject::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>>
           *this,GlobalVarInfo *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * -0x6666666666666666;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
    uVar1 = 0x666666666666666;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x28);
  }
  puVar12 = (undefined4 *)((long)pvVar5 + lVar7 * 8);
  *puVar12 = *(undefined4 *)param_1;
                    /* try { // try from 00ac89f8 to 00ac89fb has its CatchHandler @ 00ac8b00 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(puVar12 + 2);
  puVar2 = puVar12 + 10;
  pvVar8 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  *(undefined4 *)((long)pvVar5 + lVar7 * 8 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pvVar11 = pvVar8;
  if (pvVar3 != pvVar8) {
    lVar7 = 0;
    do {
      lVar9 = lVar7 + -0x28;
      *(undefined4 *)((long)puVar12 + lVar7 + -0x28) = *(undefined4 *)((long)pvVar3 + lVar7 + -0x28)
      ;
      uVar14 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x18);
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x20);
      *(undefined8 *)((long)puVar12 + lVar7 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x10)
      ;
      *(undefined8 *)((long)puVar12 + lVar7 + -0x18) = uVar14;
      *(undefined8 *)((long)puVar12 + lVar7 + -0x20) = uVar13;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x20) = 0;
      *(undefined4 *)((long)puVar12 + lVar7 + -8) = *(undefined4 *)((long)pvVar3 + lVar7 + -8);
      lVar7 = lVar9;
    } while ((void *)((long)pvVar3 + lVar9) != pvVar8);
    pvVar8 = *(void **)(this + 8);
    puVar12 = (undefined4 *)((long)puVar12 + lVar9);
    pvVar11 = *(void **)this;
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x28);
  while (pvVar5 = pvVar8, pvVar5 != pvVar11) {
    pvVar8 = (void *)((long)pvVar5 + -0x28);
    if ((*(byte *)((long)pvVar5 + -0x20) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar5 + -0x10));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


