// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConnectingQuadraticBezier
// Entry Point: 00742c30
// Size: 512 bytes
// Signature: undefined __cdecl solveConnectingQuadraticBezier(Vector2 * param_1, bool * param_2, Vector2 * param_3, Vector2 * param_4, Vector2 * param_5, Vector2 * param_6, bool param_7, float param_8)


/* WARNING: Removing unreachable block (ram,0x00742c3c) */
/* solveConnectingQuadraticBezier(Vector2*, bool&, Vector2 const&, Vector2 const&, Vector2 const&,
   Vector2 const&, bool, float) */

undefined4
solveConnectingQuadraticBezier
          (Vector2 *param_1,bool *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5,
          Vector2 *param_6,bool param_7,float param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_1 = uVar1;
  uVar2 = *(undefined4 *)param_4;
  fVar4 = *(float *)(param_4 + 4);
  fVar5 = *(float *)param_6;
  fVar6 = *(float *)(param_6 + 4);
  fVar3 = -fVar4;
  fVar8 = (float)NEON_fmadd(uVar2,fVar6,fVar5 * fVar3);
  if (0.01 <= ABS(fVar8)) {
    fVar3 = (float)NEON_fmadd(uVar2,*(float *)(param_5 + 4) - *(float *)(param_3 + 4),
                              (*(float *)param_5 - *(float *)param_3) * fVar3);
    fVar4 = (float)NEON_fmadd(*(float *)param_5 - *(float *)param_3,fVar6,
                              fVar5 * -(*(float *)(param_5 + 4) - *(float *)(param_3 + 4)));
    fVar4 = fVar4 / fVar8;
    if (((0.0 < fVar3 / fVar8) && (0.0 < fVar4)) ||
       ((uVar2 = 0, fVar3 / fVar8 < 0.0 && ((fVar4 < 0.0 && (param_7)))))) {
      *(undefined8 *)(param_1 + 8) = uVar1;
      fVar7 = (float)NEON_fmadd(*(undefined4 *)param_4,fVar4,(float)uVar1);
      fVar5 = (float)((ulong)uVar1 >> 0x20);
      *(float *)(param_1 + 8) = fVar7;
      fVar8 = fVar7 - (float)uVar1;
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 4),fVar4,fVar5);
      *(float *)(param_1 + 0xc) = fVar6;
      fVar5 = fVar6 - fVar5;
      uVar1 = *(undefined8 *)param_5;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      fVar7 = (float)uVar1 - fVar7;
      fVar6 = (float)((ulong)uVar1 >> 0x20) - fVar6;
      fVar10 = fVar7 - fVar8;
      *param_2 = fVar4 < 0.0;
      fVar9 = fVar6 - fVar5;
      fVar11 = (float)NEON_fnmadd(fVar8,fVar10,-(fVar5 * fVar9));
      fVar12 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
      fVar4 = (float)NEON_fmin(fVar11 / fVar12,0x3f800000);
      fVar3 = 0.0;
      if (0.0 <= fVar11 / fVar12) {
        fVar3 = fVar4;
      }
      fVar4 = fVar5 + fVar9 * fVar3;
      fVar3 = fVar8 + fVar10 * fVar3;
      fVar3 = (float)NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
      if (fVar3 == 0.0) {
        fVar3 = INFINITY;
      }
      else {
        fVar4 = (float)NEON_fmadd(fVar8,fVar6,fVar7 * -fVar5);
        fVar3 = (fVar4 * 0.5) / (fVar3 * SQRT(fVar3));
      }
      uVar2 = 3;
      if (param_8 < ABS(fVar3)) {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  fVar5 = (float)NEON_fmadd(uVar2,fVar5,fVar6 * fVar4);
  if (0.0 < fVar5) {
    fVar3 = (float)NEON_fmadd(uVar2,*(float *)(param_5 + 4) - *(float *)(param_3 + 4),
                              (*(float *)param_5 - *(float *)param_3) * fVar3);
    if (ABS(fVar3) < 0.2) {
      fVar3 = (float)NEON_fmadd(uVar2,*(float *)param_5 - *(float *)param_3,
                                fVar4 * (*(float *)(param_5 + 4) - *(float *)(param_3 + 4)));
      *param_2 = fVar3 < 0.0;
      if ((fVar3 >= 0.0) || (param_7)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_5;
        return 2;
      }
    }
  }
  return 0;
}


