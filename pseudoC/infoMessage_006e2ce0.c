// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: infoMessage
// Entry Point: 006e2ce0
// Size: 28 bytes
// Signature: undefined __cdecl infoMessage(char * param_1, uint param_2)


/* AndroidLogSink::infoMessage(char const*, unsigned int) */

void AndroidLogSink::infoMessage(char *param_1,uint param_2)

{
  __android_log_print(4,"AndroidLogSink",&DAT_004d33bb,param_2);
  return;
}


