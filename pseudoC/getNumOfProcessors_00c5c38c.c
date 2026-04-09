// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumOfProcessors
// Entry Point: 00c5c38c
// Size: 24 bytes
// Signature: undefined getNumOfProcessors(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvUtil::getNumOfProcessors() */

void EnvUtil::getNumOfProcessors(void)

{
  sysconf(0x61);
  return;
}


