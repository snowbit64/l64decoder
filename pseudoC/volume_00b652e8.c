// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: volume
// Entry Point: 00b652e8
// Size: 192 bytes
// Signature: undefined volume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::volume() const */

float Brep::volume(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long in_x0;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar7 = *(long *)(in_x0 + 0x2f68);
  if (lVar7 == *(long *)(in_x0 + 0x2f70)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = 0.0;
    lVar8 = *(long *)(in_x0 + 0x2f50);
    lVar9 = *(long *)(in_x0 + 0x2ef0);
    do {
      puVar1 = (ushort *)(lVar7 + 0x10);
      puVar2 = (ushort *)(lVar7 + 0x18);
      puVar3 = (ushort *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      pfVar4 = (float *)(lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*puVar1 * 0xc) * 0x10);
      pfVar5 = (float *)(lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*puVar2 * 0xc) * 0x10);
      puVar6 = (undefined4 *)(lVar9 + (ulong)*(ushort *)(lVar8 + (ulong)*puVar3 * 0xc) * 0x10);
      fVar11 = (float)NEON_fmadd(pfVar4[2],*pfVar5,pfVar5[2] * -*pfVar4);
      uVar13 = NEON_fmadd(pfVar4[1],pfVar5[2],pfVar5[1] * -pfVar4[2]);
      uVar12 = NEON_fmadd(*puVar6,uVar13,(float)puVar6[1] * fVar11);
      uVar13 = NEON_fmadd(*pfVar4,pfVar5[1],*pfVar5 * -pfVar4[1]);
      fVar11 = (float)NEON_fmadd(puVar6[2],uVar13,uVar12);
      fVar10 = fVar10 + fVar11;
    } while (lVar7 != *(long *)(in_x0 + 0x2f70));
  }
  return fVar10 / 6.0;
}


