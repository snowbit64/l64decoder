// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewSignatureAccumulator
// Entry Point: 00cc0ff0
// Size: 84 bytes
// Signature: undefined __cdecl NewSignatureAccumulator(RandomNumberGenerator * param_1)


/* CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,
   CryptoPP::DL_Keys_DSA, CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,
   CryptoPP::DL_SignatureMessageEncodingMethod_DSA, CryptoPP::SHA1>
   >::NewSignatureAccumulator(CryptoPP::RandomNumberGenerator&) const */

undefined8 *
CryptoPP::
DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>
::NewSignatureAccumulator(RandomNumberGenerator *param_1)

{
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x1c0);
                    /* try { // try from 00cc1008 to 00cc100b has its CatchHandler @ 00cc1054 */
  PK_MessageAccumulatorBase::PK_MessageAccumulatorBase((PK_MessageAccumulatorBase *)this);
                    /* try { // try from 00cc1010 to 00cc1013 has its CatchHandler @ 00cc1044 */
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  ::IteratedHashWithStaticTransform();
  this[0x1e] = &PTR__IteratedHashWithStaticTransform_01010650;
  *this = &PTR__PK_MessageAccumulatorImpl_01004040;
  return this;
}


