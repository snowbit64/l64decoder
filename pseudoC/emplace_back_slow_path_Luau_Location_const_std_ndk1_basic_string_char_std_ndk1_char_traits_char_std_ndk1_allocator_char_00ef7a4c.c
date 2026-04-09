// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<Luau::Location_const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
// Entry Point: 00ef7a4c
// Size: 472 bytes
// Signature: void __cdecl __emplace_back_slow_path<Luau::Location_const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>(Location * param_1, basic_string * param_2)


/* void std::__ndk1::vector<Luau::ParseError, std::__ndk1::allocator<Luau::ParseError>
   >::__emplace_back_slow_path<Luau::Location const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&>(Luau::Location const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void std::__ndk1::vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>>::
     __emplace_back_slow_path<Luau::Location_const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
               (Location *param_1,basic_string *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 8) - *(long *)param_1 >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(param_1 + 0x10) - *(long *)param_1 >> 4;
  uVar9 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
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
  puVar11 = (undefined8 *)((long)pvVar4 + lVar6 * 0x10);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x30);
  uVar14 = *(undefined8 *)param_2;
  puVar11[2] = *(undefined8 *)(param_2 + 2);
  puVar11[1] = uVar14;
  *puVar11 = &PTR__ParseError_010168f8;
                    /* try { // try from 00ef7b34 to 00ef7b3b has its CatchHandler @ 00ef7c24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar11 + 3));
  puVar13 = *(undefined8 **)param_1;
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar11 + 6;
  if (puVar8 == puVar13) {
    *(undefined8 **)param_1 = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar2;
    *(void **)(param_1 + 0x10) = pvVar4;
  }
  else {
    do {
      puVar12 = puVar11 + -6;
      *puVar12 = &PTR__ParseError_010168f8;
      uVar14 = puVar8[-5];
      puVar11[-4] = puVar8[-4];
      puVar11[-5] = uVar14;
      uVar15 = puVar8[-2];
      uVar14 = puVar8[-3];
      puVar11[-1] = puVar8[-1];
      puVar10 = puVar8 + -6;
      puVar11[-2] = uVar15;
      puVar11[-3] = uVar14;
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      puVar8[-3] = 0;
      puVar8 = puVar10;
      puVar11 = puVar12;
    } while (puVar10 != puVar13);
    puVar13 = *(undefined8 **)param_1;
    puVar8 = *(undefined8 **)(param_1 + 8);
    *(undefined8 **)param_1 = puVar12;
    *(undefined8 **)(param_1 + 8) = puVar2;
    *(void **)(param_1 + 0x10) = pvVar4;
    while (puVar8 != puVar13) {
      puVar8 = puVar8 + -6;
      (**(code **)*puVar8)(puVar8);
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


