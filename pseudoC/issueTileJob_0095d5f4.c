// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTileJob
// Entry Point: 0095d5f4
// Size: 48 bytes
// Signature: undefined __thiscall issueTileJob(MultiresTexture * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* MultiresTexture::issueTileJob(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
MultiresTexture::issueTileJob
          (MultiresTexture *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 400) + (ulong)param_2 * 0xf0;
  MultiresTextureGpuUpdater::issueTileJob
            (*(MultiresTextureGpuUpdater **)(this + 0x1b0),param_1,param_2,
             (SharedTileInfo *)(lVar1 + 0x20),*(int *)(lVar1 + 0x4c) + param_3,
             *(int *)(lVar1 + 0x50) + param_4);
  return;
}


