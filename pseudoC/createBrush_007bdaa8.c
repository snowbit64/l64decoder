// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBrush
// Entry Point: 007bdaa8
// Size: 280 bytes
// Signature: undefined __cdecl createBrush(BaseTerrain * param_1, int param_2)


/* TerrainBrush::createBrush(BaseTerrain*, int) */

undefined8 * TerrainBrush::createBrush(BaseTerrain *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x38);
    iVar3 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 4);
    uVar2 = iVar3 * -0x45d1745d;
    if ((uint)param_2 < (int)((ulong)(*(long *)(param_1 + 0x40) - lVar1) >> 6) + uVar2) {
      puVar4 = (undefined8 *)operator_new(0x18);
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      if ((uint)param_2 < uVar2) {
        fVar7 = 1.0;
        *(int *)puVar4 = param_2;
        *(undefined4 *)(puVar4 + 2) = 1;
      }
      else {
        lVar1 = lVar1 + (ulong)(uint)(param_2 + iVar3 * 0x45d1745d) * 0x40;
        iVar3 = *(int *)(lVar1 + 0x20);
        *(int *)(puVar4 + 2) = iVar3;
        if (iVar3 != 0) {
          uVar5 = 0;
          do {
            lVar6 = uVar5 * 4;
            uVar5 = uVar5 + 1;
            *(undefined4 *)((long)puVar4 + lVar6) = *(undefined4 *)(lVar1 + 0x24 + lVar6);
          } while (uVar5 < *(uint *)(puVar4 + 2));
        }
        fVar8 = *(float *)(lVar1 + 0x34);
        fVar7 = (float)BaseTerrain::getUnitsPerPixel();
        iVar3 = BaseTerrain::getHeightMapSize();
        uVar5 = BaseTerrain::getLodTextureSize();
        fVar7 = (fVar8 * fVar7 * (float)(ulong)(iVar3 - 1)) / (float)(uVar5 & 0xffffffff);
      }
      *(float *)((long)puVar4 + 0x14) = fVar7;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}


