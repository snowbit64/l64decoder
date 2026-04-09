// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUniqueUserId
// Entry Point: 007528c0
// Size: 52 bytes
// Signature: undefined getUniqueUserId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getUniqueUserId() */

long EngineManager::getUniqueUserId(void)

{
  long lVar1;
  long in_x0;
  
  updateUniqueUserId();
  lVar1 = in_x0 + 0x321;
  if ((*(byte *)(in_x0 + 800) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x330);
  }
  return lVar1;
}


