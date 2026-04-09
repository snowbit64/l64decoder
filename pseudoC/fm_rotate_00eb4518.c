// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_rotate
// Entry Point: 00eb4518
// Size: 96 bytes
// Signature: undefined __cdecl fm_rotate(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_rotate(float const*, float const*, float*) */

void FLOAT_MATH::fm_rotate(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  if (param_1 != (float *)0x0) {
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    uVar2 = NEON_fmadd(param_1[2],fVar1,fVar4 * param_1[6]);
    fVar3 = (float)NEON_fmadd(param_1[10],fVar5,uVar2);
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar4 +
                  (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar1 +
                  (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(param_1 + 4) * fVar4 +
                  (float)*(undefined8 *)param_1 * fVar1 +
                  (float)*(undefined8 *)(param_1 + 8) * fVar5);
    param_3[2] = fVar3;
    return;
  }
  *param_3 = fVar1;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  return;
}


