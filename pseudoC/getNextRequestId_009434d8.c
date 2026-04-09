// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextRequestId
// Entry Point: 009434d8
// Size: 24 bytes
// Signature: undefined getNextRequestId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::getNextRequestId() */

void I3DStreamingManager::getNextRequestId(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 100) + 1;
  if (*(int *)(in_x0 + 100) == -1) {
    iVar1 = 1;
  }
  *(int *)(in_x0 + 100) = iVar1;
  return;
}


