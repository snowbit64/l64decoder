// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: diagonalize
// Entry Point: 00999028
// Size: 556 bytes
// Signature: undefined __thiscall diagonalize(btMatrix3x3 * this, btMatrix3x3 * param_1, float param_2, int param_3)


/* btMatrix3x3::diagonalize(btMatrix3x3&, float, int) */

void __thiscall
btMatrix3x3::diagonalize(btMatrix3x3 *this,btMatrix3x3 *param_1,float param_2,int param_3)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  if (0 < param_3) {
    do {
      fVar10 = ABS(*(float *)(this + 4));
      fVar12 = ABS(*(float *)(this + 8));
      fVar11 = fVar12;
      if (fVar12 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar13 = ABS(*(float *)(this + 0x18));
      lVar5 = 2;
      if (fVar10 < fVar12) {
        lVar5 = 1;
      }
      lVar8 = 2;
      if (fVar12 <= fVar10) {
        lVar8 = 1;
      }
      bVar1 = fVar11 < fVar13;
      if (bVar1) {
        lVar5 = 0;
        lVar8 = 2;
        fVar11 = fVar13;
      }
      uVar7 = (ulong)bVar1;
      fVar10 = (ABS(*(float *)this) + ABS(*(float *)(this + 0x14)) + ABS(*(float *)(this + 0x28))) *
               param_2;
      iVar4 = param_3;
      if (fVar11 <= fVar10) {
        if (fVar11 <= fVar10 * 1.192093e-07) {
          return;
        }
        iVar4 = 1;
      }
      lVar6 = lVar8 * 4;
      pfVar2 = (float *)(this + lVar8 * 0x14);
      pfVar3 = (float *)(this + uVar7 * 0x14);
      fVar12 = *(float *)(this + lVar6 + uVar7 * 0x10);
      fVar11 = (*pfVar2 - *pfVar3) / (fVar12 + fVar12);
      fVar10 = fVar11 * fVar11;
      if (8.388608e+07 <= fVar10 * fVar10) {
        fVar10 = 1.0 / (fVar11 * (0.5 / fVar10 + 2.0));
        fVar11 = (float)NEON_fmadd(fVar10 * -0.5,fVar10,0x3f800000);
      }
      else {
        fVar13 = -SQRT(fVar10 + 1.0);
        if (0.0 <= fVar11) {
          fVar13 = SQRT(fVar10 + 1.0);
        }
        fVar10 = 1.0 / (fVar11 + fVar13);
        fVar11 = (float)NEON_fmadd(fVar10,fVar10,0x3f800000);
        fVar11 = 1.0 / SQRT(fVar11);
      }
      lVar9 = uVar7 * 4;
      fVar13 = fVar10 * fVar11;
      param_3 = iVar4 + -1;
      *(undefined4 *)(this + lVar9 + lVar8 * 0x10) = 0;
      *(float *)(this + lVar6 + uVar7 * 0x10) = 0.0;
      fVar15 = (float)NEON_fmsub(fVar10,fVar12,*pfVar3);
      *pfVar3 = fVar15;
      fVar10 = (float)NEON_fmadd(fVar10,fVar12,*pfVar2);
      *pfVar2 = fVar10;
      fVar10 = -fVar13;
      uVar16 = NEON_fmadd(fVar11,*(float *)(this + lVar9 + lVar5 * 0x10),
                          *(float *)(this + lVar6 + lVar5 * 0x10) * fVar10);
      uVar14 = NEON_fmadd(fVar11,*(float *)(this + lVar6 + lVar5 * 0x10),
                          fVar13 * *(float *)(this + lVar9 + lVar5 * 0x10));
      *(undefined4 *)(this + lVar5 * 4 + uVar7 * 0x10) = uVar16;
      *(undefined4 *)(this + lVar9 + lVar5 * 0x10) = uVar16;
      *(undefined4 *)(this + lVar5 * 4 + lVar8 * 0x10) = uVar14;
      *(undefined4 *)(this + lVar6 + lVar5 * 0x10) = uVar14;
      fVar12 = *(float *)(param_1 + lVar6 + 0x20);
      fVar15 = *(float *)(param_1 + lVar9 + 0x20);
      uVar16 = NEON_fmadd(fVar11,*(float *)(param_1 + lVar9),*(float *)(param_1 + lVar6) * fVar10);
      uVar14 = NEON_fmadd(fVar11,*(float *)(param_1 + lVar6),fVar13 * *(float *)(param_1 + lVar9));
      uVar18 = NEON_fmadd(fVar11,*(float *)(param_1 + lVar9 + 0x10),
                          *(float *)(param_1 + lVar6 + 0x10) * fVar10);
      uVar17 = NEON_fmadd(fVar11,*(float *)(param_1 + lVar6 + 0x10),
                          fVar13 * *(float *)(param_1 + lVar9 + 0x10));
      *(undefined4 *)(param_1 + lVar9) = uVar16;
      uVar16 = NEON_fmadd(fVar11,fVar15,fVar12 * fVar10);
      *(undefined4 *)(param_1 + lVar6) = uVar14;
      uVar14 = NEON_fmadd(fVar11,fVar12,fVar13 * fVar15);
      *(undefined4 *)(param_1 + lVar9 + 0x10) = uVar18;
      *(undefined4 *)(param_1 + lVar6 + 0x10) = uVar17;
      *(undefined4 *)(param_1 + lVar9 + 0x20) = uVar16;
      *(undefined4 *)(param_1 + lVar6 + 0x20) = uVar14;
    } while (param_3 != 0 && 0 < iVar4);
  }
  return;
}


