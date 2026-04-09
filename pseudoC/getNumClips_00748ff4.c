// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumClips
// Entry Point: 00748ff4
// Size: 20 bytes
// Signature: undefined getNumClips(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CharacterSet::getNumClips() */

ulong CharacterSet::getNumClips(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(*(long *)(in_x0 + 0x40) + 0x78) -
                *(long *)(*(long *)(in_x0 + 0x40) + 0x70)) >> 3;
}


