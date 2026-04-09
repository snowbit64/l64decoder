// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSize
// Entry Point: 00b07e2c
// Size: 24 bytes
// Signature: undefined getSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::VorbisFileWrap::getSize() const */

void AudioLoaderOGG::VorbisFileWrap::getSize(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b07e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_x0 + 0x10) + 0x48))();
    return;
  }
  return;
}


