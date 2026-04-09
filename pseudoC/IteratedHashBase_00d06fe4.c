// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IteratedHashBase
// Entry Point: 00d06fe4
// Size: 80 bytes
// Signature: undefined IteratedHashBase(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned long,
   CryptoPP::MessageAuthenticationCode>::IteratedHashBase() */

void CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::IteratedHashBase
               (void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  in_x0[3] = 0;
  *in_x0 = &PTR__IteratedHashBase_0100cef0;
  in_x0[1] = &PTR__IteratedHashBase_0100cfe8;
  return;
}


