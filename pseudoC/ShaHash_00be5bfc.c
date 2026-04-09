// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShaHash
// Entry Point: 00be5bfc
// Size: 140 bytes
// Signature: undefined __thiscall ShaHash(ShaHash * this, uint param_1)


/* ShaHash::ShaHash(unsigned int) */

void __thiscall ShaHash::ShaHash(ShaHash *this,uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ShaHash_00fec210;
  if (param_1 == 0xa0) {
    puVar1 = (undefined8 *)operator_new(0xd0);
                    /* try { // try from 00be5c3c to 00be5c3f has its CatchHandler @ 00be5c8c */
    CryptoPP::
    IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
    ::IteratedHashWithStaticTransform();
    puVar2 = &CryptoPP::SHA1::vtable;
    *(undefined8 **)(this + 8) = puVar1;
  }
  else {
    puVar1 = (undefined8 *)operator_new(0xd8);
                    /* try { // try from 00be5c60 to 00be5c63 has its CatchHandler @ 00be5c88 */
    CryptoPP::
    IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
    ::IteratedHashWithStaticTransform();
    puVar2 = &CryptoPP::SHA256::vtable;
    *(undefined8 **)(this + 0x10) = puVar1;
  }
  *puVar1 = puVar2 + 0x10;
  return;
}


