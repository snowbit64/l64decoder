// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MD5Hash
// Entry Point: 00be4260
// Size: 48 bytes
// Signature: undefined __thiscall MD5Hash(MD5Hash * this)


/* MD5Hash::MD5Hash() */

void __thiscall MD5Hash::MD5Hash(MD5Hash *this)

{
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
  ::IteratedHashWithStaticTransform();
  *(undefined ***)this = &PTR__IteratedHashWithStaticTransform_00febe88;
  return;
}


