// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkSplitVertexCollapse
// Entry Point: 00b70890
// Size: 1196 bytes
// Signature: undefined __thiscall checkSplitVertexCollapse(Brep * this, uint param_1, uint param_2)


/* Brep::checkSplitVertexCollapse(unsigned int, unsigned int) */

bool __thiscall Brep::checkSplitVertexCollapse(Brep *this,uint param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  
  uVar13 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar13 = param_1 - 1;
  }
  lVar9 = *(long *)(this + 0x2f68);
  uVar12 = (ulong)param_1;
  lVar10 = *(long *)(this + 0x2f50);
  lVar11 = *(long *)(this + 0x2ef0);
  pfVar18 = (float *)(lVar11 + (ulong)*(ushort *)
                                       (lVar10 + (ulong)*(ushort *)(lVar9 + (ulong)param_2 * 8) *
                                                 0xc) * 0x10);
  pfVar1 = (float *)(lVar11 + (ulong)*(ushort *)
                                      (lVar10 + (ulong)*(ushort *)(lVar9 + (ulong)uVar13 * 8) * 0xc)
                              * 0x10);
  fVar21 = *pfVar1;
  fVar20 = pfVar1[1];
  pfVar2 = (float *)(lVar11 + (ulong)*(ushort *)
                                      (lVar10 + (ulong)*(ushort *)(lVar9 + uVar12 * 8) * 0xc) * 0x10
                    );
  fVar24 = pfVar1[2];
  fVar23 = *pfVar2;
  fVar22 = pfVar2[1];
  fVar27 = pfVar18[1] - fVar20;
  fVar28 = *pfVar18 - fVar21;
  fVar25 = pfVar2[2];
  fVar31 = pfVar18[2] - fVar24;
  fVar29 = fVar22 - fVar20;
  fVar26 = pfVar18[1] - fVar22;
  fVar33 = fVar23 - fVar21;
  fVar38 = *pfVar18 - fVar23;
  fVar34 = fVar25 - fVar24;
  fVar40 = pfVar18[2] - fVar25;
  uVar36 = NEON_fmadd(fVar28,fVar28,fVar27 * fVar27);
  uVar41 = NEON_fmadd(fVar33,fVar33,fVar29 * fVar29);
  uVar43 = NEON_fmadd(fVar38,fVar38,fVar26 * fVar26);
  fVar37 = (float)NEON_fmadd(fVar31,fVar31,uVar36);
  fVar42 = (float)NEON_fmadd(fVar34,fVar34,uVar41);
  fVar44 = (float)NEON_fmadd(fVar40,fVar40,uVar43);
  if ((((3e-05 < fVar37 && fVar42 != 3e-05) && (fVar37 <= 3e-05 || fVar42 >= 3e-05)) &&
      fVar44 != 3e-05) &&
      (((fVar37 <= 3e-05 || fVar42 == 3e-05) || 3e-05 < fVar37 && fVar42 < 3e-05) || 3e-05 <= fVar44
      )) {
    fVar39 = fVar33;
    fVar6 = fVar34;
    fVar7 = fVar29;
    if (fVar42 <= fVar44) {
      fVar39 = fVar38;
      fVar6 = fVar40;
      fVar7 = fVar26;
    }
    fVar26 = (float)NEON_fmadd(fVar31,fVar39,fVar6 * -fVar28);
    uVar41 = NEON_fmadd(fVar27,fVar6,fVar7 * -fVar31);
    uVar36 = NEON_fmadd(fVar28,fVar7,fVar39 * -fVar27);
    uVar41 = NEON_fmadd(uVar41,uVar41,fVar26 * fVar26);
    fVar26 = (float)NEON_fmadd(uVar36,uVar36,uVar41);
    if (fVar37 * 2.5e-05 <= fVar26) {
      return false;
    }
  }
  fVar26 = 0.5;
  if (1e-05 <= fVar37) {
    uVar36 = NEON_fmadd(fVar33,fVar28,fVar29 * fVar27);
    fVar26 = (float)NEON_fmadd(fVar34,fVar31,uVar36);
    fVar26 = fVar26 / fVar37;
  }
  if (this[0x2fb6] == (Brep)0x0) goto LAB_00b70bf0;
  uVar17 = (ulong)*(ushort *)(lVar9 + (ulong)uVar13 * 8 + 2);
  lVar14 = *(long *)(this + 0x2f98);
  uVar16 = (ulong)*(ushort *)(lVar9 + uVar12 * 8 + 2);
  uVar19 = (ulong)*(ushort *)(lVar9 + (ulong)param_2 * 8 + 2);
  pfVar18 = (float *)(lVar14 + uVar17 * 0x18);
  if (fVar26 <= 0.0) {
    fVar27 = pfVar18[3];
    fVar28 = *(float *)(lVar14 + uVar17 * 0x18 + 0x10);
  }
  else {
    fVar27 = *(float *)(lVar14 + uVar19 * 0x18 + 0xc);
    if (1.0 <= fVar26) {
      fVar28 = *(float *)(lVar14 + uVar19 * 0x18 + 0x10);
    }
    else {
      fVar29 = pfVar18[3];
      fVar28 = *(float *)(lVar14 + uVar17 * 0x18 + 0x10);
      fVar27 = fVar29 + fVar26 * (fVar27 - fVar29);
      fVar28 = fVar28 + fVar26 * (*(float *)(lVar14 + uVar19 * 0x18 + 0x10) - fVar28);
    }
  }
  if (0.02 <= ABS(*(float *)(lVar14 + uVar16 * 0x18 + 0xc) - fVar27)) {
    return false;
  }
  if (0.02 <= ABS(*(float *)(lVar14 + uVar16 * 0x18 + 0x10) - fVar28)) {
    return false;
  }
  if (fVar26 <= 0.0) {
    fVar27 = *pfVar18;
    uVar19 = uVar17;
LAB_00b70b70:
    uVar30 = *(undefined8 *)(lVar14 + uVar19 * 0x18 + 4);
  }
  else {
    fVar27 = *(float *)(lVar14 + uVar19 * 0x18);
    if (1.0 <= fVar26) goto LAB_00b70b70;
    uVar30 = *(undefined8 *)(lVar14 + uVar19 * 0x18 + 4);
    uVar32 = *(undefined8 *)(lVar14 + uVar17 * 0x18 + 4);
    fVar28 = (float)uVar32;
    fVar29 = (float)((ulong)uVar32 >> 0x20);
    fVar27 = *pfVar18 + fVar26 * (fVar27 - *pfVar18);
    uVar30 = CONCAT44(fVar29 + ((float)((ulong)uVar30 >> 0x20) - fVar29) * fVar26,
                      fVar28 + ((float)uVar30 - fVar28) * fVar26);
  }
  fVar26 = (float)uVar30;
  fVar31 = (float)NEON_fmadd(fVar27,fVar27,fVar26 * fVar26);
  fVar28 = (float)((ulong)uVar30 >> 0x20);
  fVar31 = fVar31 + fVar28 * fVar28;
  fVar29 = 1.0;
  if (1e-06 < fVar31) {
    fVar29 = 1.0 / SQRT(fVar31);
  }
  puVar15 = (undefined4 *)(lVar14 + uVar16 * 0x18);
  uVar36 = NEON_fmadd(*puVar15,fVar27 * fVar29,fVar26 * fVar29 * (float)puVar15[1]);
  fVar26 = (float)NEON_fmadd(puVar15[2],fVar28 * fVar29,uVar36);
  if (fVar26 < 0.99) {
    return false;
  }
