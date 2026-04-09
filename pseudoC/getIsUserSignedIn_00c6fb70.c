// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsUserSignedIn
// Entry Point: 00c6fb70
// Size: 24 bytes
// Signature: undefined getIsUserSignedIn(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getIsUserSignedIn() */

void AndroidSysUtil::getIsUserSignedIn(void)

{
  AndroidJNICall::callBool(s_pActivityJNICall,"getIsUserSignedIn");
  return;
}


