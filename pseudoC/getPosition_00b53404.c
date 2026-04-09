// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPosition
// Entry Point: 00b53404
// Size: 200 bytes
// Signature: undefined __cdecl getPosition(float param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6)


/* CubicBezierUtil::getPosition(float, Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3&) */

void CubicBezierUtil::getPosition
               (float param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,Vector3 *param_5,
               Vector3 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar4 = *(undefined4 *)(param_2 + 8);
  fVar1 = 1.0 - param_1;
  *(undefined8 *)param_6 = *(undefined8 *)param_2;
  fVar6 = *(float *)param_6;
  fVar8 = *(float *)(param_6 + 4);
  *(undefined4 *)(param_6 + 8) = uVar4;
  fVar10 = *(float *)(param_6 + 8);
  fVar5 = fVar1 * fVar1 * fVar1;
  fVar3 = fVar1 * fVar1 * 3.0 * param_1;
  fVar2 = param_1 * param_1 * fVar1 * 3.0;
  fVar1 = param_1 * param_1 * param_1;
  *(float *)param_6 = fVar5 * fVar6;
  *(float *)(param_6 + 4) = fVar5 * fVar8;
  *(float *)(param_6 + 8) = fVar5 * fVar10;
  uVar7 = NEON_fmadd(*(undefined4 *)param_3,fVar3,fVar5 * fVar6);
  *(undefined4 *)param_6 = uVar7;
  uVar9 = NEON_fmadd(*(undefined4 *)(param_3 + 4),fVar3,fVar5 * fVar8);
  *(undefined4 *)(param_6 + 4) = uVar9;
  uVar4 = NEON_fmadd(*(undefined4 *)(param_3 + 8),fVar3,fVar5 * fVar10);
  *(undefined4 *)(param_6 + 8) = uVar4;
  uVar7 = NEON_fmadd(*(undefined4 *)param_4,fVar2,uVar7);
  *(undefined4 *)param_6 = uVar7;
  uVar9 = NEON_fmadd(*(undefined4 *)(param_4 + 4),fVar2,uVar9);
  *(undefined4 *)(param_6 + 4) = uVar9;
  uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 8),fVar2,uVar4);
  *(undefined4 *)(param_6 + 8) = uVar4;
  uVar7 = NEON_fmadd(*(undefined4 *)param_5,fVar1,uVar7);
  *(undefined4 *)param_6 = uVar7;
  uVar7 = NEON_fmadd(*(undefined4 *)(param_5 + 4),fVar1,uVar9);
  *(undefined4 *)(param_6 + 4) = uVar7;
  uVar4 = NEON_fmadd(*(undefined4 *)(param_5 + 8),fVar1,uVar4);
  *(undefined4 *)(param_6 + 8) = uVar4;
  return;
}


