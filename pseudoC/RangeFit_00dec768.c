// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RangeFit
// Entry Point: 00dec768
// Size: 688 bytes
// Signature: undefined __thiscall RangeFit(RangeFit * this, ColourSet * param_1, int param_2)


/* squish::RangeFit::RangeFit(squish::ColourSet const*, int) */

void __thiscall squish::RangeFit::RangeFit(RangeFit *this,ColourSet *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_x3;
  float *pfVar6;
  squish *psVar7;
  uint *puVar8;
  undefined4 uVar9;
  float fVar10;
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
  float fVar23;
  float fVar24;
  float fVar25;
  Sym3x3 aSStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ColourFit::ColourFit((ColourFit *)this,param_1,param_2);
  fVar11 = 1.0;
  puVar8 = *(uint **)(this + 8);
  fVar12 = fVar11;
  fVar10 = fVar11;
  if ((*(uint *)(this + 0x10) & 0x20) != 0) {
    fVar11 = 0.0722;
    fVar12 = 0.2126;
    fVar10 = 0.7152;
  }
  *(undefined ***)this = &PTR_Compress3_010131c0;
  *(float *)(this + 0x14) = fVar12;
  *(float *)(this + 0x18) = fVar10;
  *(float *)(this + 0x1c) = fVar11;
  *(undefined4 *)(this + 0x38) = 0x7f7fffff;
  uVar1 = *puVar8;
  ComputeWeightedCovariance((squish *)(ulong)uVar1,(int)puVar8 + 4,(Vec3 *)(puVar8 + 0x31),in_x3);
  uVar9 = ComputePrincipleComponent(aSStack_60);
  fVar13 = 0.0;
  fVar17 = 0.0;
  fVar12 = 0.0;
  fVar15 = 0.0;
  fVar14 = 0.0;
  fVar18 = 0.0;
  if (0 < (int)uVar1) {
    fVar13 = (float)puVar8[1];
    fVar17 = (float)puVar8[2];
    fVar12 = (float)puVar8[3];
    fVar15 = fVar13;
    fVar14 = fVar17;
    fVar18 = fVar12;
    if (uVar1 != 1) {
      pfVar6 = (float *)(puVar8 + 6);
      psVar7 = (squish *)(ulong)uVar1 + -1;
      uVar16 = NEON_fmadd(fVar13,uVar9,fVar10 * fVar17);
      fVar19 = (float)NEON_fmadd(fVar12,fVar11,uVar16);
      fVar21 = fVar19;
      do {
        fVar25 = pfVar6[-2];
        fVar23 = pfVar6[-1];
        fVar24 = *pfVar6;
        uVar16 = NEON_fmadd(fVar25,uVar9,fVar10 * fVar23);
        fVar22 = (float)NEON_fmadd(fVar24,fVar11,uVar16);
        fVar20 = fVar22;
        fVar3 = fVar25;
        fVar4 = fVar23;
        fVar5 = fVar24;
        if ((fVar21 <= fVar22) &&
           (fVar20 = fVar21, fVar3 = fVar13, fVar4 = fVar17, fVar5 = fVar12, fVar19 < fVar22)) {
          fVar19 = fVar22;
          fVar15 = fVar25;
          fVar14 = fVar23;
          fVar18 = fVar24;
        }
        fVar12 = fVar5;
        fVar17 = fVar4;
        fVar13 = fVar3;
        pfVar6 = pfVar6 + 3;
        psVar7 = psVar7 + -1;
        fVar21 = fVar20;
      } while (psVar7 != (squish *)0x0);
    }
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar10 = (float)NEON_fminnm(fVar13,0x3f800000);
  fVar11 = (float)NEON_fminnm(fVar17,0x3f800000);
  fVar13 = (float)NEON_fminnm(fVar12,0x3f800000);
  fVar17 = (float)NEON_fminnm(fVar15,0x3f800000);
  fVar15 = (float)NEON_fminnm(fVar14,0x3f800000);
  fVar12 = (float)NEON_fminnm(fVar18,0x3f800000);
  *(float *)(this + 0x20) = (float)(int)(fVar10 * 31.0 + 0.5) * 0.03225806;
  *(float *)(this + 0x24) = (float)(int)(fVar11 * 63.0 + 0.5) * 0.01587302;
  *(float *)(this + 0x28) = (float)(int)(fVar13 * 31.0 + 0.5) * 0.03225806;
  *(float *)(this + 0x2c) = (float)(int)(fVar17 * 31.0 + 0.5) * 0.03225806;
  *(float *)(this + 0x30) = (float)(int)(fVar15 * 63.0 + 0.5) * 0.01587302;
  *(float *)(this + 0x34) = (float)(int)(fVar12 * 31.0 + 0.5) * 0.03225806;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


