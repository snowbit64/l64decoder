// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: warnMessage
// Entry Point: 00b24df8
// Size: 12 bytes
// Signature: undefined __cdecl warnMessage(char * param_1, uint param_2)


/* ILogSink::warnMessage(char const*, unsigned int) */

void ILogSink::warnMessage(char *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b24e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_2);
  return;
}


