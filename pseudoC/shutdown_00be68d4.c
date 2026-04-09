// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shutdown
// Entry Point: 00be68d4
// Size: 64 bytes
// Signature: undefined shutdown(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGeneratorManager::shutdown() */

bool SecureRandomGeneratorManager::shutdown(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x1bf8);
  if (((iVar1 != 0) && (*(int *)(in_x0 + 0x1bf8) = iVar1 + -1, iVar1 + -1 == 0)) &&
     (-1 < *(int *)(in_x0 + 0x50))) {
    close(*(int *)(in_x0 + 0x50));
  }
  return iVar1 != 0;
}


