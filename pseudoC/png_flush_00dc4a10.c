// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_flush
// Entry Point: 00dc4a10
// Size: 16 bytes
// Signature: undefined png_flush(void)


void png_flush(long param_1)

{
  if (*(code **)(param_1 + 0x2c8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dc4a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x2c8))();
    return;
  }
  return;
}


