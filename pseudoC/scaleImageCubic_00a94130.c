// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scaleImageCubic
// Entry Point: 00a94130
// Size: 1812 bytes
// Signature: undefined __cdecl scaleImageCubic(uchar * param_1, uint param_2, uint param_3, uint param_4, uchar * param_5, uint param_6, uint param_7, uint param_8, CubicType param_9)


/* ImageScale::scaleImageCubic(unsigned char const*, unsigned int, unsigned int, unsigned int,
   unsigned char*, unsigned int, unsigned int, unsigned int, ImageScale::CubicType) */

void ImageScale::scaleImageCubic
               (uchar *param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,uint param_6,
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
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  long local_d0;
  
  if ((param_2 == param_7) && (param_3 == param_8)) {
    memcpy(param_5,param_1,(ulong)(param_3 * param_2 * param_4));
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
    fVar34 = (float)NEON_fmadd(fVar36,0x40000000,fVar37);
    fVar48 = (float)NEON_fmadd(fVar36,0xbeaaaaab,0x3f800000);
    fVar20 = (float)NEON_fnmsub(fVar36,0xc0200000,fVar37 + fVar37);
    fVar43 = (float)NEON_fnmsub(fVar36,0xbfc00000,fVar37);
    fVar34 = fVar34 + -3.0;
    fVar38 = (float)NEON_fmadd(fVar36,0x3fc00000,fVar37);
    fVar39 = fVar36 * 0.1666667;
    uVar32 = NEON_fnmsub(fVar36,0xbf000000,fVar37);
    fVar43 = fVar43 + 2.0;
    uVar14 = 0;
    fVar20 = fVar20 + 3.0;
    uVar35 = NEON_fnmsub(fVar36,0xbe2aaaab,fVar37);
    uVar21 = NEON_fmadd(fVar36,0x3e2aaaab,fVar37);
    iVar10 = param_3 - 1;
    iVar11 = param_2 - 1;
    local_d0 = 0;
    uVar33 = NEON_fmadd(fVar36,0x3f000000,fVar37 + fVar37);
    fVar36 = (float)NEON_fmadd(fVar36,0x3f000000,fVar37);
    fVar37 = -fVar37;
    fVar38 = fVar38 + -2.0;
    do {
      fVar40 = (float)NEON_fmadd((float)(ulong)uVar14,(float)(ulong)param_3 / (float)(ulong)param_8,
                                 0x3f000000);
      iVar15 = (int)fVar40;
      iVar2 = iVar10;
      if (iVar15 + -1 <= iVar10) {
        iVar2 = iVar15 + -1;
      }
      iVar13 = iVar10;
      if (iVar15 <= iVar10) {
        iVar13 = iVar15;
      }
      if (iVar15 < 1) {
        iVar2 = 0;
      }
      iVar8 = 0;
      if (-1 < iVar15) {
        iVar8 = iVar13;
      }
      iVar13 = iVar10;
      if (iVar15 + 1 <= iVar10) {
        iVar13 = iVar15 + 1;
      }
      iVar9 = 0;
      if (iVar15 + 1 < 0 == SCARRY4(iVar15,1)) {
        iVar9 = iVar13;
      }
      iVar13 = iVar10;
      if (iVar15 + 2 <= iVar10) {
        iVar13 = iVar15 + 2;
      }
      iVar7 = 0;
      if (iVar15 + 2 < 0 == SCARRY4(iVar15,2)) {
        iVar7 = iVar13;
      }
      if (param_7 != 0) {
        uVar16 = 0;
        iVar2 = iVar2 * param_2;
        iVar7 = iVar7 * param_2;
        iVar8 = iVar8 * param_2;
        iVar9 = iVar9 * param_2;
        fVar40 = fVar40 - (float)(int)(float)(int)fVar40;
        lVar17 = local_d0;
        do {
          fVar47 = (float)NEON_fmadd((float)(ulong)uVar16,
                                     (float)(ulong)param_2 / (float)(ulong)param_7,0x3f000000);
          iVar13 = (int)fVar47;
          iVar15 = iVar11;
          if (iVar13 + -1 <= iVar11) {
            iVar15 = iVar13 + -1;
          }
          iVar6 = iVar11;
          if (iVar13 <= iVar11) {
            iVar6 = iVar13;
          }
          if (iVar13 < 1) {
            iVar15 = 0;
          }
          iVar3 = 0;
          if (-1 < iVar13) {
            iVar3 = iVar6;
          }
          iVar6 = iVar11;
          if (iVar13 + 1 <= iVar11) {
            iVar6 = iVar13 + 1;
          }
          iVar4 = 0;
          if (iVar13 + 1 < 0 == SCARRY4(iVar13,1)) {
            iVar4 = iVar6;
          }
          iVar6 = iVar11;
          if (iVar13 + 2 <= iVar11) {
            iVar6 = iVar13 + 2;
          }
          iVar5 = 0;
          if (iVar13 + 2 < 0 == SCARRY4(iVar13,2)) {
            iVar5 = iVar6;
          }
          if (param_4 != 0) {
            fVar47 = fVar47 - (float)(int)(float)(int)fVar47;
            fVar19 = fVar47 * fVar47;
            fVar18 = fVar47 * fVar19;
            uVar12 = 0;
            do {
              iVar13 = (int)uVar12;
              fVar25 = (float)NEON_ucvtf((uint)param_1[(iVar3 + iVar2) * param_4 + iVar13]);
              fVar23 = (float)NEON_ucvtf((uint)param_1[(iVar15 + iVar2) * param_4 + iVar13]);
              fVar27 = (float)NEON_ucvtf((uint)param_1[(iVar4 + iVar2) * param_4 + iVar13]);
              fVar25 = fVar25 * 0.003921569;
              fVar23 = fVar23 * 0.003921569;
              fVar27 = fVar27 * 0.003921569;
              fVar28 = (float)NEON_ucvtf((uint)param_1[(iVar5 + iVar2) * param_4 + iVar13]);
              fVar30 = (float)NEON_ucvtf((uint)param_1[(iVar3 + iVar8) * param_4 + iVar13]);
              uVar22 = NEON_fmadd(fVar39,fVar23,fVar48 * fVar25);
              uVar41 = NEON_fmadd(uVar33,fVar23,fVar34 * fVar25);
              fVar29 = (float)NEON_ucvtf((uint)param_1[(iVar15 + iVar8) * param_4 + iVar13]);
              fVar30 = fVar30 * 0.003921569;
              uVar44 = NEON_fmadd(uVar32,fVar23,fVar36 * fVar27);
              fVar31 = (float)NEON_ucvtf((uint)param_1[(iVar4 + iVar8) * param_4 + iVar13]);
              uVar22 = NEON_fmadd(fVar39,fVar27,uVar22);
              uVar42 = NEON_fmadd(fVar20,fVar27,uVar41);
              fVar29 = fVar29 * 0.003921569;
              fVar31 = fVar31 * 0.003921569;
              uVar24 = NEON_fmadd(uVar35,fVar23,fVar43 * fVar25);
              uVar41 = NEON_fmadd(uVar44,fVar47,uVar22);
              uVar42 = NEON_fmadd(fVar37,fVar28 * 0.003921569,uVar42);
              fVar26 = (float)NEON_ucvtf((uint)param_1[(iVar5 + iVar8) * param_4 + iVar13]);
              uVar44 = NEON_fmadd(fVar39,fVar29,fVar48 * fVar30);
              uVar22 = NEON_fmadd(uVar33,fVar29,fVar34 * fVar30);
              uVar24 = NEON_fmadd(fVar38,fVar27,uVar24);
              fVar23 = (float)NEON_ucvtf((uint)param_1[(iVar3 + iVar9) * param_4 + iVar13]);
              uVar41 = NEON_fmadd(uVar42,fVar19,uVar41);
              uVar42 = NEON_fmadd(uVar32,fVar29,fVar36 * fVar31);
              uVar46 = NEON_fmadd(fVar39,fVar31,uVar44);
              uVar22 = NEON_fmadd(fVar20,fVar31,uVar22);
              uVar24 = NEON_fmadd(uVar21,fVar28 * 0.003921569,uVar24);
              uVar44 = NEON_fmadd(uVar35,fVar29,fVar43 * fVar30);
              fVar25 = (float)NEON_ucvtf((uint)param_1[(iVar15 + iVar9) * param_4 + iVar13]);
              fVar23 = fVar23 * 0.003921569;
              fVar30 = (float)NEON_ucvtf((uint)param_1[(iVar4 + iVar9) * param_4 + iVar13]);
              uVar46 = NEON_fmadd(uVar42,fVar47,uVar46);
              uVar22 = NEON_fmadd(fVar37,fVar26 * 0.003921569,uVar22);
              uVar42 = NEON_fmadd(fVar38,fVar31,uVar44);
              fVar25 = fVar25 * 0.003921569;
              fVar27 = (float)NEON_fmadd(uVar24,fVar18,uVar41);
              fVar30 = fVar30 * 0.003921569;
              uVar22 = NEON_fmadd(uVar22,fVar19,uVar46);
              fVar28 = (float)NEON_ucvtf((uint)param_1[(iVar3 + iVar7) * param_4 + iVar13]);
              uVar45 = NEON_fmadd(uVar21,fVar26 * 0.003921569,uVar42);
              fVar29 = (float)NEON_ucvtf((uint)param_1[(iVar5 + iVar9) * param_4 + iVar13]);
              uVar41 = NEON_fmadd(fVar39,fVar25,fVar48 * fVar23);
              uVar44 = NEON_fmadd(uVar33,fVar25,fVar34 * fVar23);
              fVar28 = fVar28 * 0.003921569;
              fVar31 = (float)NEON_ucvtf((uint)param_1[(iVar15 + iVar7) * param_4 + iVar13]);
              fVar26 = (float)NEON_ucvtf((uint)param_1[(iVar4 + iVar7) * param_4 + iVar13]);
              uVar24 = NEON_fmadd(fVar39,fVar30,uVar41);
              uVar42 = NEON_fmadd(uVar32,fVar25,fVar36 * fVar30);
              uVar41 = NEON_fmadd(uVar35,fVar25,fVar43 * fVar23);
              uVar44 = NEON_fmadd(fVar20,fVar30,uVar44);
              fVar31 = fVar31 * 0.003921569;
              fVar26 = fVar26 * 0.003921569;
              uVar42 = NEON_fmadd(uVar42,fVar47,uVar24);
              uVar41 = NEON_fmadd(fVar38,fVar30,uVar41);
              uVar46 = NEON_fmadd(fVar37,fVar29 * 0.003921569,uVar44);
              fVar23 = (float)NEON_fmadd(uVar45,fVar18,uVar22);
              uVar24 = NEON_fmadd(uVar33,fVar31,fVar34 * fVar28);
              fVar30 = (float)NEON_ucvtf((uint)param_1[(iVar5 + iVar7) * param_4 + iVar13]);
              uVar44 = NEON_fmadd(fVar39,fVar31,fVar48 * fVar28);
              uVar46 = NEON_fmadd(uVar46,fVar19,uVar42);
              uVar22 = NEON_fmadd(uVar21,fVar29 * 0.003921569,uVar41);
              uVar41 = NEON_fmadd(fVar20,fVar26,uVar24);
              uVar45 = NEON_fmadd(fVar39,fVar26,uVar44);
              uVar24 = NEON_fmadd(uVar32,fVar31,fVar36 * fVar26);
              uVar44 = NEON_fmadd(uVar35,fVar31,fVar43 * fVar28);
              uVar42 = NEON_fmin(fVar27,0x3f800000);
              fVar25 = (float)NEON_fmadd(uVar22,fVar18,uVar46);
              uVar12 = uVar12 + 1;
              uVar41 = NEON_fmadd(fVar37,fVar30 * 0.003921569,uVar41);
              uVar24 = NEON_fmadd(uVar24,fVar47,uVar45);
              uVar44 = NEON_fmadd(fVar38,fVar26,uVar44);
              fVar28 = (float)NEON_fmin(fVar23,0x3f800000);
              uVar22 = 0;
              if (0.0 <= fVar27) {
                uVar22 = uVar42;
              }
              uVar41 = NEON_fmadd(uVar41,fVar19,uVar24);
              uVar24 = NEON_fmadd(uVar21,fVar30 * 0.003921569,uVar44);
              fVar26 = (float)NEON_fmin(fVar25,0x3f800000);
              fVar27 = 0.0;
              if (0.0 <= fVar23) {
                fVar27 = fVar28;
              }
              fVar28 = (float)NEON_fmadd(uVar24,fVar18,uVar41);
              fVar23 = 0.0;
              if (0.0 <= fVar25) {
                fVar23 = fVar26;
              }
              uVar46 = NEON_fmin(fVar28,0x3f800000);
              uVar24 = NEON_fmadd(fVar39,uVar22,fVar48 * fVar27);
              uVar44 = NEON_fmadd(uVar33,uVar22,fVar34 * fVar27);
              uVar42 = NEON_fmadd(uVar35,uVar22,fVar43 * fVar27);
              uVar41 = 0;
              if (0.0 <= fVar28) {
                uVar41 = uVar46;
              }
              uVar24 = NEON_fmadd(fVar39,fVar23,uVar24);
              uVar46 = NEON_fmadd(uVar32,uVar22,fVar36 * fVar23);
              uVar44 = NEON_fmadd(fVar20,fVar23,uVar44);
              uVar22 = NEON_fmadd(fVar38,fVar23,uVar42);
              uVar42 = NEON_fmadd(uVar21,uVar41,uVar22);
              uVar22 = NEON_fmadd(uVar46,fVar40,uVar24);
              uVar41 = NEON_fmadd(fVar37,uVar41,uVar44);
              uVar22 = NEON_fmadd(uVar41,fVar40 * fVar40,uVar22);
              fVar23 = (float)NEON_fmadd(uVar42,fVar40 * fVar40 * fVar40,uVar22);
              uVar41 = NEON_fmin(fVar23,0x3f800000);
              uVar22 = 0;
              if (0.0 <= fVar23) {
                uVar22 = uVar41;
              }
              fVar23 = (float)NEON_fmadd(uVar22,0x437f0000,0x3f000000);
              param_5[(uint)((int)lVar17 + iVar13)] = (uchar)(int)fVar23;
            } while (param_4 != uVar12);
          }
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + (ulong)param_4;
        } while (uVar16 != param_7);
      }
      uVar14 = uVar14 + 1;
      local_d0 = local_d0 + (ulong)uVar1;
    } while (uVar14 != param_8);
  }
  return;
}


