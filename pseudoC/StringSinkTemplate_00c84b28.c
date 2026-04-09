// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringSinkTemplate
// Entry Point: 00c84b28
// Size: 4 bytes
// Signature: undefined __thiscall ~StringSinkTemplate(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>> * this)


/* CryptoPP::StringSinkTemplate<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned
   char> > >::~StringSinkTemplate() */

void __thiscall
CryptoPP::
StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>::
~StringSinkTemplate(StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>
                    *this)

{
  operator_delete(this);
  return;
}


