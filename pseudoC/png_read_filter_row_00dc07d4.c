// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_filter_row
// Entry Point: 00dc07d4
// Size: 200 bytes
// Signature: undefined png_read_filter_row(void)


void png_read_filter_row(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        int param_5)

{
  code *pcVar1;
  
  if (param_5 - 1U < 4) {
    if (*(long *)(param_1 + 0x4b8) == 0) {
      *(code **)(param_1 + 0x4b8) = FUN_00dc13dc;
      pcVar1 = FUN_00dc17b0;
      if (*(byte *)(param_1 + 0x2a2) + 7 >> 3 != 1) {
        pcVar1 = FUN_00dc182c;
      }
      *(code **)(param_1 + 0x4c0) = FUN_00dc14d0;
      *(code **)(param_1 + 0x4c8) = FUN_00dc15c4;
      *(code **)(param_1 + 0x4d0) = pcVar1;
      png_init_filter_functions_neon(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00dc0884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + (ulong)(param_5 - 1U) * 8 + 0x4b8))(param_2,param_3,param_4);
    return;
  }
  return;
}


