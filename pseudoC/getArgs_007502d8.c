// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArgs
// Entry Point: 007502d8
// Size: 24 bytes
// Signature: undefined getArgs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getArgs() */

long EngineManager::getArgs(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x139;
  if ((*(byte *)(in_x0 + 0x138) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x148);
  }
  return lVar1;
}


