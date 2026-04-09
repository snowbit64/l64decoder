// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySetHeight
// Entry Point: 008a1984
// Size: 456 bytes
// Signature: undefined applySetHeight(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::applySetHeight() */

int TerrainDeformation::applySetHeight(void)

{
  Plane *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long in_x0;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  iVar4 = *(int *)(in_x0 + 0x128);
  if (iVar4 == 0) {
    uVar5 = *(uint *)(in_x0 + 0xfc);
    if (uVar5 != 0) {
      uVar9 = 0;
      this = (Plane *)(in_x0 + 0xc4);
      uVar8 = *(uint *)(in_x0 + 0xf8);
      do {
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            uVar1 = uVar9;
            if (uVar5 <= uVar9) {
              uVar1 = uVar5 - 1;
            }
            uVar5 = 0;
            if (-1 < (int)uVar9) {
              uVar5 = uVar1;
            }
            lVar12 = *(long *)(in_x0 + 0x100);
            uVar13 = (ulong)((uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) + uVar5 * uVar8);
            pfVar11 = (float *)(lVar12 + uVar13 * 0x38 + 0x14);
            if (0.0 < *pfVar11) {
              lVar6 = lVar12 + uVar13 * 0x38;
              lVar2 = *(long *)(in_x0 + 0x30);
              fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 8));
              fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0xc));
              fVar18 = *(float *)(*(long *)(in_x0 + 0x38) + 0x94);
              fVar19 = *(float *)(*(long *)(in_x0 + 0x38) + 0xa8);
              fVar14 = (fVar14 - fVar18) * fVar19;
              fVar19 = (fVar16 - fVar18) * fVar19;
              RawTransformGroup::updateWorldTransformation();
              uVar15 = NEON_fmadd(fVar14,*(undefined4 *)(lVar2 + 0xb8),*(float *)(lVar2 + 200) * 0.0
                                 );
              uVar17 = NEON_fmadd(fVar14,*(undefined4 *)(lVar2 + 0xc0),
                                  *(float *)(lVar2 + 0xd0) * 0.0);
              fVar16 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar2 + 0xd8),uVar15);
              fVar19 = (float)NEON_fmadd(fVar19,*(undefined4 *)(lVar2 + 0xe0),uVar17);
              fVar16 = *(float *)(lVar2 + 0xe8) + fVar16;
              fVar19 = *(float *)(lVar2 + 0xf0) + fVar19;
              fVar18 = (float)Plane::getYatXZ(this,fVar16,fVar19);
              fVar14 = *(float *)(in_x0 + 0xbc);
              if (fVar14 <= fVar18) {
                fVar18 = (float)Plane::getYatXZ(this,fVar16,fVar19);
                fVar14 = *(float *)(in_x0 + 0xc0);
                if (fVar18 <= fVar14) {
                  fVar14 = (float)Plane::getYatXZ(this,fVar16,fVar19);
                }
              }
              pfVar7 = (float *)(lVar12 + uVar13 * 0x38);
              fVar18 = *pfVar11;
              fVar16 = *pfVar7;
              if (fVar16 <= fVar14) {
                fVar16 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0xb8),fVar18,fVar16);
                bVar3 = fVar14 < fVar16;
              }
              else {
                fVar16 = (float)NEON_fmsub(*(undefined4 *)(in_x0 + 0xb8),fVar18,fVar16);
                bVar3 = fVar16 < fVar14;
              }
              if (!bVar3) {
                fVar14 = fVar16;
              }
              *pfVar7 = fVar14;
            }
            uVar8 = *(uint *)(in_x0 + 0xf8);
            uVar5 = *(uint *)(in_x0 + 0xfc);
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar8);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
    iVar4 = 0;
  }
  return iVar4;
}


