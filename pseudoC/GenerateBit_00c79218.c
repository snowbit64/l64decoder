// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBit
// Entry Point: 00c79218
// Size: 32 bytes
// Signature: undefined GenerateBit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::RandomNumberGenerator::GenerateBit() */

uint CryptoPP::RandomNumberGenerator::GenerateBit(void)

{
  uint uVar1;
  long *in_x0;
  
  uVar1 = (**(code **)(*in_x0 + 0x38))();
  return uVar1 & 1;
}


