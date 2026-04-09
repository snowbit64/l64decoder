// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AccessMaterial
// Entry Point: 00c7bed0
// Size: 40 bytes
// Signature: undefined AccessMaterial(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PrivateKeyAlgorithm::AccessMaterial() */

long CryptoPP::PrivateKeyAlgorithm::AccessMaterial(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x38))();
  return (long)plVar1 + *(long *)(*plVar1 + -0x70);
}


