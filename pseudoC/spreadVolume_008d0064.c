// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spreadVolume
// Entry Point: 008d0064
// Size: 700 bytes
// Signature: undefined __thiscall spreadVolume(FillPlaneGeometry * this, float param_1)


/* FillPlaneGeometry::spreadVolume(float) */

void __thiscall FillPlaneGeometry::spreadVolume(FillPlaneGeometry *this,float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      return;
    }
    pfVar1 = *(float **)(this + 0xe8);
    fVar14 = 0.0;
    pfVar2 = *(float **)(this + 0xe0);
    for (pfVar3 = pfVar2; pfVar3 != pfVar1; pfVar3 = pfVar3 + 8) {
      fVar14 = fVar14 - *pfVar3;
    }
    uVar5 = (long)pfVar1 - (long)pfVar2;
    if (uVar5 == 0) {
      return;
    }
    uVar12 = NEON_fmin(param_1 / fVar14,0x3f800000);
    lVar4 = *(long *)(this + 0xb0);
    do {
      fVar14 = (float)NEON_fmsub(*pfVar2,uVar12,*pfVar2);
      *pfVar2 = fVar14;
      if (*(short *)((long)pfVar2 + 0x16) == -1) {
        fVar15 = *(float *)(this + 0x9c);
        fVar14 = (float)NEON_fmadd(fVar14 * (float)(uVar5 >> 5 & 0xffffffff),
                                   *(undefined4 *)(this + 0x11c),fVar15);
        if ((fVar15 <= fVar14) &&
           (fVar15 = *(float *)(this + 0xa8), fVar14 <= *(float *)(this + 0xa8))) {
          fVar15 = fVar14;
        }
        pfVar6 = *(float **)(lVar4 + (ulong)*(ushort *)(pfVar2 + 5) * 8);
        pfVar3 = *(float **)(pfVar6 + 4);
        do {
          pfVar9 = pfVar3;
          pfVar3 = pfVar9 + 3;
          fVar14 = pfVar9[4];
          pfVar8 = (float *)(*(long *)(pfVar6 + 6) + -0xc);
          if (pfVar3 == (float *)(*(long *)(pfVar6 + 6) + -0xc)) break;
          pfVar8 = pfVar3;
        } while (fVar15 < fVar14);
        fVar18 = pfVar9[2];
        fVar19 = pfVar9[5];
        fVar17 = *pfVar9;
        fVar14 = (fVar15 - fVar14) / (pfVar9[1] - fVar14);
        fVar16 = *pfVar8;
        pfVar6[1] = fVar15;
        fVar15 = (float)NEON_fmadd(fVar17 - fVar16,fVar14,fVar16);
        fVar14 = (float)NEON_fmadd(fVar18 - fVar19,fVar14,fVar19);
        *pfVar6 = fVar15 + pfVar6[10];
        pfVar6[2] = fVar14 + pfVar6[0xb];
      }
      pfVar2 = pfVar2 + 8;
      if (pfVar2 == pfVar1) {
        return;
      }
    } while( true );
  }
  pfVar2 = *(float **)(this + 0xe0);
  pfVar1 = *(float **)(this + 0xe8);
  uVar12 = *(undefined4 *)(this + 0x120);
  uVar13 = *(undefined4 *)(this + 0x124);
  if (pfVar2 == pfVar1) {
    fVar14 = 0.0;
    uVar5 = (long)pfVar1 - (long)pfVar2;
    if (uVar5 == 0) {
      return;
    }
    goto LAB_008d022c;
  }
  fVar14 = 0.0;
  uVar5 = (long)pfVar1 + (-0x20 - (long)pfVar2);
  pfVar3 = pfVar2;
  if (uVar5 < 0x20) {
LAB_008d00ec:
    do {
      pfVar6 = pfVar3 + 8;
      fVar15 = (float)NEON_fmadd(pfVar3[1],uVar13,uVar12);
      fVar14 = fVar14 + (fVar15 - *pfVar3);
      pfVar3 = pfVar6;
    } while (pfVar6 != pfVar1);
  }
  else {
    fVar14 = 0.0;
    uVar5 = (uVar5 >> 5) + 1;
    pfVar3 = pfVar2 + 9;
    uVar7 = uVar5 & 0xffffffffffffffe;
    uVar10 = uVar7;
    do {
      pfVar8 = pfVar3 + -9;
      uVar10 = uVar10 - 2;
      fVar15 = (float)NEON_fmadd(pfVar3[-8],uVar13,uVar12);
      fVar17 = (float)NEON_fmadd(*pfVar3,uVar13,uVar12);
      pfVar6 = pfVar3 + -1;
      pfVar3 = pfVar3 + 0x10;
      fVar14 = fVar14 + (fVar15 - *pfVar8) + (fVar17 - *pfVar6);
    } while (uVar10 != 0);
    pfVar3 = pfVar2 + uVar7 * 8;
    if (uVar5 != uVar7) goto LAB_008d00ec;
  }
  uVar5 = (long)pfVar1 - (long)pfVar2;
  if (uVar5 == 0) {
    return;
  }
LAB_008d022c:
  uVar11 = NEON_fmin(param_1 / fVar14,0x3f800000);
  lVar4 = *(long *)(this + 0xb0);
  do {
    fVar14 = (float)NEON_fmadd(pfVar2[1],uVar13,uVar12);
    fVar14 = (float)NEON_fmadd(fVar14 - *pfVar2,uVar11,*pfVar2);
    *pfVar2 = fVar14;
    if (*(short *)((long)pfVar2 + 0x16) == -1) {
      fVar15 = *(float *)(this + 0x9c);
      fVar14 = (float)NEON_fmadd(fVar14 * (float)(uVar5 >> 5 & 0xffffffff),
                                 *(undefined4 *)(this + 0x11c),fVar15);
      if ((fVar15 <= fVar14) &&
         (fVar15 = *(float *)(this + 0xa8), fVar14 <= *(float *)(this + 0xa8))) {
        fVar15 = fVar14;
      }
      pfVar6 = *(float **)(lVar4 + (ulong)*(ushort *)(pfVar2 + 5) * 8);
      pfVar3 = *(float **)(pfVar6 + 4);
      do {
        pfVar9 = pfVar3;
        pfVar3 = pfVar9 + 3;
        fVar14 = pfVar9[4];
        pfVar8 = (float *)(*(long *)(pfVar6 + 6) + -0xc);
        if (pfVar3 == (float *)(*(long *)(pfVar6 + 6) + -0xc)) break;
        pfVar8 = pfVar3;
      } while (fVar15 < fVar14);
      fVar18 = pfVar9[2];
      fVar19 = pfVar9[5];
      fVar17 = *pfVar9;
      fVar14 = (fVar15 - fVar14) / (pfVar9[1] - fVar14);
      fVar16 = *pfVar8;
      pfVar6[1] = fVar15;
      fVar15 = (float)NEON_fmadd(fVar17 - fVar16,fVar14,fVar16);
      fVar14 = (float)NEON_fmadd(fVar18 - fVar19,fVar14,fVar19);
      *pfVar6 = fVar15 + pfVar6[10];
      pfVar6[2] = fVar14 + pfVar6[0xb];
    }
    pfVar2 = pfVar2 + 8;
    if (pfVar2 == pfVar1) {
      return;
    }
    uVar12 = *(undefined4 *)(this + 0x120);
    uVar13 = *(undefined4 *)(this + 0x124);
  } while( true );
}


