// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 009522b0
// Size: 200 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >,
   std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > > >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
                 *this)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte **ppbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  ppbVar3 = *(byte ***)this;
  if (ppbVar3 == (byte **)0x0) {
    return;
  }
  ppbVar4 = *(byte ***)(this + 8);
  ppbVar1 = ppbVar3;
  if (ppbVar4 != ppbVar3) {
    do {
      ppbVar1 = ppbVar4 + -3;
      pbVar5 = *ppbVar1;
      if (pbVar5 != (byte *)0x0) {
        pbVar2 = ppbVar4[-2];
        pbVar6 = pbVar5;
        if (pbVar2 != pbVar5) {
          do {
            pbVar6 = pbVar2 + -0x18;
            if ((*pbVar6 & 1) != 0) {
              operator_delete(*(void **)(pbVar2 + -8));
            }
            pbVar2 = pbVar6;
          } while (pbVar6 != pbVar5);
          pbVar6 = *ppbVar1;
        }
        ppbVar4[-2] = pbVar5;
        operator_delete(pbVar6);
      }
      ppbVar4 = ppbVar1;
    } while (ppbVar1 != ppbVar3);
    ppbVar1 = *(byte ***)this;
  }
  *(byte ***)(this + 8) = ppbVar3;
  operator_delete(ppbVar1);
  return;
}


