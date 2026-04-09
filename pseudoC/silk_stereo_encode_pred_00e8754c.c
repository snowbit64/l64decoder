// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_encode_pred
// Entry Point: 00e8754c
// Size: 164 bytes
// Signature: undefined silk_stereo_encode_pred(void)


void silk_stereo_encode_pred(undefined8 param_1,char *param_2)

{
  ec_enc_icdf(param_1,param_2[2] * 5 + (int)param_2[5],silk_stereo_pred_joint_iCDF,8);
  ec_enc_icdf(param_1,(long)*param_2,&silk_uniform3_iCDF,8);
  ec_enc_icdf(param_1,(long)param_2[1],&silk_uniform5_iCDF,8);
  ec_enc_icdf(param_1,(long)param_2[3],&silk_uniform3_iCDF,8);
  ec_enc_icdf(param_1,(long)param_2[4],&silk_uniform5_iCDF,8);
  return;
}


