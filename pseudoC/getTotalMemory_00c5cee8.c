// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTotalMemory
// Entry Point: 00c5cee8
// Size: 48 bytes
// Signature: undefined getTotalMemory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvUtil::getTotalMemory() */

long EnvUtil::getTotalMemory(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = sysconf(0x62);
  lVar2 = sysconf(0x28);
  return lVar2 * lVar1;
}


