// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00898c90
// Size: 192 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>&> * this)


/* std::__ndk1::__split_buffer<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >,
   std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > >&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>&>
::~__split_buffer(__split_buffer<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>&>
                  *this)

{
  byte **ppbVar1;
  byte **ppbVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  ppbVar1 = *(byte ***)(this + 8);
  ppbVar4 = *(byte ***)(this + 0x10);
  while (ppbVar2 = ppbVar4, ppbVar2 != ppbVar1) {
    ppbVar4 = ppbVar2 + -3;
    pbVar5 = *ppbVar4;
    *(byte ***)(this + 0x10) = ppbVar4;
    if (pbVar5 != (byte *)0x0) {
      pbVar3 = ppbVar2[-2];
      pbVar6 = pbVar5;
      if (pbVar3 != pbVar5) {
        do {
          pbVar6 = pbVar3 + -0x18;
          if ((*pbVar6 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          pbVar3 = pbVar6;
        } while (pbVar6 != pbVar5);
        pbVar6 = *ppbVar4;
      }
      ppbVar2[-2] = pbVar5;
      operator_delete(pbVar6);
      ppbVar4 = *(byte ***)(this + 0x10);
    }
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


