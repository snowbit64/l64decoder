// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b23100
// Size: 56 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidImeUtil::init() */

void AndroidImeUtil::init(void)

{
  AndroidJNICall *this;
  
  this = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00b23118 to 00b2311f has its CatchHandler @ 00b23138 */
  AndroidJNICall::AndroidJNICall(this,5);
  m_pSoftKeyboardJniCall = this;
  return;
}


