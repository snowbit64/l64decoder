// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isNetworkDirty
// Entry Point: 00705ec0
// Size: 56 bytes
// Signature: undefined isNetworkDirty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::isNetworkDirty() */

bool AnimalAnimationSystem::isNetworkDirty(void)

{
  long in_x0;
  
  return (byte)(*(byte *)(in_x0 + 0x5a) | *(byte *)(in_x0 + 0xc2) | *(byte *)(in_x0 + 0x12a) |
                *(byte *)(in_x0 + 0x192) | *(byte *)(in_x0 + 0x1fa) | *(byte *)(in_x0 + 0x262)) != 0
  ;
}


