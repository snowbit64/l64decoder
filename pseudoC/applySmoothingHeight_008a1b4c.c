// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySmoothingHeight
// Entry Point: 008a1b4c
// Size: 480 bytes
// Signature: undefined applySmoothingHeight(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::applySmoothingHeight() */

uint TerrainDeformation::applySmoothingHeight(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long in_x0;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar15 = *(uint *)(in_x0 + 0x128);
  if ((uVar15 == 0) && (uVar15 = *(uint *)(in_x0 + 0xfc), uVar15 != 0)) {
    uVar5 = *(uint *)(in_x0 + 0xf8);
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      if (uVar5 != 0) {
        uVar13 = 0;
        lVar17 = *(long *)(in_x0 + 0x100);
        uVar10 = uVar16 - 1;
        fVar18 = *(float *)(in_x0 + 0xb8);
        do {
          uVar6 = *(uint *)(in_x0 + 0xfc);
          uVar12 = uVar6 - 1;
          uVar2 = uVar16;
          if (uVar6 <= uVar16) {
            uVar2 = uVar12;
          }
          uVar4 = 0;
          if (-1 < (int)uVar16) {
            uVar4 = uVar2;
          }
          iVar9 = uVar4 * uVar5;
          uVar2 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
          fVar19 = *(float *)(lVar17 + (ulong)(iVar9 + uVar2) * 0x38 + 0x14);
          if (0.0 < fVar19) {
            uVar11 = uVar13 - 1;
            puVar14 = (undefined4 *)(lVar17 + (ulong)(iVar9 + uVar2) * 0x38);
            uVar4 = uVar11;
            if (uVar5 <= uVar11) {
              uVar4 = uVar5 - 1;
            }
            uVar3 = 0;
            if (-1 < (int)uVar11) {
              uVar3 = uVar4;
            }
            uVar4 = uVar10;
            if (uVar6 <= uVar10) {
              uVar4 = uVar12;
            }
            uVar11 = 0;
            if (-1 < (int)uVar10) {
              uVar11 = uVar4;
            }
            fVar25 = (float)puVar14[1];
            iVar7 = uVar11 * uVar5;
            uVar4 = uVar5 - 1;
            if (uVar13 + 1 < uVar5) {
              uVar4 = uVar13 + 1;
            }
            uVar11 = 0;
            if (-1 < (int)(uVar13 + 1)) {
              uVar11 = uVar4;
            }
            uVar4 = uVar1;
            if (uVar6 <= uVar1) {
              uVar4 = uVar12;
            }
            uVar6 = 0;
            if (-1 < (int)uVar1) {
              uVar6 = uVar4;
            }
            iVar8 = uVar6 * uVar5;
            uVar20 = NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar7 + uVar3) * 0x38 + 4),
                                0x3d4ccccd,
                                *(float *)(lVar17 + (ulong)(iVar9 + uVar3) * 0x38 + 4) * 0.15);
            uVar22 = NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar7 + uVar2) * 0x38 + 4),
                                0x3e19999a,fVar25 * 0.2);
            fVar21 = (float)NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar8 + uVar3) * 0x38 + 4),
                                       0x3d4ccccd,uVar20);
            fVar23 = (float)NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar8 + uVar2) * 0x38 + 4),
                                       0x3e19999a,uVar22);
            uVar20 = NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar7 + uVar11) * 0x38 + 4),
                                0x3d4ccccd,
                                *(float *)(lVar17 + (ulong)(iVar9 + uVar11) * 0x38 + 4) * 0.15);
            fVar24 = (float)NEON_fmadd(*(undefined4 *)(lVar17 + (ulong)(iVar8 + uVar11) * 0x38 + 4),
                                       0x3d4ccccd,uVar20);
            uVar20 = NEON_fmadd(fVar18 * ((fVar21 + fVar23 + fVar24) - fVar25),fVar19,fVar25);
            *puVar14 = uVar20;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar5);
      }
      uVar16 = uVar1;
    } while (uVar1 != uVar15);
    uVar15 = 0;
  }
  return uVar15;
}


