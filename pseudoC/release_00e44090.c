// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: release
// Entry Point: 00e44090
// Size: 12 bytes
// Signature: undefined __cdecl release(ThreadHandleData * param_1)


/* SoLoud::Thread::release(SoLoud::Thread::ThreadHandleData*) */

void SoLoud::Thread::release(ThreadHandleData *param_1)

{
  if (param_1 != (ThreadHandleData *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


