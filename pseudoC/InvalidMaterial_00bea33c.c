// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InvalidMaterial
// Entry Point: 00bea33c
// Size: 76 bytes
// Signature: undefined __thiscall InvalidMaterial(InvalidMaterial * this, basic_string * param_1)


/* CryptoPP::CryptoMaterial::InvalidMaterial::InvalidMaterial(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::CryptoMaterial::InvalidMaterial::InvalidMaterial
          (InvalidMaterial *this,basic_string *param_1)

{
  *(undefined4 *)(this + 8) = 4;
  *(undefined ***)this = &PTR__Exception_00fe0298;
                    /* try { // try from 00bea368 to 00bea36b has its CatchHandler @ 00bea388 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  *(undefined ***)this = &PTR__Exception_00fece78;
  return;
}


