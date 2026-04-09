// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_init_filter_functions_neon
// Entry Point: 00dccebc
// Size: 96 bytes
// Signature: undefined png_init_filter_functions_neon(void)


void png_init_filter_functions_neon(long param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  *(code **)(param_1 + 0x4c0) = png_read_filter_row_up_neon;
  if (param_2 == 3) {
    pcVar1 = png_read_filter_row_paeth3_neon;
    pcVar2 = png_read_filter_row_avg3_neon;
    pcVar3 = png_read_filter_row_sub3_neon;
  }
  else {
    if (param_2 != 4) {
      return;
    }
    pcVar1 = png_read_filter_row_paeth4_neon;
    pcVar2 = png_read_filter_row_avg4_neon;
    pcVar3 = png_read_filter_row_sub4_neon;
  }
  *(code **)(param_1 + 0x4b8) = pcVar3;
  *(code **)(param_1 + 0x4c8) = pcVar2;
  *(code **)(param_1 + 0x4d0) = pcVar1;
  return;
}


