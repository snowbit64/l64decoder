// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTile
// Entry Point: 0095d524
// Size: 208 bytes
// Signature: undefined __thiscall updateTile(MultiresTexture * this, TileData * param_1, uint param_2, uint param_3, uint param_4)


/* MultiresTexture::updateTile(MultiresTexture::GridLayer::TileData&, unsigned int, unsigned int,
   unsigned int) */

undefined8 __thiscall
MultiresTexture::updateTile
          (MultiresTexture *this,TileData *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  TileData TVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  if (*(ushort *)(param_1 + 2) == 0) {
    lVar4 = *(long *)(this + 0x110);
    if (lVar4 == *(long *)(this + 0x108)) {
      freeUpSomeTiles(this,1);
      lVar4 = *(long *)(this + 0x110);
      if (lVar4 == *(long *)(this + 0x108)) {
        return 0;
      }
    }
    uVar3 = *(uint *)(lVar4 + -4);
    *(uint **)(this + 0x110) = (uint *)(lVar4 + -4);
  }
  lVar4 = *(long *)(this + 400) + (ulong)param_2 * 0xf0;
  TVar2 = (TileData)
          MultiresTextureGpuUpdater::issueTileJob
                    (*(MultiresTextureGpuUpdater **)(this + 0x1b0),uVar3,param_2,
                     (SharedTileInfo *)(lVar4 + 0x20),*(int *)(lVar4 + 0x4c) + param_3,
                     *(int *)(lVar4 + 0x50) + param_4);
  lVar4 = *(long *)(this + 400);
  param_1[1] = TVar2;
  lVar4 = lVar4 + (ulong)param_2 * 0xf0;
  iVar1 = *(int *)(lVar4 + 0x70);
  *param_1 = (TileData)((byte)*param_1 & 0xfd);
  *(undefined4 *)(*(long *)(lVar4 + 0x80) + (ulong)(param_3 + iVar1 * param_4) * 4) =
       *(undefined4 *)param_1;
  return 1;
}


