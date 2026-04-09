// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspace
// Entry Point: 00ad9a28
// Size: 20 bytes
// Signature: undefined getColorspace(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidVulkanRenderWindow::getColorspace() */

undefined4 AndroidVulkanRenderWindow::getColorspace(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(char *)(in_x0 + 0xe0) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


