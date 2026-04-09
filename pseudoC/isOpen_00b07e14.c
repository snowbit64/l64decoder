// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isOpen
// Entry Point: 00b07e14
// Size: 24 bytes
// Signature: undefined isOpen(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::VorbisFileWrap::isOpen() */

void AudioLoaderOGG::VorbisFileWrap::isOpen(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b07e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x10) + 0x10))();
    return;
  }
  return;
}


