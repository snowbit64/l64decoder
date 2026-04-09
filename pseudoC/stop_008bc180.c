// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 008bc180
// Size: 44 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::stop() */

void SoundPlayer::stop(void)

{
  long in_x0;
  
  if ((*(char *)(in_x0 + 0xd9) != '\0') && (*(long *)(in_x0 + 0xe8) != *(long *)(in_x0 + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(in_x0 + 0xe8) + (ulong)*(uint *)(in_x0 + 0x100) * 8) + 0x30))
              ();
    return;
  }
  return;
}


