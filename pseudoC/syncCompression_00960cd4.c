// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncCompression
// Entry Point: 00960cd4
// Size: 124 bytes
// Signature: undefined __thiscall syncCompression(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, TileUpdateInfo * param_2)


/* MultiresTextureGpuUpdater::syncCompression(ICommandBuffer*,
   MultiresTextureGpuUpdater::TileUpdateInfo&) */

void __thiscall
MultiresTextureGpuUpdater::syncCompression
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,TileUpdateInfo *param_2)

{
  long lVar1;
  TileUpdateInfo *pTVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0x110);
  if (*(int *)(lVar1 + 0x1c) != 0) {
    uVar3 = 0;
    pTVar2 = param_2 + 0x70;
    do {
      (**(code **)(*(long *)param_1 + 0x120))(param_1,0,0,*(undefined4 *)(lVar1 + 0x18),pTVar2,3,8);
      lVar1 = *(long *)(this + 0x110);
      uVar3 = uVar3 + 1;
      pTVar2 = pTVar2 + 0x20;
    } while (uVar3 < *(uint *)(lVar1 + 0x1c));
  }
  return;
}


