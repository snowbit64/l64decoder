// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidCiphertext
// Entry Point: 00c7cc28
// Size: 76 bytes
// Signature: undefined __thiscall InvalidCiphertext(InvalidCiphertext * this, basic_string * param_1)


/* CryptoPP::InvalidCiphertext::InvalidCiphertext(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::InvalidCiphertext::InvalidCiphertext(InvalidCiphertext *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 4;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00c7cc54 to 00c7cc57 has its CatchHandler @ 00c7cc74 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00ff0af0;
  return;
}


