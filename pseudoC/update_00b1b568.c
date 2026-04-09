// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b1b568
// Size: 20 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeviceMappingManager::update() */

void DeviceMappingManager::update(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x48) != '\0') {
    *(undefined *)(in_x0 + 0x48) = 0;
    applyNewBindings();
    return;
  }
  return;
}


