// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmName
// Entry Point: 00be6010
// Size: 32 bytes
// Signature: undefined AlgorithmName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AlgorithmImpl<CryptoPP::IteratedHash<unsigned int,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 64u, CryptoPP::HashTransformation>,
   CryptoPP::SHA1>::AlgorithmName() const */

void CryptoPP::
     AlgorithmImpl<CryptoPP::IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>,CryptoPP::SHA1>
     ::AlgorithmName(void)

{
  undefined *in_x8;
  
  *in_x8 = 10;
  *(undefined4 *)(in_x8 + 1) = 0x2d414853;
  *(undefined2 *)(in_x8 + 5) = 0x31;
  return;
}


