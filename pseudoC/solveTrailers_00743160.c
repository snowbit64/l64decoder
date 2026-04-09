// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveTrailers
// Entry Point: 00743160
// Size: 612 bytes
// Signature: undefined solveTrailers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TractorTrailer::solveTrailers() */

void TractorTrailer::solveTrailers(void)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  long in_x0;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (*(int *)(in_x0 + 0x58) != 0) {
    fVar13 = *(float *)(in_x0 + 4);
    fVar11 = *(float *)(in_x0 + 8);
    uVar4 = 0;
    lVar5 = *(long *)(in_x0 + 0x50);
    fVar12 = *(float *)(in_x0 + 0xc);
    do {
      uVar3 = (ulong)uVar4;
      uVar6 = (ulong)uVar4;
      uVar2 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      pfVar1 = (float *)(in_x0 + (ulong)uVar4 * 0x10);
      uVar16 = *(undefined4 *)(lVar5 + uVar3 * 0xc);
      fVar15 = (float)NEON_fmadd(fVar12,uVar16,fVar13);
      pfVar7 = pfVar1 + 1;
      fVar21 = *pfVar7;
      pfVar9 = pfVar1 + 3;
      fVar12 = *pfVar9;
      fVar14 = (float)NEON_fmadd(fVar11,uVar16,*(undefined4 *)(in_x0 + uVar6 * 0x10));
      fVar17 = *pfVar1;
      fVar19 = fVar15 - fVar21;
      puVar8 = (undefined4 *)(lVar5 + uVar2 * 0xc + 4);
      fVar20 = fVar14 - fVar17;
      fVar22 = (float)NEON_fmadd(fVar12,*puVar8,fVar21);
      fVar13 = (float)NEON_fmadd(fVar20,fVar20,fVar19 * fVar19);
      pfVar10 = pfVar1 + 2;
      fVar11 = *pfVar10;
      fVar18 = (float)NEON_fmadd(fVar11,*puVar8,fVar17);
      uVar16 = NEON_fmadd(fVar11,fVar14 - fVar18,fVar12 * (fVar15 - fVar22));
      fVar17 = (float)NEON_fmadd(fVar11,uVar16,fVar17);
      fVar18 = (float)NEON_fmadd(fVar12,uVar16,fVar21);
      *pfVar1 = fVar17;
      *pfVar7 = fVar18;
      if (0.0001 <= SQRT(fVar13)) {
        fVar12 = 1.0 / SQRT(fVar13);
        fVar11 = fVar20 * fVar12;
        fVar12 = fVar19 * fVar12;
        *pfVar10 = fVar11;
        *pfVar9 = fVar12;
      }
      fVar19 = fVar15 - fVar18;
      fVar20 = fVar14 - fVar17;
      fVar22 = (float)NEON_fmadd(fVar12,*puVar8,fVar18);
      fVar13 = (float)NEON_fmadd(fVar11,*puVar8,fVar17);
      fVar21 = (float)NEON_fmadd(fVar20,fVar20,fVar19 * fVar19);
      uVar16 = NEON_fmadd(fVar11,fVar14 - fVar13,fVar12 * (fVar15 - fVar22));
      fVar13 = (float)NEON_fmadd(fVar11,uVar16,fVar17);
      fVar17 = (float)NEON_fmadd(fVar12,uVar16,fVar18);
      *pfVar1 = fVar13;
      *pfVar7 = fVar17;
      if (0.0001 <= SQRT(fVar21)) {
        fVar12 = 1.0 / SQRT(fVar21);
        fVar11 = fVar20 * fVar12;
        fVar12 = fVar19 * fVar12;
        *pfVar10 = fVar11;
        *pfVar9 = fVar12;
      }
      fVar18 = fVar15 - fVar17;
      fVar19 = fVar14 - fVar13;
      fVar22 = (float)NEON_fmadd(fVar12,*puVar8,fVar17);
      fVar21 = (float)NEON_fmadd(fVar11,*puVar8,fVar13);
      fVar20 = (float)NEON_fmadd(fVar19,fVar19,fVar18 * fVar18);
      uVar16 = NEON_fmadd(fVar11,fVar14 - fVar21,fVar12 * (fVar15 - fVar22));
      fVar13 = (float)NEON_fmadd(fVar11,uVar16,fVar13);
      fVar17 = (float)NEON_fmadd(fVar12,uVar16,fVar17);
      *pfVar1 = fVar13;
      *pfVar7 = fVar17;
      if (0.0001 <= SQRT(fVar20)) {
        fVar12 = 1.0 / SQRT(fVar20);
        fVar11 = fVar19 * fVar12;
        fVar12 = fVar18 * fVar12;
        *pfVar10 = fVar11;
        *pfVar9 = fVar12;
      }
      fVar18 = fVar15 - fVar17;
      fVar19 = fVar14 - fVar13;
      fVar22 = (float)NEON_fmadd(fVar12,*puVar8,fVar17);
      fVar21 = (float)NEON_fmadd(fVar11,*puVar8,fVar13);
      fVar20 = (float)NEON_fmadd(fVar19,fVar19,fVar18 * fVar18);
      uVar16 = NEON_fmadd(fVar11,fVar14 - fVar21,fVar12 * (fVar15 - fVar22));
      fVar13 = (float)NEON_fmadd(fVar11,uVar16,fVar13);
      fVar17 = (float)NEON_fmadd(fVar12,uVar16,fVar17);
      *pfVar1 = fVar13;
      *pfVar7 = fVar17;
      if (0.0001 <= SQRT(fVar20)) {
        fVar12 = 1.0 / SQRT(fVar20);
        fVar11 = fVar19 * fVar12;
        fVar12 = fVar18 * fVar12;
        *pfVar10 = fVar11;
        *pfVar9 = fVar12;
      }
      fVar18 = fVar15 - fVar17;
      fVar19 = fVar14 - fVar13;
      fVar22 = (float)NEON_fmadd(fVar12,*puVar8,fVar17);
      fVar21 = (float)NEON_fmadd(fVar11,*puVar8,fVar13);
      fVar20 = (float)NEON_fmadd(fVar19,fVar19,fVar18 * fVar18);
      uVar16 = NEON_fmadd(fVar11,fVar14 - fVar21,fVar12 * (fVar15 - fVar22));
      fVar14 = (float)NEON_fmadd(fVar11,uVar16,fVar13);
      fVar13 = (float)NEON_fmadd(fVar12,uVar16,fVar17);
      *pfVar1 = fVar14;
      *pfVar7 = fVar13;
      if (0.0001 <= SQRT(fVar20)) {
        fVar12 = 1.0 / SQRT(fVar20);
        fVar11 = fVar19 * fVar12;
        fVar12 = fVar18 * fVar12;
        *pfVar10 = fVar11;
        *pfVar9 = fVar12;
      }
    } while (uVar4 != *(uint *)(in_x0 + 0x58));
  }
  return;
}


