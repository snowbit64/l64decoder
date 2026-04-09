// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clip
// Entry Point: 00e37dbc
// Size: 876 bytes
// Signature: undefined __thiscall clip(Soloud * this, AlignedFloatBuffer * param_1, AlignedFloatBuffer * param_2, uint param_3, float param_4, float param_5)


/* SoLoud::Soloud::clip(SoLoud::AlignedFloatBuffer&, SoLoud::AlignedFloatBuffer&, unsigned int,
   float, float) */

void __thiscall
SoLoud::Soloud::clip
          (Soloud *this,AlignedFloatBuffer *param_1,AlignedFloatBuffer *param_2,uint param_3,
          float param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar5 = *(int *)(this + 0x20a4);
  uVar1 = param_3 + 3;
  uVar6 = uVar1 >> 2;
  fVar13 = (param_5 - param_4) / (float)(ulong)param_3;
  if (((byte)this[0x20bc] & 1) == 0) {
    if (iVar5 != 0 && 3 < uVar1) {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        iVar10 = 0;
        lVar11 = *(long *)param_1;
        lVar12 = *(long *)param_2;
        fVar15 = param_4;
        uVar1 = uVar6;
        do {
          uVar2 = iVar8 + iVar10;
          uVar3 = iVar9 + iVar10;
          iVar10 = iVar10 + 4;
          fVar16 = fVar15 * *(float *)(lVar11 + (ulong)uVar2 * 4);
          fVar18 = (float)NEON_fmin(fVar16,0x3f800000);
          fVar17 = (fVar13 + fVar15) * *(float *)(lVar11 + (ulong)(uVar2 + 1) * 4);
          fVar15 = fVar13 + fVar13 + fVar15;
          fVar14 = -1.0;
          if (-1.0 < fVar16) {
            fVar14 = fVar18;
          }
          fVar20 = (float)NEON_fmin(fVar17,0x3f800000);
          fVar18 = fVar15 * *(float *)(lVar11 + (ulong)(uVar2 + 2) * 4);
          fVar19 = *(float *)(lVar11 + (ulong)(uVar2 + 3) * 4);
          fVar16 = -1.0;
          if (-1.0 < fVar17) {
            fVar16 = fVar20;
          }
          fVar15 = fVar13 + fVar15;
          *(float *)(lVar12 + (ulong)uVar3 * 4) = fVar14 * *(float *)(this + 0x20c4);
          fVar17 = (float)NEON_fmin(fVar18,0x3f800000);
          fVar19 = fVar15 * fVar19;
          fVar15 = fVar13 + fVar15;
          fVar14 = -1.0;
          if (-1.0 < fVar18) {
            fVar14 = fVar17;
          }
          *(float *)(lVar12 + (ulong)(uVar3 + 1) * 4) = fVar16 * *(float *)(this + 0x20c4);
          fVar17 = (float)NEON_fmin(fVar19,0x3f800000);
          fVar16 = -1.0;
          if (-1.0 < fVar19) {
            fVar16 = fVar17;
          }
          uVar1 = uVar1 - 1;
          *(float *)(lVar12 + (ulong)(uVar3 + 2) * 4) = fVar14 * *(float *)(this + 0x20c4);
          *(float *)(lVar12 + (ulong)(uVar3 + 3) * 4) = fVar16 * *(float *)(this + 0x20c4);
        } while (uVar1 != 0);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + iVar10;
        iVar9 = iVar9 + iVar10;
      } while (iVar7 != iVar5);
    }
  }
  else if (iVar5 != 0 && 3 < uVar1) {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    do {
      iVar10 = 0;
      lVar11 = *(long *)param_1;
      lVar12 = *(long *)param_2;
      fVar15 = param_4;
      uVar1 = uVar6;
      do {
        uVar2 = iVar8 + iVar10;
        fVar14 = fVar15 * *(float *)(lVar11 + (ulong)uVar2 * 4);
        if (fVar14 <= -1.65) {
          fVar14 = -0.9862875;
        }
        else if (1.65 <= fVar14) {
          fVar14 = 0.9862875;
        }
        else {
          fVar14 = (float)NEON_fmadd(fVar14,0x3f5eb852,fVar14 * fVar14 * fVar14 * -0.1);
        }
        fVar16 = (fVar13 + fVar15) * *(float *)(lVar11 + (ulong)(uVar2 + 1) * 4);
        if (fVar16 <= -1.65) {
          fVar16 = -0.9862875;
        }
        else if (1.65 <= fVar16) {
          fVar16 = 0.9862875;
        }
        else {
          fVar16 = (float)NEON_fmadd(fVar16,0x3f5eb852,fVar16 * fVar16 * fVar16 * -0.1);
        }
        fVar15 = fVar13 + fVar13 + fVar15;
        fVar17 = fVar15 * *(float *)(lVar11 + (ulong)(uVar2 + 2) * 4);
        if (fVar17 <= -1.65) {
          fVar17 = -0.9862875;
        }
        else if (1.65 <= fVar17) {
          fVar17 = 0.9862875;
        }
        else {
          fVar17 = (float)NEON_fmadd(fVar17,0x3f5eb852,fVar17 * fVar17 * fVar17 * -0.1);
        }
        fVar15 = fVar13 + fVar15;
        fVar18 = fVar15 * *(float *)(lVar11 + (ulong)(uVar2 + 3) * 4);
        if (fVar18 <= -1.65) {
          fVar18 = -0.9862875;
        }
        else if (1.65 <= fVar18) {
          fVar18 = 0.9862875;
        }
        else {
          fVar18 = (float)NEON_fmadd(fVar18,0x3f5eb852,fVar18 * fVar18 * fVar18 * -0.1);
        }
        uVar1 = uVar1 - 1;
        *(float *)(lVar12 + (ulong)(uint)(iVar9 + iVar10) * 4) = fVar14 * *(float *)(this + 0x20c4);
        iVar4 = iVar9 + iVar10;
        iVar10 = iVar10 + 4;
        fVar15 = fVar13 + fVar15;
        *(float *)(lVar12 + (ulong)(iVar4 + 1) * 4) = fVar16 * *(float *)(this + 0x20c4);
        *(float *)(lVar12 + (ulong)(iVar4 + 2) * 4) = fVar17 * *(float *)(this + 0x20c4);
        *(float *)(lVar12 + (ulong)(iVar4 + 3) * 4) = fVar18 * *(float *)(this + 0x20c4);
      } while (uVar1 != 0);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + iVar10;
      iVar9 = iVar9 + iVar10;
    } while (iVar7 != iVar5);
  }
  return;
}


