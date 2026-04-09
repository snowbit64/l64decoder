// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionOffsetAndInvScale
// Entry Point: 008c8a08
// Size: 192 bytes
// Signature: undefined __cdecl getPositionOffsetAndInvScale(float * param_1, float * param_2, bool param_3, float * param_4, float * param_5)


/* IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale(float const*, float const*, bool,
   float*, float&) */

void IndexedTriangleSetGeometryUtil::getPositionOffsetAndInvScale
               (float *param_1,float *param_2,bool param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  *param_4 = (*param_1 + *param_2) * 0.5;
  param_4[1] = (param_1[1] + param_2[1]) * 0.5;
  param_4[2] = (param_1[2] + param_2[2]) * 0.5;
  fVar4 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_1 + 1);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20);
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if (fVar5 <= *param_2 - *param_1) {
    fVar5 = *param_2 - *param_1;
  }
  uVar3 = 0x1000000;
  if (!param_3) {
    uVar3 = 0x8000;
  }
  uVar2 = (uint)(fVar5 * 0.5);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  uVar1 = uVar2 - 1 | uVar2 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar2 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar3 / uVar2;
  }
  *param_5 = (float)(ulong)uVar1;
  return;
}


