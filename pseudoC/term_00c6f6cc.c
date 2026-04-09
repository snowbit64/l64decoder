// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 00c6f6cc
// Size: 72 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::term() */

void AndroidSysUtil::term(void)

{
  AndroidJNICall *pAVar1;
  
  pAVar1 = s_pActivityJNICall;
  s_pAppRunStateListener = 0;
  if (s_pActivityJNICall != (AndroidJNICall *)0x0) {
    AndroidJNICall::~AndroidJNICall(s_pActivityJNICall);
    operator_delete(pAVar1);
  }
  s_pActivityJNICall = (AndroidJNICall *)0x0;
  return;
}


