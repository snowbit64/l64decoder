// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumOutputTextures
// Entry Point: 00abbce8
// Size: 28 bytes
// Signature: undefined getNumOutputTextures(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanProgramObject::getNumOutputTextures() const */

int VulkanProgramObject::getNumOutputTextures(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x50) - *(long *)(in_x0 + 0x48)) >> 4) * -0x55555555;
}


