// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openURL
// Entry Point: 00c691b8
// Size: 108 bytes
// Signature: undefined __cdecl openURL(char * param_1)


/* WebUtil::openURL(char const*) */

void WebUtil::openURL(char *param_1)

{
  long lVar1;
  AndroidJNICall aAStack_a0 [120];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AndroidJNICall::AndroidJNICall(aAStack_a0,0);
                    /* try { // try from 00c691e4 to 00c691f7 has its CatchHandler @ 00c69224 */
  AndroidJNICall::callBoolFromString(aAStack_a0,"openURL",param_1);
  AndroidJNICall::~AndroidJNICall(aAStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


