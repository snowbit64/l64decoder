// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePlayerCameraParameters
// Entry Point: 0095e328
// Size: 172 bytes
// Signature: undefined __thiscall updatePlayerCameraParameters(MultiresTexture * this, ICommandBuffer * param_1, CameraInfo * param_2)


/* MultiresTexture::updatePlayerCameraParameters(ICommandBuffer*, PlayerCenteredSystem::CameraInfo
   const&) */

void __thiscall
MultiresTexture::updatePlayerCameraParameters
          (MultiresTexture *this,ICommandBuffer *param_1,CameraInfo *param_2)

{
  uint uVar1;
  
  if ((*(float *)param_2 == 0.0) && (*(float *)(param_2 + 8) == 0.0)) {
    return;
  }
  setFocusPoint(this,*(float *)param_2 - *(float *)(this + 0x2c),
                *(float *)(param_2 + 8) - *(float *)(this + 0x30));
  computeTileLods((CameraInfo *)this);
  if (this[0x1b8] != (MultiresTexture)0x0) {
    uVar1 = MultiresTextureGpuUpdater::checkTileJobs(*(ICommandBuffer **)(this + 0x1b0));
    if (uVar1 != 0) {
      scanForTileUpdateJobs(this,uVar1);
    }
    MultiresTextureGpuUpdater::executeGpuWork(*(MultiresTextureGpuUpdater **)(this + 0x1b0),param_1)
    ;
  }
  uploadChangedIndexLayers(this,param_1);
  return;
}


