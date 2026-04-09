// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: surfaceArea
// Entry Point: 00b65208
// Size: 224 bytes
// Signature: undefined surfaceArea(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::surfaceArea() const */

float Brep::surfaceArea(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long in_x0;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar5 = *(long *)(in_x0 + 0x2f70) - *(long *)(in_x0 + 0x2f68);
  if ((int)(uVar5 >> 5) != 0) {
    fVar8 = 0.0;
    lVar4 = *(long *)(in_x0 + 0x2f50);
    uVar5 = uVar5 >> 5 & 0xffffffff;
    lVar6 = *(long *)(in_x0 + 0x2ef0);
    puVar7 = (ushort *)(*(long *)(in_x0 + 0x2f68) + 0x18);
    do {
      uVar5 = uVar5 - 1;
      pfVar1 = (float *)(lVar6 + (ulong)*(ushort *)(lVar4 + (ulong)puVar7[-4] * 0xc) * 0x10);
      pfVar2 = (float *)(lVar6 + (ulong)*(ushort *)(lVar4 + (ulong)puVar7[-8] * 0xc) * 0x10);
      pfVar3 = (float *)(lVar6 + (ulong)*(ushort *)(lVar4 + (ulong)*puVar7 * 0xc) * 0x10);
      fVar9 = *pfVar1 - *pfVar2;
      fVar11 = pfVar1[1] - pfVar2[1];
      fVar14 = pfVar3[1] - pfVar2[1];
      fVar15 = pfVar1[2] - pfVar2[2];
      fVar17 = pfVar3[2] - pfVar2[2];
      fVar13 = *pfVar3 - *pfVar2;
      fVar16 = (float)NEON_fmadd(fVar15,fVar13,fVar17 * -fVar9);
      uVar12 = NEON_fmadd(fVar11,fVar17,fVar14 * -fVar15);
      uVar10 = NEON_fmadd(fVar9,fVar14,fVar13 * -fVar11);
      uVar12 = NEON_fmadd(uVar12,uVar12,fVar16 * fVar16);
      fVar9 = (float)NEON_fmadd(uVar10,uVar10,uVar12);
      fVar8 = fVar8 + SQRT(fVar9);
      puVar7 = puVar7 + 0x10;
    } while (uVar5 != 0);
    return fVar8 * 0.5;
  }
  return 0.0;
}


