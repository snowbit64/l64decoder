// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00c70d48
// Size: 60 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoPlayer::stop() */

void VideoPlayer::stop(void)

{
  undefined *in_x0;
  
  if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x38) + 0x40))(0,0);
  }
  *in_x0 = 0;
  return;
}


