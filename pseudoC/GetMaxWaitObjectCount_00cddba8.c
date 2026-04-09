// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxWaitObjectCount
// Entry Point: 00cddba8
// Size: 40 bytes
// Signature: undefined GetMaxWaitObjectCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Redirector::GetMaxWaitObjectCount() const */

undefined8 CryptoPP::Redirector::GetMaxWaitObjectCount(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if ((*(long **)(in_x0 + 0x18) != (long *)0x0) && ((*(byte *)(in_x0 + 0x20) >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x18) + 0x48))();
    return uVar1;
  }
  return 0;
}


