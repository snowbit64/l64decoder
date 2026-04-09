// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00c6f67c
// Size: 60 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::init() */

undefined8 AndroidSysUtil::init(void)

{
  AndroidJNICall *this;
  
  this = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00c6f694 to 00c6f69b has its CatchHandler @ 00c6f6b8 */
  AndroidJNICall::AndroidJNICall(this,0);
  s_pActivityJNICall = this;
  return 1;
}


