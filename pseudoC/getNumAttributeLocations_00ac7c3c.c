// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumAttributeLocations
// Entry Point: 00ac7c3c
// Size: 16 bytes
// Signature: undefined getNumAttributeLocations(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanShaderSerializer::getNumAttributeLocations() */

ulong VulkanShaderSerializer::getNumAttributeLocations(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20)) >> 2;
}


