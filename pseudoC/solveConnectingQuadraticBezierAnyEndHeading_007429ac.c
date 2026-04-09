// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConnectingQuadraticBezierAnyEndHeading
// Entry Point: 007429ac
// Size: 644 bytes
// Signature: undefined __cdecl solveConnectingQuadraticBezierAnyEndHeading(Vector2 * param_1, bool * param_2, Vector2 * param_3, Vector2 * param_4, Vector2 * param_5, bool param_6, float param_7)


/* WARNING: Removing unreachable block (ram,0x007429b8) */
/* solveConnectingQuadraticBezierAnyEndHeading(Vector2*, bool&, Vector2 const&, Vector2 const&,
   Vector2 const&, bool, float) */

undefined8
solveConnectingQuadraticBezierAnyEndHeading
          (Vector2 *param_1,bool *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5,
          bool param_6,float param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_1 = uVar1;
  fVar5 = *(float *)(param_5 + 4) - *(float *)(param_3 + 4);
  fVar4 = *(float *)param_5 - *(float *)param_3;
  fVar6 = (float)NEON_fmadd(fVar4,fVar4,fVar5 * fVar5);
  fVar7 = (float)NEON_fmadd(*(undefined4 *)param_4,fVar5,fVar4 * -*(float *)(param_4 + 4));
  if (SQRT(fVar6) * 0.2 <= ABS(fVar7)) {
    uVar3 = *(undefined8 *)param_5;
    fVar4 = 0.3333333;
    fVar5 = (float)((ulong)uVar1 >> 0x20);
    fVar6 = (float)((ulong)uVar3 >> 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    do {
      uVar2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 8) = uVar2;
      fVar11 = (float)NEON_fmadd(*(undefined4 *)param_4,fVar4,(int)uVar2);
      *(float *)(param_1 + 8) = fVar11;
      fVar10 = fVar11 - (float)uVar1;
      fVar11 = (float)uVar3 - fVar11;
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 4),fVar4,(int)((ulong)uVar2 >> 0x20));
      fVar13 = fVar11 - fVar10;
      fVar8 = fVar7 - fVar5;
      fVar9 = fVar6 - fVar7;
      *(float *)(param_1 + 0xc) = fVar7;
      fVar12 = fVar9 - fVar8;
      fVar14 = (float)NEON_fnmadd(fVar10,fVar13,-(fVar8 * fVar12));
      fVar15 = (float)NEON_fmadd(fVar13,fVar13,fVar12 * fVar12);
      fVar16 = (float)NEON_fmin(fVar14 / fVar15,0x3f800000);
      fVar7 = 0.0;
      if (0.0 <= fVar14 / fVar15) {
        fVar7 = fVar16;
      }
      fVar12 = fVar8 + fVar12 * fVar7;
      fVar7 = fVar10 + fVar13 * fVar7;
      fVar7 = (float)NEON_fmadd(fVar7,fVar7,fVar12 * fVar12);
      if (fVar7 == 0.0) {
        fVar7 = INFINITY;
      }
      else {
        fVar8 = (float)NEON_fmadd(fVar10,fVar9,fVar11 * -fVar8);
        fVar7 = (fVar8 * 0.5) / (fVar7 * SQRT(fVar7));
      }
      if (ABS(fVar7) <= param_7) {
        *param_2 = false;
        return 3;
      }
      if (param_6) {
        uVar2 = *(undefined8 *)param_3;
        *(undefined8 *)(param_1 + 8) = uVar2;
        fVar11 = (float)NEON_fmsub(*(undefined4 *)param_4,fVar4,(int)uVar2);
        *(float *)(param_1 + 8) = fVar11;
        fVar10 = fVar11 - (float)uVar1;
        fVar11 = (float)uVar3 - fVar11;
        fVar7 = (float)NEON_fmsub(*(undefined4 *)(param_4 + 4),fVar4,(int)((ulong)uVar2 >> 0x20));
        fVar13 = fVar11 - fVar10;
        fVar8 = fVar7 - fVar5;
        fVar9 = fVar6 - fVar7;
        *(float *)(param_1 + 0xc) = fVar7;
        fVar12 = fVar9 - fVar8;
        fVar14 = (float)NEON_fnmadd(fVar10,fVar13,-(fVar8 * fVar12));
        fVar15 = (float)NEON_fmadd(fVar13,fVar13,fVar12 * fVar12);
        fVar16 = (float)NEON_fmin(fVar14 / fVar15,0x3f800000);
        fVar7 = 0.0;
        if (0.0 <= fVar14 / fVar15) {
          fVar7 = fVar16;
        }
        fVar12 = fVar8 + fVar12 * fVar7;
        fVar7 = fVar10 + fVar13 * fVar7;
        fVar7 = (float)NEON_fmadd(fVar7,fVar7,fVar12 * fVar12);
        if (fVar7 == 0.0) {
          fVar7 = INFINITY;
        }
        else {
          fVar8 = (float)NEON_fmadd(fVar10,fVar9,fVar11 * -fVar8);
          fVar7 = (fVar8 * 0.5) / (fVar7 * SQRT(fVar7));
        }
        if (ABS(fVar7) <= param_7) {
          *param_2 = true;
          return 3;
        }
      }
      fVar4 = fVar4 * 1.25;
    } while (fVar4 < 10.0);
  }
  else {
    fVar4 = (float)NEON_fmadd(*(undefined4 *)param_4,fVar4,fVar5 * *(float *)(param_4 + 4));
    *param_2 = fVar4 < 0.0;
    if ((fVar4 >= 0.0) || (param_6)) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_5;
      return 2;
    }
  }
  return 0;
}


