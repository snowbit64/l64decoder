// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IteratedHashWithStaticTransform
// Entry Point: 00b4998c
// Size: 120 bytes
// Signature: undefined IteratedHashWithStaticTransform(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 32u, CryptoPP::SHA256, 32u, true>::IteratedHashWithStaticTransform() */

void CryptoPP::
     IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
     ::IteratedHashWithStaticTransform(void)

{
  uint *puVar1;
  undefined8 *in_x0;
  
  Algorithm::Algorithm((Algorithm *)in_x0,true);
  *(undefined *)((long)in_x0 + 0x51) = 1;
  *(undefined *)((long)in_x0 + 0xb9) = 1;
  in_x0[0xd] = in_x0 + 2;
  in_x0[0xc] = 0x10;
  in_x0[0xb] = 0x3fffffffffffffff;
  *in_x0 = &PTR__IteratedHashWithStaticTransform_00fe9ca8;
  in_x0[1] = 0;
  in_x0[0x19] = 0x10;
  in_x0[0x18] = 0x3fffffffffffffff;
  puVar1 = (uint *)((long)(in_x0 + 0xe) + ((ulong)(uint)-(int)(in_x0 + 0xe) & 8));
  in_x0[0x1a] = puVar1;
                    /* try { // try from 00b499f0 to 00b499f3 has its CatchHandler @ 00b49a04 */
  SHA256::InitState(puVar1);
  return;
}


