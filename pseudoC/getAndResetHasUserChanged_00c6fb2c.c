// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAndResetHasUserChanged
// Entry Point: 00c6fb2c
// Size: 20 bytes
// Signature: undefined getAndResetHasUserChanged(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getAndResetHasUserChanged() */

undefined AndroidSysUtil::getAndResetHasUserChanged(void)

{
  undefined uVar1;
  
  uVar1 = s_finishUserProfileSync;
  s_finishUserProfileSync = 0;
  return uVar1;
}


