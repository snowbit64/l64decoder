// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumSSamplers
// Entry Point: 00abbc78
// Size: 28 bytes
// Signature: undefined getNumSSamplers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanProgramObject::getNumSSamplers() const */

int VulkanProgramObject::getNumSSamplers(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x20) - *(long *)(in_x0 + 0x18)) >> 4) * -0x55555555;
}


