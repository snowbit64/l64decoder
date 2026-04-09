// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: call_zseek64
// Entry Point: 00e33130
// Size: 28 bytes
// Signature: undefined call_zseek64(void)


void call_zseek64(long param_1)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e33148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x38));
  return;
}


