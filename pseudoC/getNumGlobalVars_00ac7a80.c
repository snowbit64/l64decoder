// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGlobalVars
// Entry Point: 00ac7a80
// Size: 28 bytes
// Signature: undefined getNumGlobalVars(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanShaderSerializer::getNumGlobalVars() */

int VulkanShaderSerializer::getNumGlobalVars(void)

{
  long in_x0;
  
  return (int)((ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 3) * -0x33333333;
}


