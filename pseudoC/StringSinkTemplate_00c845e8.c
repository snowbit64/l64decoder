// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringSinkTemplate
// Entry Point: 00c845e8
// Size: 64 bytes
// Signature: undefined __thiscall StringSinkTemplate(StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> * this, basic_string * param_1)


/* CryptoPP::StringSinkTemplate<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >::StringSinkTemplate(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
CryptoPP::
StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::StringSinkTemplate
          (StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
           *this,basic_string *param_1)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  *(basic_string **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__StringSinkTemplate_00ff2260;
  *(undefined ***)(this + 8) = &PTR__StringSinkTemplate_00ff23f0;
  return;
}


