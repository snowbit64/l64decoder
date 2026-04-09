// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashEndianCorrectedBlock
// Entry Point: 00d26fec
// Size: 8 bytes
// Signature: undefined __thiscall HashEndianCorrectedBlock(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA512,64u,true> * this, ulong * param_1)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned long,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u, 64u, CryptoPP::SHA512, 64u,
   true>::HashEndianCorrectedBlock(unsigned long const*) */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA512,64u,true>
::HashEndianCorrectedBlock
          (IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA512,64u,true>
           *this,ulong *param_1)

{
  SHA512::Transform(*(ulong **)(this + 0x158),param_1);
  return;
}


