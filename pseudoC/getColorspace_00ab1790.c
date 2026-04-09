// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspace
// Entry Point: 00ab1790
// Size: 20 bytes
// Signature: undefined getColorspace(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::getColorspace() const */

undefined4 VulkanTextureObject::getColorspace(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(char *)(in_x0 + 0x4d) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


