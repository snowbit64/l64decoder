// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_encode_mid_only
// Entry Point: 00e875f0
// Size: 20 bytes
// Signature: undefined silk_stereo_encode_mid_only(void)


void silk_stereo_encode_mid_only(undefined8 param_1,char param_2)

{
  ec_enc_icdf(param_1,(int)param_2,&silk_stereo_only_code_mid_iCDF,8);
  return;
}


