// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_decode_mid_only
// Entry Point: 00e64af8
// Size: 48 bytes
// Signature: undefined silk_stereo_decode_mid_only(void)


void silk_stereo_decode_mid_only(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = ec_dec_icdf(param_1,&silk_stereo_only_code_mid_iCDF,8);
  *param_2 = uVar1;
  return;
}


