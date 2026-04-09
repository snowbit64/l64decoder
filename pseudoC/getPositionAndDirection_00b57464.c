// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 00b57464
// Size: 272 bytes
// Signature: undefined __thiscall getPositionAndDirection(LinearSpline * this, float param_1, Vector3 * param_2, Vector3 * param_3)


/* LinearSpline::getPositionAndDirection(float, Vector3&, Vector3&) const */

void __thiscall
LinearSpline::getPositionAndDirection
          (LinearSpline *this,float param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  if (*(int *)(this + 8) == 0) {
    fVar11 = (float)NEON_fmin(param_1,0x3f800000);
    fVar9 = 0.0;
    if (0.0 <= param_1) {
      fVar9 = fVar11;
    }
  }
  else {
    fVar9 = param_1 - (float)(int)param_1;
  }
  uVar4 = *(uint *)(this + 0x28);
  lVar6 = *(long *)(this + 0x10);
  fVar9 = fVar9 * *(float *)(this + 0x2c);
  if (uVar4 != 0) {
    uVar7 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      if (*(float *)(lVar6 + (ulong)uVar5 * 4) < fVar9) {
        uVar7 = uVar5 + 1;
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar7 < uVar8);
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      goto LAB_00b574dc;
    }
  }
  uVar7 = 0;
LAB_00b574dc:
  uVar8 = uVar7 + 1;
  fVar12 = *(float *)(lVar6 + (ulong)uVar7 * 4);
  fVar11 = 0.0;
  pfVar3 = (float *)(lVar6 + (ulong)uVar8 * 4);
  if (uVar4 <= uVar8) {
    pfVar3 = (float *)(this + 0x2c);
  }
  fVar14 = *pfVar3 - fVar12;
  if (0.0 < fVar14) {
    fVar11 = (fVar9 - fVar12) / fVar14;
  }
  puVar1 = (undefined8 *)(*(long *)(this + 0x18) + (ulong)(uVar7 * 3) * 4);
  puVar2 = (undefined8 *)(*(long *)(this + 0x18) + (ulong)(uVar8 * 3) * 4);
  uVar10 = *puVar1;
  fVar13 = *(float *)(puVar1 + 1);
  uVar16 = *puVar2;
  fVar9 = (float)uVar10;
  fVar15 = (float)uVar16 - fVar9;
  fVar12 = (float)((ulong)uVar10 >> 0x20);
  fVar17 = (float)((ulong)uVar16 >> 0x20) - fVar12;
  fVar18 = *(float *)(puVar2 + 1) - fVar13;
  fVar14 = (float)NEON_fmadd(fVar11,0,fVar18);
  *(ulong *)param_2 = CONCAT44(fVar12 + fVar17 * fVar11,fVar9 + fVar15 * fVar11);
  *(float *)(param_2 + 8) = fVar13 + fVar11 * fVar18;
  *(ulong *)param_3 = CONCAT44(fVar17 + fVar11 * 0.0 + 0.0,fVar15 + fVar11 * 0.0 + 0.0);
  *(float *)(param_3 + 8) = fVar14 + 0.0;
  return;
}


