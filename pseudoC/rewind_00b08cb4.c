// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rewind
// Entry Point: 00b08cb4
// Size: 68 bytes
// Signature: undefined rewind(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioLoaderOGG::rewind() */

void AudioLoaderOGG::rewind(void)

{
  long in_x0;
  long *plVar1;
  
  plVar1 = *(long **)(in_x0 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  if (*(long *)(in_x0 + 0x68) != 0) {
    stb_vorbis_flush_pushdata();
  }
  *(undefined4 *)(in_x0 + 0x5c) = 0;
  *(undefined4 *)(in_x0 + 0x60) = 0;
  return;
}


