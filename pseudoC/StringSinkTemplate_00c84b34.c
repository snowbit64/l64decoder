// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StringSinkTemplate
// Entry Point: 00c84b34
// Size: 64 bytes
// Signature: undefined __thiscall StringSinkTemplate(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>> * this, vector * param_1)


/* CryptoPP::StringSinkTemplate<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned
   char> > >::StringSinkTemplate(std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned
   char> >&) */

void __thiscall
CryptoPP::
StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>::
StringSinkTemplate(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
                   *this,vector *param_1)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  *(vector **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__StringSinkTemplate_00ff2420;
  *(undefined ***)(this + 8) = &PTR__StringSinkTemplate_00ff25b0;
  return;
}


