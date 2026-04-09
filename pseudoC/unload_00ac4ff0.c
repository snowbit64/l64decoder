// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 00ac4ff0
// Size: 44 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DxcManager::unload() */

void DxcManager::unload(void)

{
  uint *in_x0;
  
  *(undefined8 *)(in_x0 + 2) = 0;
  LibraryUtil::unloadModule(*in_x0);
  *in_x0 = 0;
  return;
}


