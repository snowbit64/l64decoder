// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doDecalRender
// Entry Point: 00960a3c
// Size: 48 bytes
// Signature: undefined __thiscall doDecalRender(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, TileUpdateInfo * param_2)


/* MultiresTextureGpuUpdater::doDecalRender(ICommandBuffer*,
   MultiresTextureGpuUpdater::TileUpdateInfo&) */

void __thiscall
MultiresTextureGpuUpdater::doDecalRender
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,TileUpdateInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(long *)(param_2 + 8) + 4);
  uVar1 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00960a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))
            (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),uVar2,uVar2,this,
             param_1,uVar1,uVar1,*(undefined4 *)(this + 0x28),param_2 + 0x50,
             *(undefined8 *)(this + 0x358));
  return;
}


