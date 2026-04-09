// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 0074cfb8
// Size: 84 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DebugMarkerManager::getInstance() */

undefined * DebugMarkerManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_01052d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052d70), iVar1 != 0)) {
    DebugMarkerManager((DebugMarkerManager *)&DAT_01052ca8);
    __cxa_guard_release(&DAT_01052d70);
  }
  return &DAT_01052ca8;
}


