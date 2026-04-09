// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NotImplemented
// Entry Point: 00c789d4
// Size: 72 bytes
// Signature: undefined __thiscall NotImplemented(NotImplemented * this, basic_string * param_1)


/* CryptoPP::NotImplemented::NotImplemented(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall CryptoPP::NotImplemented::NotImplemented(NotImplemented *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c789fc to 00c789ff has its CatchHandler @ 00c78a1c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe0270;
  return;
}


