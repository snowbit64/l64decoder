// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: abortIme
// Entry Point: 00b231c0
// Size: 76 bytes
// Signature: undefined abortIme(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidImeUtil::abortIme() */

void AndroidImeUtil::abortIme(void)

{
  if (m_isImeOpen != '\0' && m_pSoftKeyboardJniCall != (AndroidJNICall *)0x0) {
    AndroidJNICall::callVoid(m_pSoftKeyboardJniCall,"hideSoftKeyboard");
    m_isImeOpen = '\0';
  }
  return;
}


