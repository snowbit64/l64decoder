// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SelfTestFailure
// Entry Point: 00b4acfc
// Size: 76 bytes
// Signature: undefined __thiscall SelfTestFailure(SelfTestFailure * this, basic_string * param_1)


/* CryptoPP::SelfTestFailure::SelfTestFailure(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::SelfTestFailure::SelfTestFailure(SelfTestFailure *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 6;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00b4ad28 to 00b4ad2b has its CatchHandler @ 00b4ad48 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fea020;
  return;
}


