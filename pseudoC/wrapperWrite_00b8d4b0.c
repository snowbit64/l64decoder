// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: wrapperWrite
// Entry Point: 00b8d4b0
// Size: 16 bytes
// Signature: undefined __cdecl wrapperWrite(void * param_1, void * param_2, ulong param_3)


/* LZMACompressionUtil::SeqOutStreamWrapper::wrapperWrite(void*, void const*, unsigned long) */

void LZMACompressionUtil::SeqOutStreamWrapper::wrapperWrite
               (void *param_1,void *param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00b8d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)param_1 + 8) + 0x10))();
  return;
}


