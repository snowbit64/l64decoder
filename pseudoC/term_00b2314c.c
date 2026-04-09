// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 00b2314c
// Size: 116 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidImeUtil::term() */

void AndroidImeUtil::term(void)

{
  AndroidJNICall *pAVar1;
  
  if (m_isImeOpen != '\0' && m_pSoftKeyboardJniCall != (AndroidJNICall *)0x0) {
    AndroidJNICall::callVoid(m_pSoftKeyboardJniCall,"hideSoftKeyboard");
    m_isImeOpen = '\0';
  }
  pAVar1 = m_pSoftKeyboardJniCall;
  if (m_pSoftKeyboardJniCall != (AndroidJNICall *)0x0) {
    AndroidJNICall::~AndroidJNICall(m_pSoftKeyboardJniCall);
    operator_delete(pAVar1);
    m_pSoftKeyboardJniCall = (AndroidJNICall *)0x0;
  }
  return;
}


