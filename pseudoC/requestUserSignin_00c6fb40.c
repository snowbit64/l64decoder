// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestUserSignin
// Entry Point: 00c6fb40
// Size: 24 bytes
// Signature: undefined requestUserSignin(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::requestUserSignin() */

void AndroidSysUtil::requestUserSignin(void)

{
  AndroidJNICall::callVoid(s_pActivityJNICall,"requestUserSignin");
  return;
}


