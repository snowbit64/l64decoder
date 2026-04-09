// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyUserChange
// Entry Point: 00752a50
// Size: 32 bytes
// Signature: undefined notifyUserChange(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::notifyUserChange() */

void EngineManager::notifyUserChange(void)

{
  long in_x0;
  
  if ((*(byte *)(in_x0 + 800) & 1) == 0) {
    *(undefined2 *)(in_x0 + 800) = 0;
    updateUniqueUserId();
    return;
  }
  **(undefined **)(in_x0 + 0x330) = 0;
  *(undefined8 *)(in_x0 + 0x328) = 0;
  updateUniqueUserId();
  return;
}


