// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<MaterialShaderManager::CodeInjection_const&>
// Entry Point: 0094f4c8
// Size: 484 bytes
// Signature: void __cdecl __push_back_slow_path<MaterialShaderManager::CodeInjection_const&>(CodeInjection * param_1)


/* void std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection>
   >::__push_back_slow_path<MaterialShaderManager::CodeInjection
   const&>(MaterialShaderManager::CodeInjection const&) */

void std::__ndk1::
     vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
     ::__push_back_slow_path<MaterialShaderManager::CodeInjection_const&>(CodeInjection *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  basic_string *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 8) - *(long *)param_1 >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(param_1 + 0x10) - *(long *)param_1 >> 4;
  uVar10 = lVar8 * 0x5555555555555556;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x30);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 0094f590 to 0094f59b has its CatchHandler @ 0094f6cc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
                    /* try { // try from 0094f5ac to 0094f5af has its CatchHandler @ 0094f6ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar4 + lVar6 * 0x10 + 0x18));
  pvVar11 = *(void **)param_1;
  pbVar2 = pbVar12 + 0xc;
  pvVar7 = *(void **)(param_1 + 8);
  pvVar9 = pvVar11;
  if (*(void **)(param_1 + 8) != pvVar11) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x28);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x30);
      *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)((long)pvVar7 + -0x20);
      *(undefined8 *)(pbVar12 + -10) = uVar14;
      *(undefined8 *)(pbVar12 + -0xc) = uVar13;
      *(undefined8 *)((long)pvVar7 + -0x28) = 0;
      *(undefined8 *)((long)pvVar7 + -0x20) = 0;
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x10);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x18);
      *(undefined8 *)((long)pvVar7 + -0x30) = 0;
      *(undefined8 *)(pbVar12 + -2) = *(undefined8 *)((long)pvVar7 + -8);
      pvVar9 = (void *)((long)pvVar7 + -0x30);
      *(undefined8 *)(pbVar12 + -4) = uVar14;
      *(undefined8 *)(pbVar12 + -6) = uVar13;
      pbVar12 = pbVar12 + -0xc;
      *(undefined8 *)((long)pvVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + -8) = 0;
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      pvVar7 = pvVar9;
    } while (pvVar9 != pvVar11);
    pvVar11 = *(void **)param_1;
    pvVar9 = *(void **)(param_1 + 8);
  }
  *(basic_string **)param_1 = pbVar12;
  *(basic_string **)(param_1 + 8) = pbVar2;
  *(void **)(param_1 + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x30);
  while (pvVar4 = pvVar9, pvVar4 != pvVar11) {
    if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -8));
    }
    pvVar9 = (void *)((long)pvVar4 + -0x30);
    if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x20));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


