// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestDeleteThis
// Entry Point: 0072f794
// Size: 12 bytes
// Signature: undefined requestDeleteThis(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AtomicRefCounted::requestDeleteThis() const */

void AtomicRefCounted::requestDeleteThis(void)

{
  long *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0072f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 8))();
  return;
}


