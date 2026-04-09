// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: redrawVirtualTextureRegion
// Entry Point: 0095ea64
// Size: 200 bytes
// Signature: undefined __thiscall redrawVirtualTextureRegion(MultiresTexture * this, float param_1, float param_2, float param_3, float param_4)


/* MultiresTexture::redrawVirtualTextureRegion(float, float, float, float) */

void __thiscall
MultiresTexture::redrawVirtualTextureRegion
          (MultiresTexture *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(this + 0x198);
  for (lVar2 = *(long *)(this + 400); lVar2 != lVar3; lVar2 = lVar2 + 0xf0) {
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 8));
    iVar9 = (int)*(undefined8 *)(lVar2 + 0x4c);
    iVar4 = (int)((ulong)*(undefined8 *)(lVar2 + 0x4c) >> 0x20);
    uVar8 = NEON_smax(CONCAT44((int)(float)(int)(param_2 * fVar7) - iVar4,
                               (int)(float)(int)(param_1 * fVar7) - iVar9),0,4);
    uVar10 = NEON_smin(CONCAT44(*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x14)),
                       CONCAT44((int)(float)(int)(param_4 * fVar7) - iVar4,
                                (int)(float)(int)(param_3 * fVar7) - iVar9),4);
    uVar11 = NEON_cmgt(uVar10,uVar8,4);
    if (((uint)uVar11 & (uint)((ulong)uVar11 >> 0x20) & 1) != 0) {
      iVar9 = (int)(uVar8 >> 0x20);
      do {
        uVar5 = uVar8 & 0xffffffff;
        do {
          iVar4 = (int)uVar5;
          uVar1 = iVar4 + 1;
          uVar5 = (ulong)uVar1;
          lVar6 = (ulong)(uint)(iVar4 + iVar9 * *(int *)(lVar2 + 0x70)) * 4;
          *(uint *)(*(long *)(lVar2 + 0x80) + lVar6) =
               *(uint *)(*(long *)(lVar2 + 0x80) + lVar6) | 2;
        } while ((uint)uVar10 != uVar1);
        iVar9 = iVar9 + 1;
      } while (iVar9 != (int)((ulong)uVar10 >> 0x20));
    }
  }
  return;
}


