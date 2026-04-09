// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>const&>
// Entry Point: 00898a90
// Size: 492 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>const&>(vector<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>> * this, vector * param_1)


/* void std::__ndk1::vector<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >,
   std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > >
   >::__push_back_slow_path<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&>(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
::
__push_back_slow_path<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>const&>
          (vector<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  byte **ppbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  byte **ppbVar11;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
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
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 00898b50 to 00898b5b has its CatchHandler @ 00898c7c */
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::vector(this_00,param_1);
  ppbVar11 = *(byte ***)this;
  pvVar2 = this_00 + 0x18;
  ppbVar7 = *(byte ***)(this + 8);
  ppbVar13 = ppbVar11;
  if (*(byte ***)(this + 8) != ppbVar11) {
    do {
      *(undefined8 *)(this_00 + -0x18) = 0;
      *(undefined8 *)(this_00 + -0x10) = 0;
      *(undefined8 *)(this_00 + -8) = 0;
      ppbVar13 = ppbVar7 + -3;
      *(byte **)(this_00 + -0x18) = *ppbVar13;
      *(byte **)(this_00 + -0x10) = ppbVar7[-2];
      *(byte **)(this_00 + -8) = ppbVar7[-1];
      *ppbVar13 = (byte *)0x0;
      ppbVar7[-2] = (byte *)0x0;
      ppbVar7[-1] = (byte *)0x0;
      this_00 = this_00 + -0x18;
      ppbVar7 = ppbVar13;
    } while (ppbVar13 != ppbVar11);
    ppbVar11 = *(byte ***)this;
    ppbVar13 = *(byte ***)(this + 8);
  }
  *(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    **)this = this_00;
  *(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    **)(this + 8) = pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
  while (ppbVar7 = ppbVar13, ppbVar7 != ppbVar11) {
    ppbVar13 = ppbVar7 + -3;
    pbVar12 = *ppbVar13;
    if (pbVar12 != (byte *)0x0) {
      pbVar8 = ppbVar7[-2];
      pbVar14 = pbVar12;
      if (pbVar8 != pbVar12) {
        do {
          pbVar14 = pbVar8 + -0x18;
          if ((*pbVar14 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -8));
          }
          pbVar8 = pbVar14;
        } while (pbVar14 != pbVar12);
        pbVar14 = *ppbVar13;
      }
      ppbVar7[-2] = pbVar12;
      operator_delete(pbVar14);
    }
  }
  if (ppbVar11 != (byte **)0x0) {
    operator_delete(ppbVar11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