LAB_00b70bf0:
  uVar13 = param_1 - 2;
  if ((param_1 + 1 & 3) != 0) {
    uVar13 = param_1 + 1;
  }
  iVar4 = *(int *)(lVar9 + uVar12 * 8 + 4);
  uVar13 = *(uint *)(lVar9 + (ulong)uVar13 * 8 + 4);
  if (iVar4 != -1) {
    param_1 = iVar4 + 2;
    if ((iVar4 - 1U & 3) != 0) {
      param_1 = iVar4 - 1U;
    }
  }
  bVar8 = true;
  if ((uVar13 != 0xffffffff) && (uVar13 != param_1)) {
    do {
      uVar5 = uVar13 - 2;
      if ((uVar13 + 1 & 3) != 0) {
        uVar5 = uVar13 + 1;
      }
      uVar3 = uVar13 + 2;
      if ((uVar13 - 1 & 3) != 0) {
        uVar3 = uVar13 - 1;
      }
      pfVar18 = (float *)(lVar11 + (ulong)*(ushort *)
                                           (lVar10 + (ulong)*(ushort *)(lVar9 + (ulong)uVar5 * 8) *
                                                     0xc) * 0x10);
      pfVar1 = (float *)(lVar11 + (ulong)*(ushort *)
                                          (lVar10 + (ulong)*(ushort *)(lVar9 + (ulong)uVar3 * 8) *
                                                    0xc) * 0x10);
      fVar28 = *pfVar18;
      fVar34 = pfVar18[1];
      fVar33 = pfVar18[2];
      fVar26 = *pfVar1 - fVar28;
      fVar29 = pfVar1[2] - fVar33;
      fVar27 = pfVar1[1] - fVar34;
      fVar37 = (float)NEON_fmadd(fVar29,fVar23 - fVar28,(fVar25 - fVar33) * -fVar26);
      fVar31 = (float)NEON_fmadd(fVar29,fVar21 - fVar28,(fVar24 - fVar33) * -fVar26);
      uVar35 = NEON_fmadd(fVar27,fVar25 - fVar33,(fVar22 - fVar34) * -fVar29);
      uVar41 = NEON_fmadd(fVar27,fVar24 - fVar33,(fVar20 - fVar34) * -fVar29);
      uVar43 = NEON_fmadd(fVar26,fVar22 - fVar34,(fVar23 - fVar28) * -fVar27);
      uVar36 = NEON_fmadd(fVar26,fVar20 - fVar34,(fVar21 - fVar28) * -fVar27);
      uVar41 = NEON_fmadd(uVar35,uVar41,fVar37 * fVar31);
      fVar26 = (float)NEON_fmadd(uVar43,uVar36,uVar41);
      if (fVar26 < 0.0) {
        return false;
      }
      uVar13 = *(uint *)(lVar9 + (ulong)uVar5 * 8 + 4);
    } while ((uVar13 != 0xffffffff) && (uVar13 != param_1));
    bVar8 = uVar13 == 0xffffffff || uVar13 == param_1;
  }
  return bVar8;
}


