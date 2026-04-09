// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringSinkTemplate
// Entry Point: 00c845e0
// Size: 8 bytes
// Signature: undefined __thiscall ~StringSinkTemplate(StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> * this)


/* non-virtual thunk to CryptoPP::StringSinkTemplate<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >::~StringSinkTemplate() */

void __thiscall
CryptoPP::
StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::~StringSinkTemplate
          (StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
           *this)

{
  operator_delete(this + -8);
  return;
}


