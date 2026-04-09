// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLodDistances
// Entry Point: 00a74afc
// Size: 216 bytes
// Signature: undefined updateLodDistances(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainLayerTransformGroup::updateLodDistances() */

void TerrainLayerTransformGroup::updateLodDistances(void)

{
  GsMaterial **ppGVar1;
  GsMaterial **ppGVar2;
  ushort uVar3;
  TerrainLayerTransformGroup *in_x0;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  EngineManager::getInstance();
  lVar7 = *(long *)(in_x0 + 0x28);
  lVar6 = *(long *)(in_x0 + 0x30);
  if ((int)((ulong)(lVar6 - lVar7) >> 3) != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(lVar7 + uVar4 * 8);
      if ((*(byte *)(lVar5 + 0x11) >> 3 & 1) != 0) {
        uVar3 = *(ushort *)(lVar5 + 0x196);
        if (uVar3 != 0) {
          ppGVar1 = (GsMaterial **)(lVar5 + 0x178);
          ppGVar2 = ppGVar1;
          if (uVar3 != 1) {
            ppGVar2 = (GsMaterial **)*ppGVar1;
          }
          setupCustomShaderVariation(in_x0,*ppGVar2,*(uint *)(*ppGVar2 + 0x88));
          if (uVar3 != 1) {
            lVar6 = (ulong)uVar3 - 1;
            lVar7 = 8;
            do {
              ppGVar2 = ppGVar1;
              if (*(short *)(lVar5 + 0x196) != 1) {
                ppGVar2 = (GsMaterial **)(*(long *)(lVar5 + 0x178) + lVar7);
              }
              setupCustomShaderVariation(in_x0,*ppGVar2,*(uint *)(*ppGVar2 + 0x88));
              lVar7 = lVar7 + 8;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          lVar7 = *(long *)(in_x0 + 0x28);
          lVar6 = *(long *)(in_x0 + 0x30);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < ((ulong)(lVar6 - lVar7) >> 3 & 0xffffffff));
  }
  return;
}


