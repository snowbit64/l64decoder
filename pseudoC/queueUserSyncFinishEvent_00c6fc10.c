// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queueUserSyncFinishEvent
// Entry Point: 00c6fc10
// Size: 36 bytes
// Signature: undefined __cdecl queueUserSyncFinishEvent(bool param_1)


/* AndroidSysUtil::queueUserSyncFinishEvent(bool) */

void AndroidSysUtil::queueUserSyncFinishEvent(bool param_1)

{
  s_signInPending = 0;
  if (param_1) {
    s_finishUserProfileSync = 1;
  }
  return;
}


