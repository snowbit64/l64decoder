// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaterial
// Entry Point: 00c7bf88
// Size: 40 bytes
// Signature: undefined GetMaterial(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PublicKeyAlgorithm::GetMaterial() const */

long CryptoPP::PublicKeyAlgorithm::GetMaterial(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x40))();
  return (long)plVar1 + *(long *)(*plVar1 + -0x70);
}


