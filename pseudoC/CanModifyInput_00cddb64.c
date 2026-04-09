// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CanModifyInput
// Entry Point: 00cddb64
// Size: 24 bytes
// Signature: undefined CanModifyInput(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Redirector::CanModifyInput() const */

void CryptoPP::Redirector::CanModifyInput(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cddb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x18) + 0x30))();
    return;
  }
  return;
}


