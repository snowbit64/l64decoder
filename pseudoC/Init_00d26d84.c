// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00d26d84
// Size: 32 bytes
// Signature: undefined Init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned long,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u, 64u, CryptoPP::SHA384, 48u, true>::Init() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
     ::Init(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(in_x0 + 0x158);
  puVar1[5] = 0x8eb44a8768581511;
  puVar1[4] = 0x67332667ffc00b31;
  puVar1[7] = 0x47b5481dbefa4fa4;
  puVar1[6] = 0xdb0c2e0d64f98fa7;
  puVar1[1] = 0x629a292a367cd507;
  *puVar1 = 0xcbbb9d5dc1059ed8;
  puVar1[3] = 0x152fecd8f70e5939;
  puVar1[2] = 0x9159015a3070dd17;
  return;
}


