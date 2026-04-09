// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeCubeFaceMatrix
// Entry Point: 00aa7dec
// Size: 136 bytes
// Signature: undefined __cdecl makeCubeFaceMatrix(uint param_1, float * param_2)


/* RenderDeviceUtil::makeCubeFaceMatrix(unsigned int, float*) */

void RenderDeviceUtil::makeCubeFaceMatrix(uint param_1,float *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 < 6) {
    uVar1 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
    fVar3 = *(float *)(&DAT_00522f4c + uVar1);
    fVar4 = *(float *)(&DAT_00522f7c + uVar1);
    *param_2 = *(float *)(&DAT_00522f34 + uVar1);
    fVar6 = *(float *)(&DAT_00522fac + uVar1);
    fVar2 = *(float *)(&DAT_00522f64 + uVar1);
    param_2[1] = 0.0;
    fVar5 = *(float *)(&DAT_00522f94 + uVar1);
    param_2[8] = fVar3;
    param_2[9] = fVar4;
    param_2[10] = fVar6;
    param_2[2] = fVar3;
    param_2[5] = fVar2;
    param_2[6] = fVar5;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[7] = 0.0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_2[0xb] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 1.0;
  }
  return;
}


