// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BlockCipherFinal
// Entry Point: 00d20dac
// Size: 144 bytes
// Signature: undefined BlockCipherFinal(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::MDC<CryptoPP::SHA1>::Enc>::BlockCipherFinal() */

void CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>::
     BlockCipherFinal(void)

{
  undefined8 *in_x0;
  undefined8 uVar1;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[4] = 0x40;
  in_x0[3] = 0xffffffffffffffff;
  *in_x0 = &PTR__Enc_0100f810;
  in_x0[1] = &PTR__Enc_0100f8c8;
  uVar1 = UnalignedAllocate(0x40);
  in_x0[5] = uVar1;
  in_x0[8] = 0x14;
  in_x0[7] = 0xffffffffffffffff;
                    /* try { // try from 00d20e10 to 00d20e17 has its CatchHandler @ 00d20e3c */
  uVar1 = UnalignedAllocate(0x14);
  in_x0[9] = uVar1;
  *in_x0 = &PTR__Enc_0100fd30;
  in_x0[1] = &PTR__BlockCipherFinal_0100fdf8;
  return;
}


