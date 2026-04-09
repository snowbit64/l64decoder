// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Init
// Entry Point: 00d26acc
// Size: 24 bytes
// Signature: undefined Init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 32u, CryptoPP::SHA224, 28u, true>::Init() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA224,28u,true>
     ::Init(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(in_x0 + 0xd0);
  puVar1[1] = 0xf70e59393070dd17;
  *puVar1 = 0x367cd507c1059ed8;
  puVar1[3] = 0xbefa4fa464f98fa7;
  puVar1[2] = 0x68581511ffc00b31;
  return;
}


