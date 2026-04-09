// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00be89a8
// Size: 44 bytes
// Signature: undefined AlgorithmProvider(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeBase::AlgorithmProvider() const */

void CryptoPP::CipherModeBase::AlgorithmProvider(void)

{
  long in_x0;
  undefined *in_x8;
  
  if (*(long *)(in_x0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00be89b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(in_x0 + 0x10) + 8) + 0x20))();
    return;
  }
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x2b2b43;
  return;
}


