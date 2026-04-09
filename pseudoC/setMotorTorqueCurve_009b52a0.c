// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMotorTorqueCurve
// Entry Point: 009b52a0
// Size: 636 bytes
// Signature: undefined __thiscall setMotorTorqueCurve(Bt2RaycastVehicle * this, uint param_1, float * param_2, float * param_3)


/* Bt2RaycastVehicle::setMotorTorqueCurve(unsigned int, float const*, float const*) */

void __thiscall
Bt2RaycastVehicle::setMotorTorqueCurve
          (Bt2RaycastVehicle *this,uint param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  
  uVar12 = (ulong)param_1;
  pfVar13 = *(float **)(this + 0x130);
  if (*(uint *)(this + 0x128) == param_1) {
    pfVar2 = *(float **)(this + 0x138);
  }
  else {
    if (pfVar13 != (float *)0x0) {
      operator_delete__(pfVar13);
    }
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    pfVar13 = (float *)operator_new__(uVar12 << 2);
    *(float **)(this + 0x130) = pfVar13;
    pfVar2 = (float *)operator_new__(uVar12 << 2);
    *(uint *)(this + 0x128) = param_1;
    *(float **)(this + 0x138) = pfVar2;
  }
  fVar14 = 0.0;
  if (param_1 == 0) goto LAB_009b5504;
  fVar14 = 0.0;
  if (param_1 < 8) {
    uVar3 = 0;
LAB_009b5418:
    lVar4 = uVar12 - uVar3;
    pfVar6 = param_2 + uVar3;
    pfVar13 = pfVar13 + uVar3;
    pfVar9 = param_3 + uVar3;
    pfVar2 = pfVar2 + uVar3;
    do {
      lVar4 = lVar4 + -1;
      *pfVar13 = *pfVar6;
      *pfVar2 = *pfVar9;
      pfVar6 = pfVar6 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar2 = pfVar2 + 1;
    } while (lVar4 != 0);
  }
  else {
    uVar3 = 0;
    pfVar6 = pfVar2 + uVar12;
    pfVar9 = pfVar13 + uVar12;
    if ((((pfVar13 < pfVar6 && pfVar2 < pfVar9) || (pfVar13 < param_2 + uVar12 && param_2 < pfVar9))
        || (pfVar13 < param_3 + uVar12 && param_3 < pfVar9)) ||
       ((pfVar2 < param_2 + uVar12 && param_2 < pfVar6 ||
        (pfVar2 < param_3 + uVar12 && param_3 < pfVar6)))) goto LAB_009b5418;
    uVar3 = uVar12 & 0xfffffff8;
    puVar5 = (undefined8 *)(param_2 + 4);
    puVar7 = (undefined8 *)(pfVar2 + 4);
    puVar8 = (undefined8 *)(pfVar13 + 4);
    puVar10 = (undefined8 *)(param_3 + 4);
    uVar11 = uVar3;
    do {
      puVar1 = puVar5 + -1;
      uVar16 = puVar5[-2];
      uVar20 = puVar5[1];
      uVar19 = *puVar5;
      uVar11 = uVar11 - 8;
      puVar5 = puVar5 + 4;
      uVar23 = puVar10[-1];
      uVar22 = puVar10[-2];
      uVar26 = puVar10[1];
      uVar25 = *puVar10;
      puVar8[-1] = *puVar1;
      puVar8[-2] = uVar16;
      puVar8[1] = uVar20;
      *puVar8 = uVar19;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
      puVar7[-1] = uVar23;
      puVar7[-2] = uVar22;
      puVar7[1] = uVar26;
      *puVar7 = uVar25;
      puVar7 = puVar7 + 4;
    } while (uVar11 != 0);
    if (uVar3 != uVar12) goto LAB_009b5418;
  }
  if (1 < param_1) {
    pfVar13 = *(float **)(this + 0x130);
    pfVar2 = *(float **)(this + 0x138);
    fVar15 = 0.0;
    fVar14 = 0.0;
    lVar4 = uVar12 - 1;
    fVar17 = *pfVar13;
    fVar24 = *pfVar2;
    do {
      pfVar13 = pfVar13 + 1;
      pfVar2 = pfVar2 + 1;
      fVar21 = *pfVar2;
      fVar18 = *pfVar13;
      fVar27 = fVar18;
      if (0.0001 < ABS(fVar24 - fVar21)) {
        fVar28 = (float)NEON_fmadd(fVar18,fVar24,fVar21 * -fVar17);
        fVar28 = fVar28 / ((fVar24 - fVar21) + (fVar24 - fVar21));
        fVar27 = fVar17;
        if ((fVar17 <= fVar28) && (fVar27 = fVar18, fVar28 <= fVar18)) {
          fVar27 = fVar28;
        }
      }
      fVar24 = (float)NEON_fmadd((fVar27 - fVar17) / (fVar18 - fVar17),fVar21 - fVar24,fVar24);
      fVar17 = fVar27 * fVar24;
      if (fVar27 * fVar24 <= fVar15) {
        fVar17 = fVar15;
        fVar27 = fVar14;
      }
      fVar14 = fVar27;
      fVar15 = fVar17;
      lVar4 = lVar4 + -1;
      fVar17 = fVar18;
      fVar24 = fVar21;
    } while (lVar4 != 0);
  }
LAB_009b5504:
  *(float *)(this + 0x100) = fVar14;
  return;
}


