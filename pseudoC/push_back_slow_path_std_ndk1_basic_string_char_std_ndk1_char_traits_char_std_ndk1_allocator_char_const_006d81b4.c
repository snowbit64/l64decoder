// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
// Entry Point: 006d81b4
// Size: 412 bytes
// Signature: void __cdecl __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>(basic_string * param_1)


/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void std::__ndk1::
     vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
     ::
     __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
               (basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  basic_string *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 2) - *(long *)param_1 >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(param_1 + 4) - *(long *)param_1 >> 3;
  uVar9 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x18);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 006d8274 to 006d827f has its CatchHandler @ 006d8350 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
  pbVar11 = *(byte **)param_1;
  pbVar2 = pbVar12 + 6;
  pbVar8 = *(byte **)(param_1 + 2);
  pbVar10 = pbVar11;
  if (*(byte **)(param_1 + 2) != pbVar11) {
    do {
      uVar14 = *(undefined8 *)(pbVar8 + -0x10);
      uVar13 = *(undefined8 *)(pbVar8 + -0x18);
      *(undefined8 *)(pbVar12 + -2) = *(undefined8 *)(pbVar8 + -8);
      pbVar10 = pbVar8 + -0x18;
      *(undefined8 *)(pbVar12 + -4) = uVar14;
      *(undefined8 *)(pbVar12 + -6) = uVar13;
      pbVar12 = pbVar12 + -6;
      *(undefined8 *)(pbVar8 + -0x10) = 0;
      *(undefined8 *)(pbVar8 + -8) = 0;
      *(undefined8 *)(pbVar8 + -0x18) = 0;
      pbVar8 = pbVar10;
    } while (pbVar10 != pbVar11);
    pbVar11 = *(byte **)(param_1 + 2);
    pbVar10 = *(byte **)param_1;
  }
  *(basic_string **)param_1 = pbVar12;
  *(basic_string **)(param_1 + 2) = pbVar2;
  *(void **)(param_1 + 4) = (void *)((long)pvVar4 + uVar1 * 0x18);
  while (pbVar8 = pbVar11, pbVar8 != pbVar10) {
    pbVar11 = pbVar8 + -0x18;
    if ((*pbVar11 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -8));
    }
  }
  if (pbVar10 != (byte *)0x0) {
    operator_delete(pbVar10);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


