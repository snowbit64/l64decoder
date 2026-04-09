// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDirection
// Entry Point: 00b534cc
// Size: 148 bytes
// Signature: undefined __cdecl getDirection(float param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6)


/* CubicBezierUtil::getDirection(float, Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3&) */

void CubicBezierUtil::getDirection
               (float param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
               Vector3 *param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = 1.0 - param_1;
  fVar6 = fVar2 * fVar2;
  fVar1 = param_1 * param_1;
  fVar2 = (param_1 + param_1) * fVar2;
  fVar4 = ((float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2) * fVar6;
  fVar5 = ((float)((ulong)*(undefined8 *)param_3 >> 0x20) -
          (float)((ulong)*(undefined8 *)param_2 >> 0x20)) * fVar6;
  fVar6 = fVar6 * (*(float *)(param_3 + 8) - *(float *)(param_2 + 8));
  *(ulong *)param_6 = CONCAT44(fVar5,fVar4);
  *(float *)(param_6 + 8) = fVar6;
  fVar4 = fVar4 + ((float)*(undefined8 *)param_4 - (float)*(undefined8 *)param_3) * fVar2;
  fVar5 = fVar5 + ((float)((ulong)*(undefined8 *)param_4 >> 0x20) -
                  (float)((ulong)*(undefined8 *)param_3 >> 0x20)) * fVar2;
  uVar3 = NEON_fmadd(*(float *)(param_4 + 8) - *(float *)(param_3 + 8),fVar2,fVar6);
  *(ulong *)param_6 = CONCAT44(fVar5,fVar4);
  *(undefined4 *)(param_6 + 8) = uVar3;
  uVar3 = NEON_fmadd(*(float *)(param_5 + 8) - *(float *)(param_4 + 8),fVar1,uVar3);
  *(ulong *)param_6 =
       CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)param_5 >> 0x20) -
                        (float)((ulong)*(undefined8 *)param_4 >> 0x20)) * fVar1,
                fVar4 + ((float)*(undefined8 *)param_5 - (float)*(undefined8 *)param_4) * fVar1);
  *(undefined4 *)(param_6 + 8) = uVar3;
  return;
}


