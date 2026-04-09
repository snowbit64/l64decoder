// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: warnMessage
// Entry Point: 006e2cfc
// Size: 28 bytes
// Signature: undefined __cdecl warnMessage(char * param_1, uint param_2)


/* AndroidLogSink::warnMessage(char const*, unsigned int) */

void AndroidLogSink::warnMessage(char *param_1,uint param_2)

{
  __android_log_print(5,"AndroidLogSink",&DAT_004d33bb,param_2);
  return;
}


