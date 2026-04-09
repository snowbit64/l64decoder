// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidArgument
// Entry Point: 00bbf1c4
// Size: 76 bytes
// Signature: undefined __thiscall InvalidArgument(InvalidArgument * this, basic_string * param_1)


/* CryptoPP::InvalidArgument::InvalidArgument(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::InvalidArgument::InvalidArgument(InvalidArgument *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00bbf1f0 to 00bbf1f3 has its CatchHandler @ 00bbf210 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fe9ee0;
  return;
}


