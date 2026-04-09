// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IteratedHashWithStaticTransform
// Entry Point: 00be4500
// Size: 112 bytes
// Signature: undefined IteratedHashWithStaticTransform(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   0>, 64u, 16u, CryptoPP::Weak1::MD5, 0u, false>::IteratedHashWithStaticTransform() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
     ::IteratedHashWithStaticTransform(void)

{
  undefined8 *in_x0;
  
  Algorithm::Algorithm((Algorithm *)in_x0,true);
  *(undefined *)((long)in_x0 + 0x51) = 1;
  in_x0[0xd] = in_x0 + 2;
  *(undefined *)((long)in_x0 + 0xb1) = 1;
  in_x0[0x19] = in_x0 + 0xe;
  in_x0[0xc] = 0x10;
  in_x0[0xb] = 0x3fffffffffffffff;
  in_x0[0x18] = 0x10;
  in_x0[0x17] = 0x3fffffffffffffff;
  *in_x0 = &PTR__IteratedHashWithStaticTransform_00febd60;
  in_x0[1] = 0;
                    /* try { // try from 00be4558 to 00be455f has its CatchHandler @ 00be4570 */
  Weak1::MD5::InitState((uint *)(in_x0 + 0xe));
  return;
}


