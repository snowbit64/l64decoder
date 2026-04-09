// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumTextures
// Entry Point: 00abbbe0
// Size: 28 bytes
// Signature: undefined getNumTextures(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanProgramObject::getNumTextures() const */

int VulkanProgramObject::getNumTextures(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30)) >> 4) * -0x55555555;
}


