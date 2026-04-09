// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00d26a9c
// Size: 40 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned int,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 64u, CryptoPP::HashTransformation>,
   CryptoPP::SHA224>::AlgorithmName() const */

void CryptoPP::
     AlgorithmImpl<CryptoPP::IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>,CryptoPP::SHA224>
     ::AlgorithmName(void)

{
  undefined *in_x8;
  
  in_x8[8] = 0;
  *in_x8 = 0xe;
  *(undefined4 *)(in_x8 + 1) = 0x2d414853;
  *(undefined4 *)(in_x8 + 4) = 0x3432322d;
  return;
}


