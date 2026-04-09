// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorMessage
// Entry Point: 00b24e04
// Size: 12 bytes
// Signature: undefined __cdecl errorMessage(char * param_1, uint param_2)


/* ILogSink::errorMessage(char const*, unsigned int) */

void ILogSink::errorMessage(char *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00b24e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_2);
  return;
}


