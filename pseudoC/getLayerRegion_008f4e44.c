// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerRegion
// Entry Point: 008f4e44
// Size: 152 bytes
// Signature: undefined __thiscall getLayerRegion(TerrainLodTexture * this, uint param_1, int param_2, int param_3, uint param_4, uint param_5, uchar * param_6)


/* TerrainLodTexture::getLayerRegion(unsigned int, int, int, unsigned int, unsigned int, unsigned
   char*) const */

void __thiscall
TerrainLodTexture::getLayerRegion
          (TerrainLodTexture *this,uint param_1,int param_2,int param_3,uint param_4,uint param_5,
          uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  
  if (param_5 != 0) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      iVar8 = *(int *)(this + 8);
      uVar3 = uVar6 + param_3;
      if ((int)(iVar8 - 1U) <= (int)(uVar6 + param_3)) {
        uVar3 = iVar8 - 1U;
      }
      if (param_4 != 0) {
        uVar2 = param_2;
        uVar1 = uVar5;
        uVar7 = (ulong)param_4;
        while( true ) {
          uVar7 = uVar7 - 1;
          uVar4 = uVar2;
          if ((int)(iVar8 - 1U) <= (int)uVar2) {
            uVar4 = iVar8 - 1U;
          }
          param_6[uVar1] =
               -(*(byte *)(*(long *)(this + 0x18) +
                          (ulong)((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) +
                                 iVar8 * (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) * 2) ==
                param_1);
          if (uVar7 == 0) break;
          iVar8 = *(int *)(this + 8);
          uVar1 = uVar1 + 1;
          uVar2 = uVar2 + 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + param_4;
    } while (uVar6 != param_5);
  }
  return;
}


