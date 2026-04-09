// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 008bc1ac
// Size: 44 bytes
// Signature: undefined play(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::play() */

void SoundPlayer::play(void)

{
  long in_x0;
  
  if ((*(char *)(in_x0 + 0xd9) != '\0') && (*(long *)(in_x0 + 0xe8) != *(long *)(in_x0 + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(in_x0 + 0xe8) + (ulong)*(uint *)(in_x0 + 0x100) * 8) + 0x18))
              ();
    return;
  }
  return;
}


