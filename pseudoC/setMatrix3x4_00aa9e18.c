// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMatrix3x4
// Entry Point: 00aa9e18
// Size: 100 bytes
// Signature: undefined __cdecl setMatrix3x4(float * param_1, Matrix4x4 * param_2)


/* ShaderStructLayout::setMatrix3x4(float (*) [4], Matrix4x4 const&) */

void ShaderStructLayout::setMatrix3x4(float *param_1,Matrix4x4 *param_2)

{
  *param_1 = *(float *)param_2;
  param_1[1] = *(float *)(param_2 + 0x10);
  param_1[2] = *(float *)(param_2 + 0x20);
  param_1[3] = *(float *)(param_2 + 0x30);
  param_1[4] = *(float *)(param_2 + 4);
  param_1[5] = *(float *)(param_2 + 0x14);
  param_1[6] = *(float *)(param_2 + 0x24);
  param_1[7] = *(float *)(param_2 + 0x34);
  param_1[8] = *(float *)(param_2 + 8);
  param_1[9] = *(float *)(param_2 + 0x18);
  param_1[10] = *(float *)(param_2 + 0x28);
  param_1[0xb] = *(float *)(param_2 + 0x38);
  return;
}


