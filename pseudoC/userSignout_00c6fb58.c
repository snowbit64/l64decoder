// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: userSignout
// Entry Point: 00c6fb58
// Size: 24 bytes
// Signature: undefined userSignout(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::userSignout() */

void AndroidSysUtil::userSignout(void)

{
  AndroidJNICall::callVoid(s_pActivityJNICall,"userSignout");
  return;
}


