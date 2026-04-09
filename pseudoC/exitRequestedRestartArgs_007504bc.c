// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exitRequestedRestartArgs
// Entry Point: 007504bc
// Size: 24 bytes
// Signature: undefined exitRequestedRestartArgs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::exitRequestedRestartArgs() const */

long EngineManager::exitRequestedRestartArgs(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x2b1;
  if ((*(byte *)(in_x0 + 0x2b0) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x2c0);
  }
  return lVar1;
}


