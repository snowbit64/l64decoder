// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<VulkanProgramObject::GlobalVarInfo_const&>
// Entry Point: 00abc080
// Size: 472 bytes
// Signature: void __thiscall __push_back_slow_path<VulkanProgramObject::GlobalVarInfo_const&>(vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>> * this, GlobalVarInfo * param_1)


/* void std::__ndk1::vector<VulkanProgramObject::GlobalVarInfo,
   std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>
   >::__push_back_slow_path<VulkanProgramObject::GlobalVarInfo
   const&>(VulkanProgramObject::GlobalVarInfo const&) */

void __thiscall
std::__ndk1::
vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
::__push_back_slow_path<VulkanProgramObject::GlobalVarInfo_const&>
          (vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
           *this,GlobalVarInfo *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar11 = lVar10 * 0x5555555555555556;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
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
  puVar14 = (undefined4 *)((long)pvVar5 + lVar7 * 0x10);
  *puVar14 = *(undefined4 *)param_1;
                    /* try { // try from 00abc158 to 00abc15b has its CatchHandler @ 00abc258 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(puVar14 + 2);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  puVar2 = puVar14 + 0xc;
  puVar8 = *(undefined4 **)this;
  puVar9 = *(undefined4 **)(this + 8);
  *(undefined8 *)((long)pvVar5 + lVar7 * 0x10 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)((long)pvVar5 + lVar7 * 0x10 + 0x28) = uVar3;
  puVar13 = puVar8;
  puVar15 = puVar14;
  if (puVar9 != puVar8) {
    do {
      puVar13 = puVar9 + -0xc;
      puVar14 = puVar15 + -0xc;
      *puVar14 = *puVar13;
      uVar16 = *(undefined8 *)(puVar9 + -8);
      uVar12 = *(undefined8 *)(puVar9 + -10);
      *(undefined8 *)(puVar15 + -6) = *(undefined8 *)(puVar9 + -6);
      *(undefined8 *)(puVar15 + -8) = uVar16;
      *(undefined8 *)(puVar15 + -10) = uVar12;
      *(undefined8 *)(puVar9 + -8) = 0;
      *(undefined8 *)(puVar9 + -6) = 0;
      uVar12 = *(undefined8 *)(puVar9 + -4);
      *(undefined8 *)(puVar9 + -10) = 0;
      puVar15[-2] = puVar9[-2];
      *(undefined8 *)(puVar15 + -4) = uVar12;
      puVar9 = puVar13;
      puVar15 = puVar14;
    } while (puVar13 != puVar8);
    puVar8 = *(undefined4 **)(this + 8);
    puVar13 = *(undefined4 **)this;
  }
  *(undefined4 **)this = puVar14;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x30);
  while (puVar2 = puVar8, puVar2 != puVar13) {
    puVar8 = puVar2 + -0xc;
    if ((*(byte *)(puVar2 + -10) & 1) != 0) {
      operator_delete(*(void **)(puVar2 + -6));
    }
  }
  if (puVar13 != (undefined4 *)0x0) {
    operator_delete(puVar13);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


