// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedNormalAtPoint
// Entry Point: 008e7090
// Size: 928 bytes
// Signature: undefined __cdecl getInterpolatedNormalAtPoint(ushort * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6, float * param_7)


/* TerrainUtil::getInterpolatedNormalAtPoint(unsigned short*, unsigned int, float, float, float,
   float, float*) */

void TerrainUtil::getInterpolatedNormalAtPoint
               (ushort *param_1,uint param_2,float param_3,float param_4,float param_5,float param_6
               ,float *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  if (((param_5 < 0.0) || (param_6 < 0.0)) ||
     (uVar10 = param_2 - 1, (float)(ulong)uVar10 < param_5 || (float)(ulong)uVar10 < param_6)) {
    fVar28 = 0.0;
    *(undefined8 *)param_7 = 0x3f80000000000000;
  }
  else {
    uVar26 = (uint)param_5;
    uVar27 = (uint)param_6;
    uVar3 = uVar10;
    if (uVar26 < uVar10) {
      uVar3 = uVar26 + 1;
    }
    iVar5 = uVar27 * param_2;
    uVar4 = uVar10;
    if (uVar27 < uVar10) {
      uVar4 = uVar27 + 1;
    }
    iVar7 = 0;
    if (uVar27 != 0) {
      iVar7 = uVar27 - 1;
    }
    iVar6 = uVar4 * param_2;
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = uVar3 - 1;
    }
    iVar7 = iVar7 * param_2;
    uVar27 = uVar10;
    if (uVar3 < uVar10) {
      uVar27 = uVar3 + 1;
    }
    iVar8 = 0;
    if (uVar4 != 0) {
      iVar8 = uVar4 - 1;
    }
    fVar28 = (float)NEON_ucvtf((uint)param_1[iVar5 + uVar3]);
    iVar8 = iVar8 * param_2;
    fVar33 = (float)NEON_ucvtf((uint)param_1[iVar7 + uVar3]);
    fVar30 = (float)NEON_ucvtf((uint)param_1[iVar7 + uVar27]);
    if (uVar4 < uVar10) {
      uVar10 = uVar4 + 1;
    }
    fVar17 = (float)NEON_ucvtf((uint)param_1[iVar6 + uVar3]);
    fVar37 = (float)NEON_ucvtf((uint)param_1[iVar6 + uVar26]);
    fVar14 = (float)NEON_ucvtf((uint)param_1[iVar8 + uVar26]);
    fVar19 = (float)NEON_ucvtf((uint)param_1[iVar8 + uVar3]);
    iVar9 = uVar10 * param_2;
    fVar12 = (float)NEON_ucvtf((uint)param_1[uVar27 + iVar5]);
    fVar22 = fVar33 - fVar28;
    iVar2 = 0;
    if (uVar26 != 0) {
      iVar2 = uVar26 - 1;
    }
    fVar14 = fVar14 - fVar37;
    fVar12 = fVar12 - fVar28;
    fVar18 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar6 + iVar1)]);
    fVar42 = fVar17 - fVar37;
    fVar40 = fVar17 - fVar28;
    fVar24 = (float)NEON_ucvtf((uint)param_1[iVar9 + uVar26]);
    fVar25 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar9 + iVar2)]);
    fVar11 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar1 + iVar5)]);
    fVar24 = fVar24 - fVar37;
    fVar20 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar6 + iVar2)]);
    fVar11 = fVar11 - fVar28;
    fVar34 = fVar20 - fVar37;
    fVar31 = (float)NEON_ucvtf((int)param_5);
    fVar41 = (float)NEON_ucvtf((int)param_6);
    fVar31 = param_5 - fVar31;
    fVar41 = param_6 - fVar41;
    fVar29 = param_4 * 6.0;
    fVar23 = fVar31 + fVar41;
    if (fVar23 <= 1.0) {
      fVar23 = (float)NEON_ucvtf((uint)param_1[iVar5 + uVar26]);
      fVar15 = (float)NEON_ucvtf((uint)param_1[iVar7 + uVar26]);
      fVar17 = fVar28 - fVar23;
      fVar15 = fVar15 - fVar23;
      fVar39 = fVar37 - fVar23;
      fVar36 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar5 + iVar2)]);
      fVar36 = fVar36 - fVar23;
      fVar35 = fVar36 + fVar36 + ((fVar20 - fVar23) - fVar39) +
                                 ((((fVar15 - (fVar33 - fVar23)) + 0.0) - fVar17) - fVar17);
      fVar15 = fVar15 + (fVar36 - (fVar20 - fVar23)) +
                        (((((fVar33 - fVar23) - fVar17) + fVar15 + 0.0) - fVar39) - fVar39);
      fVar23 = (1.0 - fVar31) - fVar41;
    }
    else {
      fVar38 = fVar19 - fVar17;
      fVar33 = (float)NEON_ucvtf((uint)param_1[iVar8 + uVar27]);
      fVar21 = (float)NEON_ucvtf((uint)param_1[(uint)(iVar9 + iVar1)]);
      fVar20 = (float)NEON_ucvtf((uint)param_1[iVar6 + uVar27]);
      fVar39 = (float)NEON_ucvtf((uint)param_1[iVar9 + uVar3]);
      fVar20 = fVar20 - fVar17;
      fVar39 = fVar39 - fVar17;
      fVar35 = fVar18 - fVar17;
      fVar36 = 1.0 - fVar41;
      fVar41 = 1.0 - fVar31;
      fVar15 = fVar38 + (fVar35 - (fVar21 - fVar17)) +
                        (((fVar38 + 0.0 + ((fVar33 - fVar17) - fVar20)) - fVar39) - fVar39);
      fVar35 = fVar35 + fVar35 + ((fVar21 - fVar17) - fVar39) +
                                 ((((fVar38 - (fVar33 - fVar17)) + 0.0) - fVar20) - fVar20);
      fVar23 = fVar23 + -1.0;
      fVar31 = fVar36;
    }
    uVar13 = NEON_fmadd((fVar11 + fVar11 + ((fVar18 - fVar28) - fVar40) +
                                           ((((fVar22 - (fVar30 - fVar28)) + 0.0) - fVar12) - fVar12
                                           )) * param_3,fVar31,
                        fVar41 * (fVar34 + fVar34 + ((fVar25 - fVar37) - fVar24) +
                                                    ((((fVar14 - (fVar19 - fVar37)) + 0.0) - fVar42)
                                                    - fVar42)) * param_3);
    uVar16 = NEON_fmadd(fVar29,fVar31,fVar41 * fVar29);
    uVar32 = NEON_fmadd((fVar22 + (fVar11 - (fVar18 - fVar28)) +
                                  (((fVar22 + 0.0 + ((fVar30 - fVar28) - fVar12)) - fVar40) - fVar40
                                  )) * param_3,fVar31,
                        fVar41 * (fVar14 + (fVar34 - (fVar25 - fVar37)) +
                                           (((fVar14 + 0.0 + ((fVar19 - fVar37) - fVar42)) - fVar24)
                                           - fVar24)) * param_3);
    fVar33 = (float)NEON_fmadd(fVar35 * param_3,fVar23,uVar13);
    fVar30 = (float)NEON_fmadd(fVar29,fVar23,uVar16);
    fVar28 = (float)NEON_fmadd(fVar15 * param_3,fVar23,uVar32);
    *param_7 = fVar33;
    param_7[1] = fVar30;
  }
  param_7[2] = fVar28;
  return;
}


