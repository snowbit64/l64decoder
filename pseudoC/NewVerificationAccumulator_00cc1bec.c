// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewVerificationAccumulator
// Entry Point: 00cc1bec
// Size: 84 bytes
// Signature: undefined NewVerificationAccumulator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,
   CryptoPP::DL_Keys_DSA, CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,
   CryptoPP::DL_SignatureMessageEncodingMethod_DSA, CryptoPP::SHA1> >::NewVerificationAccumulator()
   const */

undefined8 *
CryptoPP::
DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>
::NewVerificationAccumulator(void)

{
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x1c0);
                    /* try { // try from 00cc1c04 to 00cc1c07 has its CatchHandler @ 00cc1c50 */
  PK_MessageAccumulatorBase::PK_MessageAccumulatorBase((PK_MessageAccumulatorBase *)this);
                    /* try { // try from 00cc1c0c to 00cc1c0f has its CatchHandler @ 00cc1c40 */
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  ::IteratedHashWithStaticTransform();
  this[0x1e] = &PTR__IteratedHashWithStaticTransform_01010650;
  *this = &PTR__PK_MessageAccumulatorImpl_01004040;
  return this;
}


