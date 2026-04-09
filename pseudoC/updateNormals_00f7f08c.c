// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateNormals
// Entry Point: 00f7f08c
// Size: 412 bytes
// Signature: undefined updateNormals(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updateNormals() */

void btSoftBody::updateNormals(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long in_x0;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar4 = *(uint *)(in_x0 + 0x374);
  if (0 < (int)uVar4) {
    lVar6 = 0;
    do {
      lVar1 = *(long *)(in_x0 + 0x380) + lVar6;
      lVar6 = lVar6 + 0x78;
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    } while ((ulong)uVar4 * 0x78 - lVar6 != 0);
  }
  uVar4 = *(uint *)(in_x0 + 0x3b4);
  if (0 < (int)uVar4) {
    lVar6 = 0;
    do {
      lVar1 = *(long *)(in_x0 + 0x3c0) + lVar6;
      lVar6 = lVar6 + 0x48;
      lVar2 = *(long *)(lVar1 + 0x10);
      lVar3 = *(long *)(lVar1 + 0x18);
      lVar8 = *(long *)(lVar1 + 0x20);
      fVar16 = *(float *)(lVar2 + 0x18);
      fVar10 = *(float *)(lVar3 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar9 = *(float *)(lVar3 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar15 = *(float *)(lVar8 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar13 = *(float *)(lVar8 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar14 = *(float *)(lVar3 + 0x18) - fVar16;
      fVar11 = *(float *)(lVar8 + 0x18);
      *(undefined4 *)(lVar1 + 0x34) = 0;
      fVar11 = fVar11 - fVar16;
      fVar16 = (float)NEON_fnmsub(fVar13,fVar9,fVar15 * fVar10);
      fVar10 = (float)NEON_fnmsub(fVar11,fVar10,fVar13 * fVar14);
      fVar9 = (float)NEON_fnmsub(fVar15,fVar14,fVar11 * fVar9);
      uVar12 = NEON_fmadd(fVar10,fVar10,fVar16 * fVar16);
      fVar11 = (float)NEON_fmadd(fVar9,fVar9,uVar12);
      fVar11 = 1.0 / SQRT(fVar11);
      *(float *)(lVar1 + 0x28) = fVar11 * fVar10;
      *(float *)(lVar1 + 0x2c) = fVar11 * fVar9;
      *(float *)(lVar1 + 0x30) = fVar11 * fVar16;
      *(float *)(lVar2 + 0x50) = *(float *)(lVar2 + 0x50) + fVar10;
      *(float *)(lVar2 + 0x54) = *(float *)(lVar2 + 0x54) + fVar9;
      *(float *)(lVar2 + 0x58) = *(float *)(lVar2 + 0x58) + fVar16;
      *(float *)(lVar3 + 0x50) = *(float *)(lVar3 + 0x50) + fVar10;
      *(float *)(lVar3 + 0x54) = *(float *)(lVar3 + 0x54) + fVar9;
      *(float *)(lVar3 + 0x58) = *(float *)(lVar3 + 0x58) + fVar16;
      *(float *)(lVar8 + 0x50) = *(float *)(lVar8 + 0x50) + fVar10;
      *(float *)(lVar8 + 0x54) = *(float *)(lVar8 + 0x54) + fVar9;
      *(float *)(lVar8 + 0x58) = *(float *)(lVar8 + 0x58) + fVar16;
    } while ((ulong)uVar4 * 0x48 - lVar6 != 0);
  }
  uVar5 = (ulong)*(uint *)(in_x0 + 0x374);
  if (0 < (int)*(uint *)(in_x0 + 0x374)) {
    pfVar7 = (float *)(*(long *)(in_x0 + 0x380) + 0x58);
    do {
      fVar9 = pfVar7[-2];
      fVar10 = pfVar7[-1];
      uVar12 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
      fVar11 = *pfVar7;
      fVar13 = (float)NEON_fmadd(fVar11,fVar11,uVar12);
      if (1.192093e-07 < SQRT(fVar13)) {
        fVar13 = 1.0 / SQRT(fVar13);
        pfVar7[-2] = fVar13 * fVar9;
        pfVar7[-1] = fVar13 * fVar10;
        *pfVar7 = fVar13 * fVar11;
      }
      uVar5 = uVar5 - 1;
      pfVar7 = pfVar7 + 0x1e;
    } while (uVar5 != 0);
  }
  return;
}


