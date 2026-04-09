// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyAdditiveHeight
// Entry Point: 008a18dc
// Size: 168 bytes
// Signature: undefined applyAdditiveHeight(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::applyAdditiveHeight() */

uint TerrainDeformation::applyAdditiveHeight(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long in_x0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  uVar4 = *(uint *)(in_x0 + 0x128);
  if ((uVar4 == 0) && (uVar4 = *(uint *)(in_x0 + 0xfc), uVar4 != 0)) {
    uVar5 = 0;
    uVar3 = *(uint *)(in_x0 + 0xf8);
    do {
      if (uVar3 != 0) {
        uVar6 = 0;
        lVar7 = *(long *)(in_x0 + 0x100);
        fVar10 = *(float *)(in_x0 + 0xb8);
        do {
          uVar1 = uVar5;
          if (*(uint *)(in_x0 + 0xfc) <= uVar5) {
            uVar1 = *(uint *)(in_x0 + 0xfc) - 1;
          }
          uVar2 = 0;
          if (-1 < (int)uVar5) {
            uVar2 = uVar1;
          }
          uVar8 = (ulong)((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + uVar2 * uVar3);
          fVar11 = *(float *)(lVar7 + uVar8 * 0x38 + 0x14);
          if (0.0 < fVar11) {
            lVar9 = uVar8 * 0x38;
            fVar13 = *(float *)(lVar7 + lVar9);
            uVar12 = NEON_fmadd(fVar13 * fVar10,fVar11,fVar13);
            *(undefined4 *)(lVar7 + lVar9) = uVar12;
          }
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
    return 0;
  }
  return uVar4;
}


