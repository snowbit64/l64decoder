// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
// Entry Point: 00bbd9b4
// Size: 336 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>(vector<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>> * this, pair * param_1)


/* void std::__ndk1::vector<std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__push_back_slow_path<std::__ndk1::pair<unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >(std::__ndk1::pair<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__push_back_slow_path<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          (vector<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,pair *param_1)

{
  ulong uVar1;
  pair *ppVar2;
  pair *ppVar3;
  pair pVar4;
  void *pvVar5;
  ulong uVar6;
  pair *ppVar7;
  pair *ppVar8;
  ulong uVar9;
  pair *ppVar10;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  pair *ppVar11;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar6 >> 4;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar6) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 5);
  }
  uVar12 = *(undefined8 *)(param_1 + 6);
  ppVar2 = (pair *)((long)pvVar5 + lVar13 * 0x20);
  uVar15 = *(undefined8 *)(param_1 + 4);
  uVar14 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  pVar4 = *param_1;
  ppVar3 = *(pair **)this;
  ppVar10 = *(pair **)(this + 8);
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x20);
  *(undefined8 *)(ppVar2 + 6) = uVar12;
  *ppVar2 = pVar4;
  *(undefined8 *)(ppVar2 + 4) = uVar15;
  *(undefined8 *)(ppVar2 + 2) = uVar14;
  ppVar7 = ppVar2;
  if (ppVar10 == ppVar3) {
    *(pair **)this = ppVar2;
    *(pair **)(this + 8) = ppVar2 + 8;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      ppVar11 = ppVar10 + -8;
      ppVar8 = ppVar7 + -8;
      *ppVar8 = *ppVar11;
      uVar14 = *(undefined8 *)(ppVar10 + -4);
      uVar12 = *(undefined8 *)(ppVar10 + -6);
      *(undefined8 *)(ppVar7 + -2) = *(undefined8 *)(ppVar10 + -2);
      *(undefined8 *)(ppVar7 + -4) = uVar14;
      *(undefined8 *)(ppVar7 + -6) = uVar12;
      *(undefined8 *)(ppVar10 + -4) = 0;
      *(undefined8 *)(ppVar10 + -2) = 0;
      *(undefined8 *)(ppVar10 + -6) = 0;
      ppVar7 = ppVar8;
      ppVar10 = ppVar11;
    } while (ppVar11 != ppVar3);
    ppVar3 = *(pair **)this;
    ppVar10 = *(pair **)(this + 8);
    *(pair **)this = ppVar8;
    *(pair **)(this + 8) = ppVar2 + 8;
    *(void **)(this + 0x10) = pvVar5;
    while (ppVar2 = ppVar10, ppVar2 != ppVar3) {
      ppVar10 = ppVar2 + -8;
      if ((*(byte *)(ppVar2 + -6) & 1) != 0) {
        operator_delete(*(void **)(ppVar2 + -2));
      }
    }
  }
  if (ppVar3 == (pair *)0x0) {
    return;
  }
  operator_delete(ppVar3);
  return;
}


