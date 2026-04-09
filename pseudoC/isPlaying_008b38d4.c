// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 008b38d4
// Size: 24 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::isPlaying() const */

void StaticSample::isPlaying(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b38e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x18))();
    return;
  }
  return;
}


