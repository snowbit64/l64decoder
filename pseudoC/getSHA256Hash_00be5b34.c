// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSHA256Hash
// Entry Point: 00be5b34
// Size: 128 bytes
// Signature: undefined __cdecl getSHA256Hash(uchar * param_1, uint param_2, uchar * param_3)


/* ShaHash::getSHA256Hash(unsigned char const*, unsigned int, unsigned char*) */

void ShaHash::getSHA256Hash(uchar *param_1,uint param_2,uchar *param_3)

{
  long *this;
  
  this = (long *)operator_new(0xd8);
                    /* try { // try from 00be5b5c to 00be5b5f has its CatchHandler @ 00be5bb4 */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  *this = (long)&PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00be5b78 to 00be5b97 has its CatchHandler @ 00be5bc8 */
  CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)this,param_1,
             (ulong)param_2);
  (**(code **)(*this + 0x38))(this,param_3);
                    /* WARNING: Could not recover jumptable at 0x00be5bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 8))(this);
  return;
}


