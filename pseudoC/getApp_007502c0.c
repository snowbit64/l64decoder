// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getApp
// Entry Point: 007502c0
// Size: 24 bytes
// Signature: undefined getApp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getApp() */

long EngineManager::getApp(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x121;
  if ((*(byte *)(in_x0 + 0x120) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x130);
  }
  return lVar1;
}


