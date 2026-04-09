// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveHardConstraints
// Entry Point: 008cf964
// Size: 1792 bytes
// Signature: undefined solveHardConstraints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::solveHardConstraints() */

void FillPlaneGeometry::solveHardConstraints(void)

{
  uint uVar1;
  short sVar2;
  FillPlaneGeometry *in_x0;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  lVar16 = *(long *)(in_x0 + 0xe0);
  fVar33 = *(float *)(in_x0 + 0x194);
  uVar17 = *(long *)(in_x0 + 0xe8) - lVar16 >> 5;
  fVar34 = *(float *)(in_x0 + 0x11c) * (float)(uVar17 & 0xffffffff);
  fVar26 = tanf(fVar33);
  fVar33 = cosf(fVar33);
  uVar1 = *(uint *)(in_x0 + 0x68);
  uVar17 = uVar17 & 0xffffffff;
  fVar27 = (1.0 / fVar34) * 0.25;
  iVar14 = 0;
  uVar15 = uVar1 / 3;
  if (uVar1 / 3 < 2) {
    uVar15 = 1;
  }
  do {
    if (uVar17 != 0) {
      lVar3 = 0;
      lVar5 = 0;
      while( true ) {
        lVar7 = lVar16 + lVar5;
        lVar6 = *(long *)(in_x0 + 0xb0);
        pfVar8 = *(float **)(lVar6 + (ulong)*(ushort *)(lVar7 + 0x14) * 8);
        fVar29 = *(float *)(lVar7 + 8) * *pfVar8;
        fVar28 = *(float *)(lVar7 + 8) * pfVar8[2];
        if ((ulong)*(ushort *)(lVar7 + 0x16) != 0xffff) {
          puVar9 = *(undefined4 **)(lVar6 + (ulong)*(ushort *)(lVar7 + 0x16) * 8);
          fVar29 = (float)NEON_fmadd(*puVar9,*(undefined4 *)(lVar7 + 0xc),fVar29);
          fVar28 = (float)NEON_fmadd(puVar9[2],*(undefined4 *)(lVar7 + 0xc),fVar28);
          if ((ulong)*(ushort *)(lVar7 + 0x18) != 0xffff) {
            puVar9 = *(undefined4 **)(lVar6 + (ulong)*(ushort *)(lVar7 + 0x18) * 8);
            uVar30 = *(undefined4 *)(lVar16 + lVar5 + 0x10);
            fVar29 = (float)NEON_fmadd(*puVar9,uVar30,fVar29);
            fVar28 = (float)NEON_fmadd(puVar9[2],uVar30,fVar28);
          }
        }
        fVar31 = (float)NEON_fmadd(*(undefined4 *)(lVar16 + lVar5),fVar34,
                                   *(undefined4 *)(in_x0 + 0x9c));
        pfVar8 = (float *)(*(long *)(in_x0 + 0x158) + lVar3);
        *pfVar8 = fVar29;
        pfVar8[1] = fVar31;
        pfVar8[2] = fVar28;
        if (uVar17 * 0x20 + -0x20 == lVar5) break;
        lVar16 = *(long *)(in_x0 + 0xe0);
        lVar5 = lVar5 + 0x20;
        lVar3 = lVar3 + 0xc;
      }
    }
    lVar16 = *(long *)(in_x0 + 0xe0);
    if (2 < uVar1) {
      uVar4 = 0;
      lVar3 = *(long *)(in_x0 + 0x158);
      lVar5 = *(long *)(in_x0 + 0xf8);
      fVar28 = (float)((ulong)(*(long *)(in_x0 + 0xe8) - lVar16) >> 5 & 0xffffffff);
      lVar7 = *(long *)(in_x0 + 0xb0);
      do {
        puVar10 = (ushort *)(lVar5 + uVar4 * 6);
        uVar20 = (ulong)puVar10[1];
        uVar22 = (ulong)*puVar10;
        uVar13 = (ulong)puVar10[2];
        pfVar11 = (float *)(lVar3 + uVar20 * 0xc);
        pfVar8 = (float *)(lVar16 + uVar20 * 0x20);
        pfVar12 = (float *)(lVar3 + uVar22 * 0xc);
        pfVar21 = (float *)(lVar16 + uVar22 * 0x20);
        pfVar18 = (float *)(lVar3 + uVar13 * 0xc);
        fVar36 = *pfVar11;
        fVar39 = *pfVar12;
        fVar40 = pfVar11[2];
        fVar42 = pfVar12[2];
        fVar43 = pfVar18[2];
        fVar37 = pfVar11[1];
        fVar44 = *pfVar18;
        pfVar19 = (float *)(lVar16 + uVar13 * 0x20);
        fVar38 = pfVar12[1];
        fVar35 = pfVar18[1];
        fVar49 = (float)NEON_fmadd(fVar40 - fVar42,fVar44 - fVar39,
                                   (fVar43 - fVar42) * -(fVar36 - fVar39));
        fVar46 = (float)NEON_fmadd(fVar37 - fVar38,fVar43 - fVar42,
                                   (fVar35 - fVar38) * -(fVar40 - fVar42));
        fVar45 = (float)NEON_fmadd(fVar36 - fVar39,fVar35 - fVar38,
                                   (fVar44 - fVar39) * -(fVar37 - fVar38));
        uVar30 = NEON_fmadd(fVar46,fVar46,fVar49 * fVar49);
        fVar32 = *pfVar21;
        fVar31 = *pfVar8;
        fVar47 = (float)NEON_fmadd(fVar45,fVar45,uVar30);
        fVar29 = *pfVar19;
        if (fVar47 == 0.0) {
          fVar36 = (fVar37 + fVar38 + fVar35) / 3.0;
          fVar32 = (float)NEON_fmadd(fVar27 * (fVar36 - fVar38),0x3f000000,fVar32);
          fVar31 = (float)NEON_fmadd(fVar27 * (fVar36 - fVar37),0x3f000000,fVar31);
          fVar29 = (float)NEON_fmadd(fVar27 * (fVar36 - fVar35),0x3f000000,fVar29);
        }
        else {
          fVar47 = 1.0 / SQRT(fVar47);
          if (fVar49 * fVar47 < fVar33) {
            if (0.34202 <= fVar49 * fVar47) {
              fVar45 = fVar45 * fVar47;
              fVar46 = fVar46 * fVar47;
              fVar49 = (float)NEON_fmadd(fVar46,fVar46,fVar45 * fVar45);
              fVar47 = 1.0;
              if (1e-06 < fVar49) {
                fVar47 = 1.0 / SQRT(fVar49);
              }
              fVar45 = fVar45 * fVar47;
              fVar46 = fVar46 * fVar47;
              fVar49 = (float)NEON_fmadd(fVar46,fVar39,fVar42 * fVar45);
              fVar47 = (float)NEON_fmadd(fVar46,fVar36,fVar40 * fVar45);
              fVar41 = (float)NEON_fmadd(fVar46,fVar44,fVar43 * fVar45);
              fVar48 = (fVar37 + fVar38 + fVar35) / 3.0;
              fVar40 = (float)NEON_fmadd((fVar36 + fVar39 + fVar44) / 3.0,fVar46,
                                         ((fVar40 + fVar42 + fVar43) / 3.0) * fVar45);
              fVar39 = (float)NEON_fmsub(fVar49 - fVar40,fVar26,fVar48);
              fVar36 = (float)NEON_fmsub(fVar47 - fVar40,fVar26,fVar48);
              fVar32 = (float)NEON_fmadd(fVar39 - fVar38,fVar27,fVar32);
              fVar31 = (float)NEON_fmadd(fVar36 - fVar37,fVar27,fVar31);
              fVar36 = (float)NEON_fmsub(fVar41 - fVar40,fVar26,fVar48);
            }
            else {
              fVar36 = (fVar37 + fVar38 + fVar35) / 3.0;
              fVar32 = (float)NEON_fmadd(fVar36 - fVar38,fVar27,fVar32);
              fVar31 = (float)NEON_fmadd(fVar36 - fVar37,fVar27,fVar31);
            }
            lVar6 = lVar16 + uVar22 * 0x20;
            *pfVar21 = fVar32;
            if (*(short *)(lVar6 + 0x16) == -1) {
              fVar37 = *(float *)(in_x0 + 0x9c);
              fVar38 = (float)NEON_fmadd(fVar32 * fVar28,*(undefined4 *)(in_x0 + 0x11c),fVar37);
              if ((fVar37 <= fVar38) &&
                 (fVar37 = *(float *)(in_x0 + 0xa8), fVar38 <= *(float *)(in_x0 + 0xa8))) {
                fVar37 = fVar38;
              }
              pfVar23 = *(float **)(lVar7 + (ulong)*(ushort *)(lVar6 + 0x14) * 8);
              pfVar21 = *(float **)(pfVar23 + 4);
              do {
                pfVar24 = pfVar21;
                pfVar21 = pfVar24 + 3;
                fVar38 = pfVar24[4];
                pfVar25 = (float *)(*(long *)(pfVar23 + 6) + -0xc);
                if (pfVar21 == (float *)(*(long *)(pfVar23 + 6) + -0xc)) break;
                pfVar25 = pfVar21;
              } while (fVar37 < fVar38);
              fVar42 = pfVar24[2];
              fVar43 = pfVar24[5];
              fVar39 = *pfVar24;
              fVar38 = (fVar37 - fVar38) / (pfVar24[1] - fVar38);
              fVar40 = *pfVar25;
              pfVar23[1] = fVar37;
              fVar39 = (float)NEON_fmadd(fVar39 - fVar40,fVar38,fVar40);
              fVar37 = (float)NEON_fmadd(fVar42 - fVar43,fVar38,fVar43);
              *pfVar23 = fVar39 + pfVar23[10];
              pfVar23[2] = fVar37 + pfVar23[0xb];
            }
            lVar6 = lVar16 + uVar20 * 0x20;
            *pfVar8 = fVar31;
            if (*(short *)(lVar6 + 0x16) == -1) {
              fVar37 = *(float *)(in_x0 + 0x9c);
              fVar38 = (float)NEON_fmadd(fVar31 * fVar28,*(undefined4 *)(in_x0 + 0x11c),fVar37);
              if ((fVar37 <= fVar38) &&
                 (fVar37 = *(float *)(in_x0 + 0xa8), fVar38 <= *(float *)(in_x0 + 0xa8))) {
                fVar37 = fVar38;
              }
              pfVar21 = *(float **)(lVar7 + (ulong)*(ushort *)(lVar6 + 0x14) * 8);
              pfVar8 = *(float **)(pfVar21 + 4);
              do {
                pfVar25 = pfVar8;
                pfVar8 = pfVar25 + 3;
                fVar38 = pfVar25[4];
                pfVar23 = (float *)(*(long *)(pfVar21 + 6) + -0xc);
                if (pfVar8 == (float *)(*(long *)(pfVar21 + 6) + -0xc)) break;
                pfVar23 = pfVar8;
              } while (fVar37 < fVar38);
              fVar42 = pfVar25[2];
              fVar43 = pfVar25[5];
              fVar39 = *pfVar25;
              fVar38 = (fVar37 - fVar38) / (pfVar25[1] - fVar38);
              fVar40 = *pfVar23;
              pfVar21[1] = fVar37;
              fVar39 = (float)NEON_fmadd(fVar39 - fVar40,fVar38,fVar40);
              fVar37 = (float)NEON_fmadd(fVar42 - fVar43,fVar38,fVar43);
              *pfVar21 = fVar39 + pfVar21[10];
              pfVar21[2] = fVar37 + pfVar21[0xb];
            }
            lVar6 = lVar16 + uVar13 * 0x20;
            sVar2 = *(short *)(lVar6 + 0x16);
            fVar29 = (float)NEON_fmadd(fVar36 - fVar35,fVar27,fVar29);
            *pfVar19 = fVar29;
            if (sVar2 == -1) {
              fVar35 = *(float *)(in_x0 + 0x9c);
              fVar36 = (float)NEON_fmadd(fVar29 * fVar28,*(undefined4 *)(in_x0 + 0x11c),fVar35);
              if ((fVar35 <= fVar36) &&
                 (fVar35 = *(float *)(in_x0 + 0xa8), fVar36 <= *(float *)(in_x0 + 0xa8))) {
                fVar35 = fVar36;
              }
              pfVar21 = *(float **)(lVar7 + (ulong)*(ushort *)(lVar6 + 0x14) * 8);
              pfVar8 = *(float **)(pfVar21 + 4);
              do {
                pfVar23 = pfVar8;
                pfVar8 = pfVar23 + 3;
                fVar36 = pfVar23[4];
                pfVar19 = (float *)(*(long *)(pfVar21 + 6) + -0xc);
                if (pfVar8 == (float *)(*(long *)(pfVar21 + 6) + -0xc)) break;
                pfVar19 = pfVar8;
              } while (fVar35 < fVar36);
              fVar36 = (fVar35 - fVar36) / (pfVar23[1] - fVar36);
              fVar37 = (float)NEON_fmadd(*pfVar23 - *pfVar19,fVar36,*pfVar19);
              fVar36 = (float)NEON_fmadd(pfVar23[2] - pfVar23[5],fVar36,pfVar23[5]);
              *pfVar21 = fVar37 + pfVar21[10];
              pfVar21[1] = fVar35;
              pfVar21[2] = fVar36 + pfVar21[0xb];
            }
          }
        }
        uVar4 = uVar4 + 1;
        fVar32 = (float)NEON_fmadd(fVar32,fVar34,*(undefined4 *)(in_x0 + 0x9c));
        pfVar12[1] = fVar32;
        fVar31 = (float)NEON_fmadd(fVar31,fVar34,*(undefined4 *)(in_x0 + 0x9c));
        pfVar11[1] = fVar31;
        fVar29 = (float)NEON_fmadd(fVar29,fVar34,*(undefined4 *)(in_x0 + 0x9c));
        pfVar18[1] = fVar29;
      } while (uVar4 != uVar15);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0xf);
  pfVar8 = *(float **)(in_x0 + 0xe0);
  pfVar21 = *(float **)(in_x0 + 0xe8);
  uVar17 = (long)pfVar21 - (long)pfVar8;
  if (uVar17 == 0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = 0.0;
    lVar16 = *(long *)(in_x0 + 0xb0);
    do {
      fVar33 = (float)NEON_fmadd(pfVar8[1],*(undefined4 *)(in_x0 + 0x124),
                                 *(undefined4 *)(in_x0 + 0x120));
      fVar27 = *pfVar8;
      if (fVar27 <= fVar33) {
        fVar33 = fVar27;
      }
      fVar34 = 0.0;
      if (0.0 <= fVar27) {
        fVar34 = fVar33;
      }
      if (fVar27 != fVar34) {
        *pfVar8 = fVar34;
        if (*(short *)((long)pfVar8 + 0x16) == -1) {
          fVar33 = *(float *)(in_x0 + 0x9c);
          fVar28 = (float)NEON_fmadd(fVar34 * (float)(uVar17 >> 5 & 0xffffffff),
                                     *(undefined4 *)(in_x0 + 0x11c),fVar33);
          if ((fVar33 <= fVar28) &&
             (fVar33 = *(float *)(in_x0 + 0xa8), fVar28 <= *(float *)(in_x0 + 0xa8))) {
            fVar33 = fVar28;
          }
          pfVar11 = *(float **)(lVar16 + (ulong)*(ushort *)(pfVar8 + 5) * 8);
          pfVar19 = *(float **)(pfVar11 + 4);
          do {
            pfVar18 = pfVar19;
            pfVar19 = pfVar18 + 3;
            fVar28 = pfVar18[4];
            pfVar12 = (float *)(*(long *)(pfVar11 + 6) + -0xc);
            if (pfVar19 == (float *)(*(long *)(pfVar11 + 6) + -0xc)) break;
            pfVar12 = pfVar19;
          } while (fVar33 < fVar28);
          fVar32 = pfVar18[2];
          fVar35 = pfVar18[5];
          fVar29 = *pfVar18;
          fVar28 = (fVar33 - fVar28) / (pfVar18[1] - fVar28);
          fVar31 = *pfVar12;
          pfVar11[1] = fVar33;
          fVar29 = (float)NEON_fmadd(fVar29 - fVar31,fVar28,fVar31);
          fVar33 = (float)NEON_fmadd(fVar32 - fVar35,fVar28,fVar35);
          *pfVar11 = fVar29 + pfVar11[10];
          pfVar11[2] = fVar33 + pfVar11[0xb];
        }
        fVar26 = fVar26 + (fVar27 - fVar34);
      }
      pfVar8 = pfVar8 + 8;
    } while (pfVar8 != pfVar21);
  }
  spreadVolume(in_x0,fVar26);
  return;
}


