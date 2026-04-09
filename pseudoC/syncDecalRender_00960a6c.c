// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncDecalRender
// Entry Point: 00960a6c
// Size: 44 bytes
// Signature: undefined __thiscall syncDecalRender(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, TileUpdateInfo * param_2)


/* MultiresTextureGpuUpdater::syncDecalRender(ICommandBuffer*,
   MultiresTextureGpuUpdater::TileUpdateInfo&) */

void __thiscall
MultiresTextureGpuUpdater::syncDecalRender
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,TileUpdateInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00960a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,*(undefined4 *)(this + 0x28),param_2 + 0x50,0,0,0,1);
  return;
}


