// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumFaces
// Entry Point: 00ab1774
// Size: 20 bytes
// Signature: undefined getNumFaces(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::getNumFaces() const */

undefined4 VulkanTextureObject::getNumFaces(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 6;
  if (*(int *)(in_x0 + 0x18) != 2) {
    uVar1 = 1;
  }
  return uVar1;
}


