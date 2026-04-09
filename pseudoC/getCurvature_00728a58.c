// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurvature
// Entry Point: 00728a58
// Size: 484 bytes
// Signature: undefined __thiscall getCurvature(StoppingPath * this, float param_1)


/* StoppingPath::getCurvature(float) const */

float __thiscall StoppingPath::getCurvature(StoppingPath *this,float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar2 = *(float **)(this + 8);
  fVar6 = 0.0;
  if (1 < (ulong)(((long)pfVar2 - *(long *)this >> 3) * -0x5555555555555555)) {
    fVar6 = pfVar2[-6];
    pfVar3 = (float *)(*(long *)this + 0x18);
    if (fVar6 < param_1) {
      param_1 = fVar6;
    }
    fVar7 = fVar6;
    if (pfVar3 != pfVar2) {
      do {
        pfVar1 = pfVar3;
        if (param_1 <= *pfVar3) break;
        pfVar3 = pfVar3 + 6;
        pfVar1 = pfVar2;
      } while (pfVar3 != pfVar2);
      pfVar2 = pfVar1;
      fVar7 = pfVar2[-6];
    }
    fVar5 = pfVar2[-2];
    fVar4 = pfVar2[-1];
    fVar8 = param_1 - fVar7;
    fVar9 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
    fVar7 = (float)NEON_fmadd(*(float *)(this + 0x1c) * (fVar6 - fVar7),fVar8,
                              fVar8 * *(float *)(this + 0x1c) * -0.5 * fVar8);
    fVar7 = fVar7 / SQRT(fVar9);
    fVar6 = 0.0;
    if ((0.0 <= fVar7) && (fVar6 = 1.0, fVar7 <= 1.0)) {
      fVar6 = fVar7;
    }
    fVar9 = fVar6 + -1.0;
    fVar10 = fVar6 * 6.0;
    fVar18 = (float)NEON_fmadd(fVar6,0x40400000,0xbf800000);
    fVar12 = (float)NEON_fmadd(fVar6,0x40400000,0xc0000000);
    fVar7 = fVar9 * fVar10;
    fVar8 = fVar9 * fVar18;
    fVar13 = fVar6 * fVar12;
    fVar15 = ((fVar7 * pfVar2[-3] + fVar8 * fVar4) - fVar7 * pfVar2[3]) + fVar13 * pfVar2[5];
    fVar14 = ((pfVar2[-4] * fVar7 + fVar8 * fVar5) - fVar7 * pfVar2[2]) + fVar13 * pfVar2[4];
    fVar16 = (float)NEON_fmadd(fVar14,fVar14,fVar15 * fVar15);
    if (fVar16 == 0.0) {
      return INFINITY;
    }
    fVar19 = (float)NEON_fmadd(fVar9,0x40c00000,fVar10);
    fVar18 = (float)NEON_fmadd(fVar9,0x40400000,fVar18);
    fVar17 = (float)NEON_fnmadd(fVar9,0x40c00000,-fVar10);
    fVar12 = (float)NEON_fmadd(fVar6,0x40400000,fVar12);
    fVar5 = (float)NEON_fmadd(fVar8,0,fVar18 * fVar5);
    fVar11 = (float)NEON_fmadd(fVar7,0,pfVar2[-4] * fVar19);
    fVar6 = (float)NEON_fmadd(fVar8,0,fVar18 * fVar4);
    fVar4 = (float)NEON_fmadd(fVar7,0,pfVar2[-3] * fVar19);
    fVar18 = (float)NEON_fmadd(-(fVar9 * fVar10),0,pfVar2[2] * fVar17);
    fVar9 = (float)NEON_fmadd(-(fVar9 * fVar10),0,pfVar2[3] * fVar17);
    fVar8 = (float)NEON_fmadd(fVar13,0,fVar12 * pfVar2[4]);
    fVar7 = (float)NEON_fmadd(fVar13,0,fVar12 * pfVar2[5]);
    fVar6 = (float)NEON_fmadd(fVar14,fVar4 + fVar6 + fVar9 + fVar7,
                              (fVar11 + fVar5 + fVar18 + fVar8) * -fVar15);
    fVar6 = fVar6 / (fVar16 * SQRT(fVar16));
  }
  return fVar6;
}


