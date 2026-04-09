// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChannels
// Entry Point: 008bc028
// Size: 28 bytes
// Signature: undefined getNumChannels(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::getNumChannels() */

undefined4 SoundPlayer::getNumChannels(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(in_x0 + 0xd9) != '\0') {
    uVar1 = (undefined4)((ulong)(*(long *)(in_x0 + 0xf0) - *(long *)(in_x0 + 0xe8)) >> 3);
  }
  return uVar1;
}


