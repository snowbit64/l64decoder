// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSHA1Hash
// Entry Point: 00be5a4c
// Size: 128 bytes
// Signature: undefined __cdecl getSHA1Hash(uchar * param_1, uint param_2, uchar * param_3)


/* ShaHash::getSHA1Hash(unsigned char const*, unsigned int, unsigned char*) */

void ShaHash::getSHA1Hash(uchar *param_1,uint param_2,uchar *param_3)

{
  long *this;
  
  this = (long *)operator_new(0xd0);
                    /* try { // try from 00be5a74 to 00be5a77 has its CatchHandler @ 00be5acc */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  ::IteratedHashWithStaticTransform();
  *this = (long)&PTR__IteratedHashWithStaticTransform_01010650;
                    /* try { // try from 00be5a90 to 00be5aaf has its CatchHandler @ 00be5ae0 */
  CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)this,param_1,
             (ulong)param_2);
  (**(code **)(*this + 0x38))(this,param_3);
                    /* WARNING: Could not recover jumptable at 0x00be5ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 8))(this);
  return;
}


