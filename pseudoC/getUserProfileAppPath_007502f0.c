// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserProfileAppPath
// Entry Point: 007502f0
// Size: 24 bytes
// Signature: undefined getUserProfileAppPath(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::getUserProfileAppPath() */

long EngineManager::getUserProfileAppPath(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x169;
  if ((*(byte *)(in_x0 + 0x168) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x178);
  }
  return lVar1;
}


