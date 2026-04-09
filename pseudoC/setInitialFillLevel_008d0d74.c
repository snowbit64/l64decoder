// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInitialFillLevel
// Entry Point: 008d0d74
// Size: 1092 bytes
// Signature: undefined __thiscall setInitialFillLevel(FillPlaneGeometry * this, float param_1)


/* FillPlaneGeometry::setInitialFillLevel(float) */

void __thiscall FillPlaneGeometry::setInitialFillLevel(FillPlaneGeometry *this,float param_1)

{
  float **ppfVar1;
  long lVar2;
  float *pfVar3;
  float **ppfVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  float *pfVar8;
  long lVar9;
  float **ppfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  
  pfVar14 = *(float **)(this + 0xe0);
  pfVar3 = *(float **)(this + 0xe8);
  *(float *)(this + 0x118) = param_1;
  ppfVar1 = *(float ***)(this + 0xb0);
  ppfVar4 = *(float ***)(this + 0xb8);
  fVar28 = (float)(unkuint9)(ulong)((long)pfVar3 - (long)pfVar14 >> 5);
  fVar17 = (float)((ulong)((long)pfVar3 - (long)pfVar14) >> 5 & 0xffffffff);
  ppfVar10 = ppfVar1;
  if (ppfVar1 != ppfVar4) {
    do {
      fVar18 = *(float *)(this + 0x9c);
      fVar20 = (float)NEON_fmadd((param_1 / fVar28) * fVar17,*(undefined4 *)(this + 0x11c),fVar18);
      if ((fVar18 <= fVar20) &&
         (fVar18 = *(float *)(this + 0xa8), fVar20 <= *(float *)(this + 0xa8))) {
        fVar18 = fVar20;
      }
      pfVar13 = *ppfVar10;
      pfVar15 = *(float **)(pfVar13 + 4);
      do {
        pfVar12 = pfVar15;
        pfVar15 = pfVar12 + 3;
        fVar20 = pfVar12[4];
        pfVar8 = (float *)(*(long *)(pfVar13 + 6) + -0xc);
        if (pfVar15 == (float *)(*(long *)(pfVar13 + 6) + -0xc)) break;
        pfVar8 = pfVar15;
      } while (fVar18 < fVar20);
      ppfVar10 = ppfVar10 + 1;
      fVar20 = (fVar18 - fVar20) / (pfVar12[1] - fVar20);
      fVar22 = (float)NEON_fmadd(*pfVar12 - *pfVar8,fVar20,*pfVar8);
      fVar20 = (float)NEON_fmadd(pfVar12[2] - pfVar12[5],fVar20,pfVar12[5]);
      *pfVar13 = fVar22 + pfVar13[10];
      pfVar13[1] = fVar18;
      pfVar13[2] = fVar20 + pfVar13[0xb];
    } while (ppfVar10 != ppfVar4);
    fVar17 = (float)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5 & 0xffffffff);
    ppfVar10 = *(float ***)(this + 0xb0);
  }
  if (pfVar14 != pfVar3) {
    fVar18 = *(float *)(this + 0x11c);
    fVar20 = *(float *)(this + 0x98);
    fVar23 = *(float *)(this + 0xa0);
    fVar21 = *(float *)(this + 0xa4);
    fVar22 = *(float *)(this + 0xac);
    uVar29 = NEON_fmin(fVar18 * param_1,0x3e99999a);
    pfVar15 = pfVar14;
    do {
      uVar6 = *(ushort *)(pfVar15 + 5);
      uVar7 = *(ushort *)((long)pfVar15 + 0x16);
      fVar19 = pfVar15[2] * *ppfVar1[uVar6];
      fVar16 = pfVar15[2] * ppfVar1[uVar6][2];
      if ((ulong)uVar7 != 0xffff) {
        fVar19 = (float)NEON_fmadd(*ppfVar1[uVar7],pfVar15[3],fVar19);
        fVar16 = (float)NEON_fmadd(ppfVar1[uVar7][2],pfVar15[3],fVar16);
        if ((ulong)*(ushort *)(pfVar15 + 6) != 0xffff) {
          fVar19 = (float)NEON_fmadd(*ppfVar1[*(ushort *)(pfVar15 + 6)],pfVar15[4],fVar19);
          fVar16 = (float)NEON_fmadd(ppfVar1[*(ushort *)(pfVar15 + 6)][2],pfVar15[4],fVar16);
        }
      }
      fVar30 = *(float *)(this + 0x9c);
      fVar24 = *(float *)(this + 0xa0);
      fVar19 = sinf((3.141593 / (fVar21 - fVar20)) * (fVar19 - *(float *)(this + 0x98)));
      fVar16 = sinf((3.141593 / (fVar22 - fVar23)) * (fVar16 - fVar24));
      if (fVar16 < fVar19) {
        fVar19 = fVar16;
      }
      fVar19 = (float)NEON_fmadd(uVar29,fVar19,fVar30);
      fVar16 = fVar30;
      if ((fVar30 <= fVar19) &&
         (fVar16 = fVar19, *(float *)(this + 0xa8) + *(float *)(this + 0x110) < fVar19)) {
        fVar16 = *(float *)(this + 0xa8) + *(float *)(this + 0x110);
      }
      fVar16 = (1.0 / (fVar18 * fVar28)) * (fVar16 - fVar30);
      *pfVar15 = fVar16;
      if (uVar7 == 0xffff) {
        fVar19 = *(float *)(this + 0x9c);
        fVar24 = (float)NEON_fmadd(fVar16 * fVar17,*(undefined4 *)(this + 0x11c),fVar19);
        if ((fVar19 <= fVar24) &&
           (fVar19 = *(float *)(this + 0xa8), fVar24 <= *(float *)(this + 0xa8))) {
          fVar19 = fVar24;
        }
        pfVar8 = ppfVar10[uVar6];
        pfVar13 = *(float **)(pfVar8 + 4);
        do {
          pfVar11 = pfVar13;
          pfVar13 = pfVar11 + 3;
          fVar24 = pfVar11[4];
          pfVar12 = (float *)(*(long *)(pfVar8 + 6) + -0xc);
          if (pfVar13 == (float *)(*(long *)(pfVar8 + 6) + -0xc)) break;
          pfVar12 = pfVar13;
        } while (fVar19 < fVar24);
        fVar26 = pfVar11[2];
        fVar27 = pfVar11[5];
        fVar30 = *pfVar11;
        fVar24 = (fVar19 - fVar24) / (pfVar11[1] - fVar24);
        fVar25 = *pfVar12;
        pfVar8[1] = fVar19;
        fVar30 = (float)NEON_fmadd(fVar30 - fVar25,fVar24,fVar25);
        fVar19 = (float)NEON_fmadd(fVar26 - fVar27,fVar24,fVar27);
        *pfVar8 = fVar30 + pfVar8[10];
        pfVar8[2] = fVar19 + pfVar8[0xb];
      }
      param_1 = param_1 - fVar16;
      pfVar15 = pfVar15 + 8;
    } while (pfVar15 != pfVar3);
    if (pfVar14 != pfVar3) {
      lVar2 = *(long *)(this + 0xe0);
      lVar5 = *(long *)(this + 0xe8);
      lVar9 = *(long *)(this + 0xb0);
      do {
        fVar17 = param_1 / fVar28 + *pfVar14;
        *pfVar14 = fVar17;
        if (*(short *)((long)pfVar14 + 0x16) == -1) {
          fVar18 = *(float *)(this + 0x9c);
          fVar17 = (float)NEON_fmadd(fVar17 * (float)((ulong)(lVar5 - lVar2) >> 5 & 0xffffffff),
                                     *(undefined4 *)(this + 0x11c),fVar18);
          if ((fVar18 <= fVar17) &&
             (fVar18 = *(float *)(this + 0xa8), fVar17 <= *(float *)(this + 0xa8))) {
            fVar18 = fVar17;
          }
          pfVar13 = *(float **)(lVar9 + (ulong)*(ushort *)(pfVar14 + 5) * 8);
          pfVar15 = *(float **)(pfVar13 + 4);
          do {
            pfVar12 = pfVar15;
            pfVar15 = pfVar12 + 3;
            fVar17 = pfVar12[4];
            pfVar8 = (float *)(*(long *)(pfVar13 + 6) + -0xc);
            if (pfVar15 == (float *)(*(long *)(pfVar13 + 6) + -0xc)) break;
            pfVar8 = pfVar15;
          } while (fVar18 < fVar17);
          fVar17 = (fVar18 - fVar17) / (pfVar12[1] - fVar17);
          fVar20 = (float)NEON_fmadd(*pfVar12 - *pfVar8,fVar17,*pfVar8);
          fVar17 = (float)NEON_fmadd(pfVar12[2] - pfVar12[5],fVar17,pfVar12[5]);
          *pfVar13 = fVar20 + pfVar13[10];
          pfVar13[1] = fVar18;
          pfVar13[2] = fVar17 + pfVar13[0xb];
        }
        pfVar14 = pfVar14 + 8;
      } while (pfVar14 != pfVar3);
    }
  }
  solveHardConstraints();
  *(undefined2 *)(this + 0x94) = 0x101;
  return;
}


