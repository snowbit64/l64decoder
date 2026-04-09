// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00d26fcc
// Size: 32 bytes
// Signature: undefined Init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned long,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u, 64u, CryptoPP::SHA512, 64u, true>::Init() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA512,64u,true>
     ::Init(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(in_x0 + 0x158);
  puVar1[5] = 0x9b05688c2b3e6c1f;
  puVar1[4] = 0x510e527fade682d1;
  puVar1[7] = 0x5be0cd19137e2179;
  puVar1[6] = 0x1f83d9abfb41bd6b;
  puVar1[1] = 0xbb67ae8584caa73b;
  *puVar1 = 0x6a09e667f3bcc908;
  puVar1[3] = 0xa54ff53a5f1d36f1;
  puVar1[2] = 0x3c6ef372fe94f82b;
  return;
}


