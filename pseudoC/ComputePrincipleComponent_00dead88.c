// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePrincipleComponent
// Entry Point: 00dead88
// Size: 1148 bytes
// Signature: undefined __cdecl ComputePrincipleComponent(Sym3x3 * param_1)


/* squish::ComputePrincipleComponent(squish::Sym3x3 const&) */

float squish::ComputePrincipleComponent(Sym3x3 *param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
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
  float fVar20;
  float fVar21;
  float local_58;
  float fStack_54;
  
  fVar20 = *(float *)(param_1 + 0x10);
  fVar18 = *(float *)(param_1 + 0x14);
  fVar16 = *(float *)param_1;
  fVar17 = *(float *)(param_1 + 4);
  fVar14 = *(float *)(param_1 + 8);
  fVar19 = *(float *)(param_1 + 0xc);
  uVar5 = NEON_fmadd(fVar16,fVar19,fVar16 * fVar18);
  fVar15 = fVar16 + fVar19 + fVar18;
  uVar5 = NEON_fmadd(fVar19,fVar18,uVar5);
  uVar5 = NEON_fmsub(fVar17,fVar17,uVar5);
  uVar8 = NEON_fmadd(fVar16 * fVar19,fVar18,(fVar17 + fVar17) * fVar14 * fVar20);
  uVar5 = NEON_fmsub(fVar14,fVar14,uVar5);
  uVar8 = NEON_fmadd(fVar20 * -fVar16,fVar20,uVar8);
  fVar6 = (float)NEON_fmsub(fVar20,fVar20,uVar5);
  uVar5 = NEON_fmadd(fVar14 * -fVar19,fVar14,uVar8);
  fVar7 = (float)NEON_fmadd(fVar15 * -0.3333333,fVar15,fVar6);
  fVar9 = (float)NEON_fmadd(fVar17 * -fVar18,fVar17,uVar5);
  fVar10 = (float)NEON_fmadd(fVar15 * fVar15 * -0.07407407,fVar15,fVar15 * fVar6 * 0.3333333);
  fVar10 = fVar10 - fVar9;
  fVar7 = (float)NEON_fmadd(fVar10 * 0.25,fVar10,fVar7 * fVar7 * fVar7 * 0.03703704);
  fVar6 = 1.0;
  if (fVar7 <= 1.192093e-07) {
    fVar9 = -fVar17;
    fVar12 = -fVar14;
    fVar11 = -fVar20;
    if (-1.192093e-07 <= fVar7) {
      if (0.0 <= fVar10) {
        fVar6 = powf(fVar10 * 0.5,0.3333333);
      }
      else {
        fVar6 = powf(fVar10 * -0.5,0.3333333);
        fVar6 = -fVar6;
      }
      fVar7 = (float)NEON_fmadd(fVar15,0x3eaaaaab,fVar6);
      fVar10 = (float)NEON_fmadd(fVar15,0x3eaaaaab,fVar6 * -2.0);
      if (ABS(fVar10) < ABS(fVar7)) {
        fVar10 = ABS(fVar16 - fVar7);
        fVar17 = ABS(fVar17);
        fVar6 = fVar17;
        if (fVar17 <= fVar10) {
          fVar6 = fVar10;
        }
        fVar16 = ABS(fVar14);
        fVar15 = fVar16;
        if (fVar16 <= fVar6) {
          fVar15 = fVar6;
        }
        fVar19 = ABS(fVar19 - fVar7);
        uVar4 = 2;
        if (fVar16 <= fVar6) {
          uVar4 = (uint)(fVar10 < fVar17);
        }
        fVar6 = fVar19;
        if (fVar19 <= fVar15) {
          fVar6 = fVar15;
        }
        fVar20 = ABS(fVar20);
        uVar2 = 3;
        if (fVar19 <= fVar15) {
          uVar2 = uVar4;
        }
        fVar10 = fVar20;
        if (fVar20 <= fVar6) {
          fVar10 = fVar6;
        }
        uVar4 = 4;
        if (fVar20 <= fVar6) {
          uVar4 = uVar2;
        }
        uVar2 = 5;
        if (ABS(fVar18 - fVar7) <= fVar10) {
          uVar2 = uVar4;
        }
        if (uVar2 < 2) {
          return fVar9;
        }
        if ((1 < uVar2 - 3) && (uVar2 == 2)) {
          return fVar14;
        }
        return 0.0;
      }
      fVar18 = fVar18 - fVar10;
      fVar19 = fVar19 - fVar10;
      fVar6 = (float)NEON_fmadd(fVar19,fVar18,fVar20 * fVar11);
      fVar15 = (float)NEON_fmadd(fVar14,fVar20,fVar18 * fVar9);
      fVar13 = ABS(fVar6);
      fVar21 = ABS(fVar15);
      fVar20 = (float)NEON_fmadd(fVar17,fVar20,fVar19 * fVar12);
      fVar16 = fVar16 - fVar10;
      fVar10 = ABS(fVar20);
      fVar7 = fVar21;
      if (fVar21 <= fVar13) {
        fVar7 = fVar13;
      }
      fVar12 = (float)NEON_fmadd(fVar16,fVar18,fVar14 * fVar12);
      fVar14 = (float)NEON_fmadd(fVar17,fVar14,fVar16 * fVar11);
      fVar18 = fVar10;
      if (fVar10 <= fVar7) {
        fVar18 = fVar7;
      }
      cVar3 = '\x02';
      if (fVar10 <= fVar7) {
        cVar3 = fVar13 < fVar21;
      }
    }
    else {
      fVar6 = atan2f(SQRT(-fVar7),fVar10 * -0.5);
      fVar7 = (float)NEON_fnmsub(fVar10 * 0.25,fVar10,fVar7);
      fVar7 = powf(SQRT(fVar7),0.3333333);
      sincosf(fVar6 / 3.0,&fStack_54,&local_58);
      fVar6 = (float)NEON_fmadd(fStack_54,0x3fddb3d7,local_58);
      fVar13 = (float)NEON_fmadd(fVar15,0x3eaaaaab,(fVar7 + fVar7) * local_58);
      fVar10 = (float)NEON_fmadd(fStack_54,0xbfddb3d7,local_58);
      fVar6 = (float)NEON_fmadd(fVar15,0x3eaaaaab,fVar6 * -fVar7);
      fVar7 = (float)NEON_fmadd(fVar15,0x3eaaaaab,fVar10 * -fVar7);
      if (ABS(fVar6) <= ABS(fVar13)) {
        fVar6 = fVar13;
      }
      if (ABS(fVar7) <= ABS(fVar6)) {
        fVar7 = fVar6;
      }
      fVar18 = fVar18 - fVar7;
      fVar19 = fVar19 - fVar7;
      fVar6 = (float)NEON_fmadd(fVar19,fVar18,fVar20 * fVar11);
      fVar15 = (float)NEON_fmadd(fVar14,fVar20,fVar18 * fVar9);
      fVar10 = ABS(fVar6);
      fVar20 = (float)NEON_fmadd(fVar17,fVar20,fVar19 * fVar12);
      fVar16 = fVar16 - fVar7;
      fVar13 = ABS(fVar15);
      fVar21 = ABS(fVar20);
      fVar7 = fVar13;
      if (fVar13 <= fVar10) {
        fVar7 = fVar10;
      }
      fVar12 = (float)NEON_fmadd(fVar16,fVar18,fVar14 * fVar12);
      fVar14 = (float)NEON_fmadd(fVar17,fVar14,fVar16 * fVar11);
      fVar18 = fVar21;
      if (fVar21 <= fVar7) {
        fVar18 = fVar7;
      }
      cVar3 = '\x02';
      if (fVar21 <= fVar7) {
        cVar3 = fVar10 < fVar13;
      }
    }
    fVar12 = ABS(fVar12);
    fVar7 = fVar12;
    if (fVar12 <= fVar18) {
      fVar7 = fVar18;
    }
    fVar14 = ABS(fVar14);
    fVar9 = (float)NEON_fmadd(fVar16,fVar19,fVar17 * fVar9);
    cVar1 = '\x03';
    if (fVar12 <= fVar18) {
      cVar1 = cVar3;
    }
    fVar10 = fVar14;
    if (fVar14 <= fVar7) {
      fVar10 = fVar7;
    }
    cVar3 = '\x04';
    if (fVar14 <= fVar7) {
      cVar3 = cVar1;
    }
    cVar1 = '\x05';
    if (ABS(fVar9) <= fVar10) {
      cVar1 = cVar3;
    }
    if ((cVar1 != '\0') && (fVar6 = fVar20, cVar1 == '\x03' || cVar1 == '\x01')) {
      fVar6 = fVar15;
    }
  }
  return fVar6;
}


