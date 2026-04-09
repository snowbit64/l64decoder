// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorMessage
// Entry Point: 006e2d18
// Size: 28 bytes
// Signature: undefined __cdecl errorMessage(char * param_1, uint param_2)


/* AndroidLogSink::errorMessage(char const*, unsigned int) */

void AndroidLogSink::errorMessage(char *param_1,uint param_2)

{
  __android_log_print(6,"AndroidLogSink",&DAT_004d33bb,param_2);
  return;
}


