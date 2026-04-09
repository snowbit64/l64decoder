// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testContainment
// Entry Point: 00f6849c
// Size: 532 bytes
// Signature: undefined testContainment(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConvexPolyhedron::testContainment() const */

bool btConvexPolyhedron::testContainment(void)

{
  long in_x0;
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  uVar1 = (ulong)*(uint *)(in_x0 + 0x2c);
  if ((int)*(uint *)(in_x0 + 0x2c) < 1) {
    return true;
  }
  lVar3 = *(long *)(in_x0 + 0x38);
  fVar5 = *(float *)(in_x0 + 0x68) - *(float *)(in_x0 + 0x78);
  fVar6 = *(float *)(in_x0 + 0x6c) - *(float *)(in_x0 + 0x7c);
  fVar7 = *(float *)(in_x0 + 0x70) - *(float *)(in_x0 + 0x80);
  fVar8 = *(float *)(in_x0 + 0x70) + *(float *)(in_x0 + 0x80);
  fVar9 = *(float *)(in_x0 + 0x6c) + *(float *)(in_x0 + 0x7c);
  fVar10 = *(float *)(in_x0 + 0x68) + *(float *)(in_x0 + 0x78);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar9,pfVar2[-3] * fVar10);
    fVar12 = (float)NEON_fmadd(pfVar2[-1],fVar8,uVar11);
    if (0.0 < fVar12 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar9,pfVar2[-3] * fVar10);
    fVar12 = (float)NEON_fmadd(pfVar2[-1],fVar7,uVar11);
    if (0.0 < fVar12 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar6,pfVar2[-3] * fVar10);
    fVar12 = (float)NEON_fmadd(pfVar2[-1],fVar8,uVar11);
    if (0.0 < fVar12 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar6,pfVar2[-3] * fVar10);
    fVar12 = (float)NEON_fmadd(pfVar2[-1],fVar7,uVar11);
    if (0.0 < fVar12 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar9,pfVar2[-3] * fVar5);
    fVar10 = (float)NEON_fmadd(pfVar2[-1],fVar8,uVar11);
    if (0.0 < fVar10 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar9,pfVar2[-3] * fVar5);
    fVar10 = (float)NEON_fmadd(pfVar2[-1],fVar7,uVar11);
    if (0.0 < fVar10 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  uVar4 = uVar1;
  do {
    uVar11 = NEON_fmadd(pfVar2[-2],fVar6,pfVar2[-3] * fVar5);
    fVar9 = (float)NEON_fmadd(pfVar2[-1],fVar8,uVar11);
    if (0.0 < fVar9 + *pfVar2) {
      return false;
    }
    uVar4 = uVar4 - 1;
    pfVar2 = pfVar2 + 0xc;
  } while (uVar4 != 0);
  pfVar2 = (float *)(lVar3 + 0x2c);
  do {
    uVar1 = uVar1 - 1;
    uVar11 = NEON_fmadd(pfVar2[-2],fVar6,pfVar2[-3] * fVar5);
    fVar8 = (float)NEON_fmadd(pfVar2[-1],fVar7,uVar11);
    fVar9 = *pfVar2;
    pfVar2 = pfVar2 + 0xc;
  } while (fVar8 + fVar9 <= 0.0 && uVar1 != 0);
  return fVar8 + fVar9 <= 0.0;
}


