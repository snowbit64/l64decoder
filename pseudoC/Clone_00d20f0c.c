// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00d20f0c
// Size: 112 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::MDC<CryptoPP::SHA1>::Enc>, CryptoPP::MDC<CryptoPP::SHA1>::Enc>::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::MDC<CryptoPP::SHA1>::Enc>
::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR__Enc_0100f810;
  puVar1[1] = &PTR__Enc_0100f8c8;
                    /* try { // try from 00d20f44 to 00d20f47 has its CatchHandler @ 00d20fb4 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (puVar1 + 2),(SecBlock *)(in_x0 + 0x10));
                    /* try { // try from 00d20f50 to 00d20f53 has its CatchHandler @ 00d20f7c */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (puVar1 + 6),(SecBlock *)(in_x0 + 0x30));
  *puVar1 = &PTR__Enc_0100fd30;
  puVar1[1] = &PTR__BlockCipherFinal_0100fdf8;
  return puVar1 + 1;
}


