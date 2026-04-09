// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashEndianCorrectedBlock
// Entry Point: 00be6040
// Size: 8 bytes
// Signature: undefined __thiscall HashEndianCorrectedBlock(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false> * this, uint * param_1)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 20u, CryptoPP::SHA1, 0u, false>::HashEndianCorrectedBlock(unsigned int const*) */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
::HashEndianCorrectedBlock
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
           *this,uint *param_1)

{
  SHA1::Transform(*(uint **)(this + 200),param_1);
  return;
}


