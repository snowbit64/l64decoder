// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: translateSystemErrorCode
// Entry Point: 00c5bf60
// Size: 20 bytes
// Signature: undefined __cdecl translateSystemErrorCode(int param_1)


/* DebugUtil::translateSystemErrorCode(int) */

void DebugUtil::translateSystemErrorCode(int param_1)

{
  strerror(param_1);
  return;
}


