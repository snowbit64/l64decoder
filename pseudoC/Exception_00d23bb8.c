// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exception
// Entry Point: 00d23bb8
// Size: 60 bytes
// Signature: undefined __thiscall Exception(Exception * this, ErrorType param_1, basic_string * param_2)


/* CryptoPP::Exception::Exception(CryptoPP::Exception::ErrorType, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::Exception::Exception(Exception *this,ErrorType param_1,basic_string *param_2)

{
  *(ErrorType *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00d23be0 to 00d23be7 has its CatchHandler @ 00d23bf4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  return;
}


