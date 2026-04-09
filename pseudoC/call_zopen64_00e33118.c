// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: call_zopen64
// Entry Point: 00e33118
// Size: 24 bytes
// Signature: undefined call_zopen64(void)


void call_zopen64(code **param_1)

{
  if (*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e33124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**param_1)(param_1[7]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1[8])(param_1[7]);
  return;
}


