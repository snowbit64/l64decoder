// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkGarbageState
// Entry Point: 00bb6884
// Size: 28 bytes
// Signature: undefined checkGarbageState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::checkGarbageState() */

void LuauScriptSystem::checkGarbageState(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = *(int *)(in_x0 + 0x120) + 1;
  *(uint *)(in_x0 + 0x120) = uVar1;
  if ((uVar1 & 0x3fff) != 0) {
    return;
  }
  checkForEmergencyGarbageCollection();
  return;
}


