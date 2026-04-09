// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashEndianCorrectedBlock
// Entry Point: 00b49c44
// Size: 8 bytes
// Signature: undefined __thiscall HashEndianCorrectedBlock(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true> * this, uint * param_1)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 32u, CryptoPP::SHA256, 32u, true>::HashEndianCorrectedBlock(unsigned int const*) */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
::HashEndianCorrectedBlock
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
           *this,uint *param_1)

{
  SHA256::Transform(*(uint **)(this + 0xd0),param_1);
  return;
}


