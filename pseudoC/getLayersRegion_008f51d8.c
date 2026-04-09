// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayersRegion
// Entry Point: 008f51d8
// Size: 172 bytes
// Signature: undefined __thiscall getLayersRegion(TerrainLodTexture * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* TerrainLodTexture::getLayersRegion(int, int, unsigned int, unsigned int, unsigned char*) const */

void __thiscall
TerrainLodTexture::getLayersRegion
          (TerrainLodTexture *this,int param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint uVar8;
  
  if (param_4 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *(int *)(this + 8) - 1;
      uVar1 = uVar8 + param_2;
      if ((int)uVar3 <= (int)(uVar8 + param_2)) {
        uVar1 = uVar3;
      }
      puVar6 = param_5;
      if (param_3 != 0) {
        uVar2 = param_1;
        if ((int)uVar3 <= param_1) {
          uVar2 = uVar3;
        }
        uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        puVar6 = param_5 + 1;
        *param_5 = *(uchar *)(*(long *)(this + 0x18) +
                             (ulong)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) +
                                    *(int *)(this + 8) * uVar1) * 2);
        puVar7 = puVar6;
        iVar5 = param_3 - 1;
        uVar3 = param_1 + 1;
        if (param_3 != 1) {
          do {
            uVar4 = *(int *)(this + 8) - 1;
            uVar2 = uVar3;
            if ((int)uVar4 <= (int)uVar3) {
              uVar2 = uVar4;
            }
            uVar3 = uVar3 + 1;
            iVar5 = iVar5 + -1;
            puVar6 = puVar7 + 1;
            *puVar7 = *(uchar *)(*(long *)(this + 0x18) +
                                (ulong)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) +
                                       *(int *)(this + 8) * uVar1) * 2);
            puVar7 = puVar6;
          } while (iVar5 != 0);
        }
      }
      uVar8 = uVar8 + 1;
      param_5 = puVar6;
    } while (uVar8 != param_4);
  }
  return;
}


