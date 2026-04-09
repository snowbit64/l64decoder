// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00b49c34
// Size: 8 bytes
// Signature: undefined Init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 32u, CryptoPP::SHA256, 32u, true>::Init() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
     ::Init(void)

{
  long in_x0;
  
  SHA256::InitState(*(uint **)(in_x0 + 0xd0));
  return;
}


