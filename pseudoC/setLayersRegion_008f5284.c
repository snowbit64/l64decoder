// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayersRegion
// Entry Point: 008f5284
// Size: 168 bytes
// Signature: undefined __thiscall setLayersRegion(TerrainLodTexture * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* TerrainLodTexture::setLayersRegion(int, int, unsigned int, unsigned int, unsigned char const*) */

void __thiscall
TerrainLodTexture::setLayersRegion
          (TerrainLodTexture *this,int param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  uVar6 = *(uint *)(this + 8);
  uVar9 = param_2 & (param_2 >> 0x1f ^ 0xffffffffU);
  uVar4 = uVar6;
  if ((int)(param_3 + param_1) <= (int)uVar6) {
    uVar4 = param_3 + param_1;
  }
  uVar5 = uVar6;
  if ((int)(param_4 + param_2) <= (int)uVar6) {
    uVar5 = param_4 + param_2;
  }
  if ((int)uVar9 < (int)uVar5) {
    uVar3 = param_1 & (param_1 >> 0x1f ^ 0xffffffffU);
    uVar10 = uVar3 + uVar6 * uVar9;
    uVar11 = (uVar3 + param_3 * (uVar9 - param_2)) - param_1;
    do {
      if ((int)uVar3 < (int)uVar4) {
        lVar12 = *(long *)(this + 0x18);
        lVar13 = (ulong)uVar4 - (ulong)uVar3;
        uVar2 = uVar10;
        uVar1 = uVar11;
        do {
          uVar8 = (ulong)uVar1;
          uVar7 = (ulong)uVar2;
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
          lVar13 = lVar13 + -1;
          *(uchar *)(lVar12 + uVar7 * 2) = param_5[uVar8];
        } while (lVar13 != 0);
      }
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + param_3;
      uVar10 = uVar10 + uVar6;
    } while (uVar9 != uVar5);
  }
  this[0x30] = (TerrainLodTexture)0x1;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  return;
}


