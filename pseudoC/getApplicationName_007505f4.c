// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getApplicationName
// Entry Point: 007505f4
// Size: 24 bytes
// Signature: undefined getApplicationName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getApplicationName() const */

long EngineManager::getApplicationName(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x151;
  if ((*(byte *)(in_x0 + 0x150) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x160);
  }
  return lVar1;
}


