// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxFillLevel
// Entry Point: 008d11b8
// Size: 244 bytes
// Signature: undefined setMaxFillLevel(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::setMaxFillLevel() */

void FillPlaneGeometry::setMaxFillLevel(void)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  long in_x0;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar4 = *(float **)(in_x0 + 0xe0);
  pfVar1 = *(float **)(in_x0 + 0xe8);
  uVar2 = (long)pfVar1 - (long)pfVar4;
  if (uVar2 != 0) {
    lVar5 = *(long *)(in_x0 + 0xb0);
    do {
      fVar10 = (float)NEON_fmadd(pfVar4[1],*(undefined4 *)(in_x0 + 0x124),
                                 *(undefined4 *)(in_x0 + 0x120));
      *pfVar4 = fVar10;
      if (*(short *)((long)pfVar4 + 0x16) == -1) {
        fVar9 = *(float *)(in_x0 + 0x9c);
        fVar10 = (float)NEON_fmadd(fVar10 * (float)(uVar2 >> 5 & 0xffffffff),
                                   *(undefined4 *)(in_x0 + 0x11c),fVar9);
        if ((fVar9 <= fVar10) &&
           (fVar9 = *(float *)(in_x0 + 0xa8), fVar10 <= *(float *)(in_x0 + 0xa8))) {
          fVar9 = fVar10;
        }
        pfVar6 = *(float **)(lVar5 + (ulong)*(ushort *)(pfVar4 + 5) * 8);
        pfVar3 = *(float **)(pfVar6 + 4);
        do {
          pfVar8 = pfVar3;
          pfVar3 = pfVar8 + 3;
          fVar10 = pfVar8[4];
          pfVar7 = (float *)(*(long *)(pfVar6 + 6) + -0xc);
          if (pfVar3 == (float *)(*(long *)(pfVar6 + 6) + -0xc)) break;
          pfVar7 = pfVar3;
        } while (fVar9 < fVar10);
        fVar13 = pfVar8[2];
        fVar14 = pfVar8[5];
        fVar11 = *pfVar8;
        fVar10 = (fVar9 - fVar10) / (pfVar8[1] - fVar10);
        fVar12 = *pfVar7;
        pfVar6[1] = fVar9;
        fVar9 = (float)NEON_fmadd(fVar11 - fVar12,fVar10,fVar12);
        fVar10 = (float)NEON_fmadd(fVar13 - fVar14,fVar10,fVar14);
        *pfVar6 = fVar9 + pfVar6[10];
        pfVar6[2] = fVar10 + pfVar6[0xb];
      }
      pfVar4 = pfVar4 + 8;
    } while (pfVar4 != pfVar1);
  }
  *(undefined2 *)(in_x0 + 0x94) = 0x101;
  return;
}


