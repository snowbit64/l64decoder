// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IteratedHashBase
// Entry Point: 00d0851c
// Size: 80 bytes
// Signature: undefined IteratedHashBase(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::MessageAuthenticationCode>::IteratedHashBase()
    */

void CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::IteratedHashBase
               (void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  *in_x0 = &PTR__IteratedHashBase_0100d178;
  in_x0[1] = &PTR__IteratedHashBase_0100d270;
  return;
}


