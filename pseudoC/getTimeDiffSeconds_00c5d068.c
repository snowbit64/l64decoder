// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeDiffSeconds
// Entry Point: 00c5d068
// Size: 20 bytes
// Signature: undefined __cdecl getTimeDiffSeconds(longlong param_1, longlong param_2)


/* EnvUtil::getTimeDiffSeconds(long long, long long) */

void EnvUtil::getTimeDiffSeconds(longlong param_1,longlong param_2)

{
  difftime(param_1,param_2);
  return;
}


