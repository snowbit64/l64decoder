// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImageCubic
// Entry Point: 00a93b38
// Size: 1528 bytes
// Signature: undefined __cdecl scaleImageCubic(float * param_1, uint param_2, uint param_3, uint param_4, float * param_5, uint param_6, uint param_7, uint param_8, CubicType param_9)


/* ImageScale::scaleImageCubic(float const*, unsigned int, unsigned int, unsigned int, float*,
   unsigned int, unsigned int, unsigned int, ImageScale::CubicType) */

void ImageScale::scaleImageCubic
               (float *param_1,uint param_2,uint param_3,uint param_4,float *param_5,uint param_6,
               uint param_7,uint param_8,CubicType param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  long local_b8;
  
  if ((param_2 == param_7) && (param_3 == param_8)) {
    memcpy(param_5,param_1,(ulong)(param_3 * param_2 * param_4) << 2);
    return;
  }
  uVar1 = param_7 * param_4;
  if (param_6 != 0) {
    uVar1 = param_6;
  }
  if (param_9 == 2) {
    fVar36 = 0.0;
    fVar37 = 0.5;
  }
  else if (param_9 == 1) {
    fVar37 = 0.0;
    fVar36 = 1.0;
  }
  else {
    fVar36 = 0.3333333;
    fVar37 = fVar36;
  }
  if (param_8 != 0) {
    fVar22 = (float)NEON_fmadd(fVar36,0x40000000,fVar37);
    fVar39 = (float)NEON_fnmsub(fVar36,0xc0200000,fVar37 + fVar37);
    fVar38 = (float)NEON_fnmsub(fVar36,0xbfc00000,fVar37);
    fVar19 = fVar36 * 0.1666667;
    uVar35 = NEON_fmadd(fVar36,0x3e2aaaab,fVar37);
    uVar15 = 0;
    iVar10 = param_2 - 1;
    fVar38 = fVar38 + 2.0;
    uVar32 = NEON_fnmsub(fVar36,0xbf000000,fVar37);
    local_b8 = 0;
    fVar20 = (float)NEON_fmadd(fVar36,0xbeaaaaab,0x3f800000);
    fVar22 = fVar22 + -3.0;
    fVar39 = fVar39 + 3.0;
    fVar40 = (float)NEON_fmadd(fVar36,0x3fc00000,fVar37);
    iVar11 = param_3 - 1;
    uVar34 = NEON_fnmsub(fVar36,0xbe2aaaab,fVar37);
    fVar40 = fVar40 + -2.0;
    uVar33 = NEON_fmadd(fVar36,0x3f000000,fVar37 + fVar37);
    fVar36 = (float)NEON_fmadd(fVar36,0x3f000000,fVar37);
    fVar37 = -fVar37;
    do {
      fVar41 = (float)NEON_fmadd((float)(ulong)uVar15,(float)(ulong)param_3 / (float)(ulong)param_8,
                                 0x3f000000);
      iVar16 = (int)fVar41;
      iVar2 = iVar11;
      if (iVar16 + -1 <= iVar11) {
        iVar2 = iVar16 + -1;
      }
      iVar12 = iVar11;
      if (iVar16 <= iVar11) {
        iVar12 = iVar16;
      }
      if (iVar16 < 1) {
        iVar2 = 0;
      }
      iVar7 = 0;
      if (-1 < iVar16) {
        iVar7 = iVar12;
      }
      iVar12 = iVar11;
      if (iVar16 + 1 <= iVar11) {
        iVar12 = iVar16 + 1;
      }
      iVar8 = 0;
      if (iVar16 + 1 < 0 == SCARRY4(iVar16,1)) {
        iVar8 = iVar12;
      }
      iVar12 = iVar11;
      if (iVar16 + 2 <= iVar11) {
        iVar12 = iVar16 + 2;
      }
      iVar9 = 0;
      if (iVar16 + 2 < 0 == SCARRY4(iVar16,2)) {
        iVar9 = iVar12;
      }
      if (param_7 != 0) {
        uVar17 = 0;
        iVar2 = iVar2 * param_2;
        iVar7 = iVar7 * param_2;
        iVar8 = iVar8 * param_2;
        iVar9 = iVar9 * param_2;
        fVar41 = fVar41 - (float)(int)(float)(int)fVar41;
        lVar13 = local_b8;
        do {
          fVar44 = (float)NEON_fmadd((float)(ulong)uVar17,
                                     (float)(ulong)param_2 / (float)(ulong)param_7,0x3f000000);
          iVar12 = (int)fVar44;
          iVar16 = iVar10;
          if (iVar12 + -1 <= iVar10) {
            iVar16 = iVar12 + -1;
          }
          iVar6 = iVar10;
          if (iVar12 <= iVar10) {
            iVar6 = iVar12;
          }
          if (iVar12 < 1) {
            iVar16 = 0;
          }
          iVar3 = 0;
          if (-1 < iVar12) {
            iVar3 = iVar6;
          }
          iVar6 = iVar10;
          if (iVar12 + 1 <= iVar10) {
            iVar6 = iVar12 + 1;
          }
          iVar4 = 0;
          if (iVar12 + 1 < 0 == SCARRY4(iVar12,1)) {
            iVar4 = iVar6;
          }
          iVar6 = iVar10;
          if (iVar12 + 2 <= iVar10) {
            iVar6 = iVar12 + 2;
          }
          iVar5 = 0;
          if (iVar12 + 2 < 0 == SCARRY4(iVar12,2)) {
            iVar5 = iVar6;
          }
          if (param_4 != 0) {
            fVar44 = fVar44 - (float)(int)(float)(int)fVar44;
            fVar45 = fVar44 * fVar44;
            fVar46 = fVar44 * fVar45;
            uVar14 = 0;
            do {
              iVar12 = (int)uVar14;
              fVar23 = param_1[(iVar3 + iVar2) * param_4 + iVar12];
              fVar47 = param_1[(iVar16 + iVar2) * param_4 + iVar12];
              fVar24 = param_1[(iVar4 + iVar2) * param_4 + iVar12];
              fVar25 = param_1[(iVar3 + iVar7) * param_4 + iVar12];
              fVar26 = param_1[(iVar16 + iVar7) * param_4 + iVar12];
              fVar29 = param_1[(iVar4 + iVar7) * param_4 + iVar12];
              uVar27 = NEON_fmadd(fVar19,fVar47,fVar20 * fVar23);
              uVar30 = NEON_fmadd(uVar33,fVar47,fVar22 * fVar23);
              uVar21 = NEON_fmadd(uVar32,fVar47,fVar36 * fVar24);
              uVar18 = NEON_fmadd(fVar19,fVar26,fVar20 * fVar25);
              uVar42 = NEON_fmadd(uVar33,fVar26,fVar22 * fVar25);
              uVar48 = NEON_fmadd(uVar34,fVar47,fVar38 * fVar23);
              uVar28 = NEON_fmadd(fVar19,fVar24,uVar27);
              uVar27 = NEON_fmadd(fVar39,fVar24,uVar30);
              uVar43 = NEON_fmadd(uVar32,fVar26,fVar36 * fVar29);
              uVar18 = NEON_fmadd(fVar19,fVar29,uVar18);
              uVar30 = NEON_fmadd(fVar39,fVar29,uVar42);
              fVar47 = param_1[(iVar3 + iVar8) * param_4 + iVar12];
              uVar21 = NEON_fmadd(uVar21,fVar44,uVar28);
              uVar27 = NEON_fmadd(fVar37,param_1[(iVar5 + iVar2) * param_4 + iVar12],uVar27);
              uVar42 = NEON_fmadd(fVar40,fVar24,uVar48);
              fVar23 = param_1[(iVar16 + iVar8) * param_4 + iVar12];
              uVar18 = NEON_fmadd(uVar43,fVar44,uVar18);
              uVar30 = NEON_fmadd(fVar37,param_1[(iVar5 + iVar7) * param_4 + iVar12],uVar30);
              uVar28 = NEON_fmadd(uVar34,fVar26,fVar38 * fVar25);
              uVar21 = NEON_fmadd(uVar27,fVar45,uVar21);
              uVar42 = NEON_fmadd(uVar35,param_1[(iVar5 + iVar2) * param_4 + iVar12],uVar42);
              fVar24 = param_1[(iVar4 + iVar8) * param_4 + iVar12];
              uVar18 = NEON_fmadd(uVar30,fVar45,uVar18);
              uVar27 = NEON_fmadd(fVar19,fVar23,fVar20 * fVar47);
              uVar30 = NEON_fmadd(fVar40,fVar29,uVar28);
              fVar25 = (float)NEON_fmadd(uVar42,fVar46,uVar21);
              fVar26 = param_1[(iVar3 + iVar9) * param_4 + iVar12];
              fVar29 = param_1[(iVar16 + iVar9) * param_4 + iVar12];
              uVar21 = NEON_fmadd(uVar33,fVar23,fVar22 * fVar47);
              uVar27 = NEON_fmadd(fVar19,fVar24,uVar27);
              uVar43 = NEON_fmadd(uVar32,fVar23,fVar36 * fVar24);
              fVar31 = param_1[(iVar4 + iVar9) * param_4 + iVar12];
              uVar28 = NEON_fmadd(uVar34,fVar23,fVar38 * fVar47);
              uVar42 = NEON_fmadd(fVar39,fVar24,uVar21);
              uVar21 = NEON_fmadd(uVar35,param_1[(iVar5 + iVar7) * param_4 + iVar12],uVar30);
              uVar43 = NEON_fmadd(uVar43,fVar44,uVar27);
              uVar27 = NEON_fmadd(fVar19,fVar29,fVar20 * fVar26);
              uVar48 = NEON_fmadd(fVar40,fVar24,uVar28);
              uVar30 = NEON_fmadd(fVar37,param_1[(iVar5 + iVar8) * param_4 + iVar12],uVar42);
              uVar28 = NEON_fmadd(uVar33,fVar29,fVar22 * fVar26);
              fVar24 = (float)NEON_fmadd(uVar21,fVar46,uVar18);
              uVar18 = NEON_fmadd(fVar19,fVar31,uVar27);
              uVar21 = NEON_fmadd(uVar32,fVar29,fVar36 * fVar31);
              uVar27 = NEON_fmadd(uVar34,fVar29,fVar38 * fVar26);
              uVar30 = NEON_fmadd(uVar30,fVar45,uVar43);
              uVar42 = NEON_fmadd(uVar35,param_1[(iVar5 + iVar8) * param_4 + iVar12],uVar48);
              uVar28 = NEON_fmadd(fVar39,fVar31,uVar28);
              uVar18 = NEON_fmadd(uVar21,fVar44,uVar18);
              uVar27 = NEON_fmadd(fVar40,fVar31,uVar27);
              fVar47 = (float)NEON_fmin(fVar25,0x3f800000);
              fVar29 = (float)NEON_fmadd(uVar42,fVar46,uVar30);
              uVar21 = NEON_fmadd(fVar37,param_1[(iVar5 + iVar9) * param_4 + iVar12],uVar28);
              fVar26 = (float)NEON_fmin(fVar24,0x3f800000);
              uVar14 = uVar14 + 1;
              fVar23 = 0.0;
              if (0.0 <= fVar25) {
                fVar23 = fVar47;
              }
              fVar47 = (float)NEON_fmin(fVar29,0x3f800000);
              uVar18 = NEON_fmadd(uVar21,fVar45,uVar18);
              uVar21 = NEON_fmadd(uVar35,param_1[(iVar5 + iVar9) * param_4 + iVar12],uVar27);
              fVar25 = 0.0;
              if (0.0 <= fVar24) {
                fVar25 = fVar26;
              }
              fVar31 = (float)NEON_fmadd(uVar21,fVar46,uVar18);
              fVar24 = 0.0;
              fVar26 = fVar24;
              if (0.0 <= fVar29) {
                fVar26 = fVar47;
              }
              fVar29 = (float)NEON_fmin(fVar31,0x3f800000);
              uVar18 = NEON_fmadd(fVar19,fVar23,fVar20 * fVar25);
              uVar27 = NEON_fmadd(uVar33,fVar23,fVar22 * fVar25);
              uVar21 = NEON_fmadd(uVar34,fVar23,fVar38 * fVar25);
              fVar25 = fVar24;
              if (0.0 <= fVar31) {
                fVar25 = fVar29;
              }
              uVar18 = NEON_fmadd(fVar19,fVar26,uVar18);
              uVar28 = NEON_fmadd(uVar32,fVar23,fVar36 * fVar26);
              uVar27 = NEON_fmadd(fVar39,fVar26,uVar27);
              uVar21 = NEON_fmadd(fVar40,fVar26,uVar21);
              uVar18 = NEON_fmadd(uVar28,fVar41,uVar18);
              uVar27 = NEON_fmadd(fVar37,fVar25,uVar27);
              uVar21 = NEON_fmadd(uVar35,fVar25,uVar21);
              uVar18 = NEON_fmadd(uVar27,fVar41 * fVar41,uVar18);
              fVar23 = (float)NEON_fmadd(uVar21,fVar41 * fVar41 * fVar41,uVar18);
              fVar25 = (float)NEON_fmin(fVar23,0x3f800000);
              if (0.0 <= fVar23) {
                fVar24 = fVar25;
              }
              param_5[(uint)((int)lVar13 + iVar12)] = fVar24;
            } while (param_4 != uVar14);
          }
          uVar17 = uVar17 + 1;
          lVar13 = lVar13 + (ulong)param_4;
        } while (uVar17 != param_7);
      }
      uVar15 = uVar15 + 1;
      local_b8 = local_b8 + (ulong)uVar1;
    } while (uVar15 != param_8);
  }
  return;
}


