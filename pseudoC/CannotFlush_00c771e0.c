// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CannotFlush
// Entry Point: 00c771e0
// Size: 76 bytes
// Signature: undefined __thiscall CannotFlush(CannotFlush * this, basic_string * param_1)


/* CryptoPP::CannotFlush::CannotFlush(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall CryptoPP::CannotFlush::CannotFlush(CannotFlush *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 2;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c7720c to 00c7720f has its CatchHandler @ 00c7722c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fef4d8;
  return;
}


