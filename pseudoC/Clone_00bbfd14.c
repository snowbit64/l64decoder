// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Clone
// Entry Point: 00bbfd14
// Size: 120 bytes
// Signature: undefined Clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ClonableImpl<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec>, CryptoPP::Rijndael::Dec>::Clone() const */

undefined8 *
CryptoPP::
ClonableImpl<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::Rijndael::Dec>
::Clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(in_x0 + 0x10);
  *puVar1 = &PTR__Base_0100fe98;
  puVar1[1] = &PTR__Base_0100ff48;
                    /* try { // try from 00bbfd54 to 00bbfd57 has its CatchHandler @ 00bbfdc4 */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::SecBlock
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (puVar1 + 3),(SecBlock *)(in_x0 + 0x18));
                    /* try { // try from 00bbfd60 to 00bbfd63 has its CatchHandler @ 00bbfd8c */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (puVar1 + 7),(SecBlock *)(in_x0 + 0x38));
  *puVar1 = &PTR__Base_00febbf0;
  puVar1[1] = &PTR__BlockCipherFinal_00febcc0;
  return puVar1 + 1;
}


