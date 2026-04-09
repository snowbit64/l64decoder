// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HMAC
// Entry Point: 00bebd8c
// Size: 120 bytes
// Signature: undefined HMAC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::HMAC<CryptoPP::SHA256>::HMAC() */

void CryptoPP::HMAC<CryptoPP::SHA256>::HMAC(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[4] = 0;
  in_x0[5] = 0;
  *(undefined *)(in_x0 + 6) = 0;
  in_x0[3] = 0xffffffffffffffff;
  *in_x0 = &PTR__HMAC_00fec030;
  in_x0[1] = &PTR__HMAC_00fec100;
                    /* try { // try from 00bebde0 to 00bebde7 has its CatchHandler @ 00bebe04 */
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  in_x0[7] = &PTR__IteratedHashWithStaticTransform_01010888;
  return;
}


