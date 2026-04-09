// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidDataFormat
// Entry Point: 00cda190
// Size: 76 bytes
// Signature: undefined __thiscall InvalidDataFormat(InvalidDataFormat * this, basic_string * param_1)


/* CryptoPP::InvalidDataFormat::InvalidDataFormat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::InvalidDataFormat::InvalidDataFormat(InvalidDataFormat *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 4;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00cda1bc to 00cda1bf has its CatchHandler @ 00cda1dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_01002bf8;
  return;
}


