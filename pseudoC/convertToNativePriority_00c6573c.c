// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertToNativePriority
// Entry Point: 00c6573c
// Size: 32 bytes
// Signature: undefined __cdecl convertToNativePriority(ThreadPriority param_1)


/* ThreadUtil::convertToNativePriority(Thread::ThreadPriority) */

undefined4 ThreadUtil::convertToNativePriority(ThreadPriority param_1)

{
  if (param_1 < 5) {
    return *(undefined4 *)(&DAT_0053e4b4 + (long)(int)param_1 * 4);
  }
  return 0;
}


