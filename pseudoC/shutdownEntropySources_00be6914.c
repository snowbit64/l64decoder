// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shutdownEntropySources
// Entry Point: 00be6914
// Size: 16 bytes
// Signature: undefined shutdownEntropySources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::shutdownEntropySources() */

int SecureRandomGeneratorManager::shutdownEntropySources(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x50);
  if (-1 < iVar1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


