// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFatalException
// Entry Point: 006deaf4
// Size: 24 bytes
// Signature: undefined onFatalException(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::onFatalException() */

void EngineApplication::onFatalException(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x168) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006deb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x168) + 0x30))();
    return;
  }
  return;
}


