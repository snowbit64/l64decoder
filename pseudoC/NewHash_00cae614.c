// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewHash
// Entry Point: 00cae614
// Size: 60 bytes
// Signature: undefined NewHash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::OAEP<CryptoPP::SHA1, CryptoPP::P1363_MGF1>::NewHash() const */

undefined8 * CryptoPP::OAEP<CryptoPP::SHA1,CryptoPP::P1363_MGF1>::NewHash(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
                    /* try { // try from 00cae62c to 00cae62f has its CatchHandler @ 00cae650 */
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  ::IteratedHashWithStaticTransform();
  *puVar1 = &PTR__IteratedHashWithStaticTransform_01010650;
  return puVar1;
}


