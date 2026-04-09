// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_decode_pred
// Entry Point: 00e649c0
// Size: 312 bytes
// Signature: undefined silk_stereo_decode_pred(void)


void silk_stereo_decode_pred(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = ec_dec_icdf(param_1,silk_stereo_pred_joint_iCDF,8);
  iVar2 = ec_dec_icdf(param_1,&silk_uniform3_iCDF,8);
  iVar3 = ec_dec_icdf(param_1,&silk_uniform5_iCDF,8);
  iVar4 = ec_dec_icdf(param_1,&silk_uniform3_iCDF,8);
  iVar5 = ec_dec_icdf(param_1,&silk_uniform5_iCDF,8);
  iVar2 = iVar2 + (iVar1 / 5) * 3;
  iVar4 = iVar4 + (iVar1 % 5) * 3;
  iVar4 = (int)(short)(&silk_stereo_pred_quant_Q13)[iVar4] +
          (((int)(short)(&DAT_00564d88)[iVar4] - (int)(short)(&silk_stereo_pred_quant_Q13)[iVar4]) *
           0x199a >> 0x10) * (int)(short)((ushort)(iVar5 << 1) | 1);
  *param_2 = ((int)(short)(&silk_stereo_pred_quant_Q13)[iVar2] +
             (((int)(short)(&DAT_00564d88)[iVar2] - (int)(short)(&silk_stereo_pred_quant_Q13)[iVar2]
              ) * 0x199a >> 0x10) * (int)(short)((ushort)(iVar3 << 1) | 1)) - iVar4;
  param_2[1] = iVar4;
  return;
}


