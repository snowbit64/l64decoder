// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTileJob
// Entry Point: 0096055c
// Size: 144 bytes
// Signature: undefined __thiscall issueTileJob(MultiresTextureGpuUpdater * this, uint param_1, uint param_2, SharedTileInfo * param_3, int param_4, int param_5)


/* MultiresTextureGpuUpdater::issueTileJob(unsigned int, unsigned int,
   MultiresTexture::SharedTileInfo const*, int, int) */

int __thiscall
MultiresTextureGpuUpdater::issueTileJob
          (MultiresTextureGpuUpdater *this,uint param_1,uint param_2,SharedTileInfo *param_3,
          int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  UniqueTileInfo *this_00;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x120);
  uVar3 = (*(long *)(this + 0x128) - lVar1 >> 3) * -0x1084210842108421;
  uVar5 = uVar3;
  if (*(long *)(this + 0x128) - lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (*(int *)(lVar1 + uVar4 * 0xf8 + 0x48) == 0) break;
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar3;
    } while (uVar4 <= uVar3 && uVar3 - uVar4 != 0);
  }
  uVar4 = uVar5 & 0xffffffff;
  if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    this_00 = (UniqueTileInfo *)(lVar1 + uVar4 * 0xf8);
    MultiresTexture::UniqueTileInfo::setLocation(this_00,param_1,param_2,param_3,param_4,param_5);
    iVar2 = (int)uVar5 + 1;
    *(undefined4 *)(this_00 + 0x48) = 1;
  }
  return iVar2;
}


