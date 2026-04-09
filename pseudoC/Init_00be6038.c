// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00be6038
// Size: 8 bytes
// Signature: undefined Init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 20u, CryptoPP::SHA1, 0u, false>::Init() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
     ::Init(void)

{
  long in_x0;
  
  SHA1::InitState(*(uint **)(in_x0 + 200));
  return;
}


