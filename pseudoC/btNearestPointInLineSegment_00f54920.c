// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btNearestPointInLineSegment
// Entry Point: 00f54920
// Size: 152 bytes
// Signature: undefined __cdecl btNearestPointInLineSegment(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4)


/* btNearestPointInLineSegment(btVector3 const&, btVector3 const&, btVector3 const&, btVector3&) */

void btNearestPointInLineSegment
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *(float *)(param_2 + 8);
  fVar1 = (float)*(undefined8 *)param_2;
  fVar4 = (float)*(undefined8 *)param_3 - fVar1;
  fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar3;
  fVar8 = *(float *)(param_3 + 8) - fVar7;
  fVar9 = (float)NEON_fmadd(fVar8,fVar8,fVar4 * fVar4 + fVar6 * fVar6);
  if (fVar9 < 1.421085e-14) {
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_4 = uVar2;
    return;
  }
  fVar10 = (float)NEON_fmadd(*(float *)(param_1 + 8) - fVar7,fVar8,
                             ((float)*(undefined8 *)param_1 - fVar1) * fVar4 +
                             ((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar3) * fVar6);
  fVar10 = fVar10 / fVar9;
  fVar9 = 0.0;
  if ((0.0 <= fVar10) && (fVar9 = fVar10, 1.0 < fVar10)) {
    fVar9 = 1.0;
  }
  uVar5 = NEON_fmadd(fVar9,fVar8,fVar7);
  *(undefined4 *)(param_4 + 0xc) = 0;
  *(ulong *)param_4 = CONCAT44(fVar3 + fVar6 * fVar9,fVar1 + fVar4 * fVar9);
  *(undefined4 *)(param_4 + 8) = uVar5;
  return;
}


