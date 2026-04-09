// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParameterMatrix3x4f
// Entry Point: 00aa9f14
// Size: 104 bytes
// Signature: undefined __cdecl setParameterMatrix3x4f(float * param_1, ushort param_2, Matrix4x4 * param_3)


/* ShaderStructLayout::setParameterMatrix3x4f(float*, unsigned short, Matrix4x4 const&) */

void ShaderStructLayout::setParameterMatrix3x4f(float *param_1,ushort param_2,Matrix4x4 *param_3)

{
  float *pfVar1;
  
  pfVar1 = param_1 + param_2;
  *pfVar1 = *(float *)param_3;
  pfVar1[1] = *(float *)(param_3 + 0x10);
  pfVar1[2] = *(float *)(param_3 + 0x20);
  pfVar1[3] = *(float *)(param_3 + 0x30);
  pfVar1[4] = *(float *)(param_3 + 4);
  pfVar1[5] = *(float *)(param_3 + 0x14);
  pfVar1[6] = *(float *)(param_3 + 0x24);
  pfVar1[7] = *(float *)(param_3 + 0x34);
  pfVar1[8] = *(float *)(param_3 + 8);
  pfVar1[9] = *(float *)(param_3 + 0x18);
  pfVar1[10] = *(float *)(param_3 + 0x28);
  pfVar1[0xb] = *(float *)(param_3 + 0x38);
  return;
}


