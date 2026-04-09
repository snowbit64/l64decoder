// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: windowIsResizeable
// Entry Point: 00c6fb04
// Size: 24 bytes
// Signature: undefined windowIsResizeable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::windowIsResizeable() */

void AndroidSysUtil::windowIsResizeable(void)

{
  AndroidJNICall::callBool(s_pActivityJNICall,"windowIsResizeable");
  return;
}


