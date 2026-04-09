// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: redrawVirtualTextureRegion_WC
// Entry Point: 0095eb2c
// Size: 244 bytes
// Signature: undefined __thiscall redrawVirtualTextureRegion_WC(MultiresTexture * this, float param_1, float param_2, float param_3, float param_4)


/* MultiresTexture::redrawVirtualTextureRegion_WC(float, float, float, float) */

void __thiscall
MultiresTexture::redrawVirtualTextureRegion_WC
          (MultiresTexture *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = *(long *)(this + 400);
  lVar2 = *(long *)(this + 0x198);
  if (lVar3 != lVar2) {
    fVar7 = (float)*(undefined8 *)(this + 0x2c);
    fVar8 = (float)((ulong)*(undefined8 *)(this + 0x2c) >> 0x20);
    fVar12 = 1.0 / (float)(ulong)(uint)(1 << (ulong)(*(uint *)(this + 0x24) & 0x1f));
    do {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 8));
      iVar11 = (int)*(undefined8 *)(lVar3 + 0x4c);
      iVar4 = (int)((ulong)*(undefined8 *)(lVar3 + 0x4c) >> 0x20);
      uVar10 = NEON_smax(CONCAT44((int)(float)(int)((param_2 - fVar8) * fVar12 * fVar9) - iVar4,
                                  (int)(float)(int)((param_1 - fVar7) * fVar12 * fVar9) - iVar11),0,
                         4);
      uVar13 = NEON_smin(CONCAT44(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar3 + 0x14)),
                         CONCAT44((int)(float)(int)((param_4 - fVar8) * fVar12 * fVar9) - iVar4,
                                  (int)(float)(int)((param_3 - fVar7) * fVar12 * fVar9) - iVar11),4)
      ;
      uVar14 = NEON_cmgt(uVar13,uVar10,4);
      if (((uint)uVar14 & (uint)((ulong)uVar14 >> 0x20) & 1) != 0) {
        iVar11 = (int)(uVar10 >> 0x20);
        do {
          uVar5 = uVar10 & 0xffffffff;
          do {
            iVar4 = (int)uVar5;
            uVar1 = iVar4 + 1;
            uVar5 = (ulong)uVar1;
            lVar6 = (ulong)(uint)(iVar4 + iVar11 * *(int *)(lVar3 + 0x70)) * 4;
            *(uint *)(*(long *)(lVar3 + 0x80) + lVar6) =
                 *(uint *)(*(long *)(lVar3 + 0x80) + lVar6) | 2;
          } while ((uint)uVar13 != uVar1);
          iVar11 = iVar11 + 1;
        } while (iVar11 != (int)((ulong)uVar13 >> 0x20));
      }
      lVar3 = lVar3 + 0xf0;
    } while (lVar3 != lVar2);
  }
  return;
}


