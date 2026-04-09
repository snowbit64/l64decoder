// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onLoadMipsFail_async
// Entry Point: 0096f748
// Size: 264 bytes
// Signature: undefined __thiscall onLoadMipsFail_async(UpgradePipeline * this, ChangeRequest * param_1, MipsBuffer * param_2)


/* TextureStreamingManager::UpgradePipeline::onLoadMipsFail_async(TextureStreamingManager::ChangeRequest
   const&, TextureStreamingManager::UpgradePipeline::MipsBuffer const&) */

void __thiscall
TextureStreamingManager::UpgradePipeline::onLoadMipsFail_async
          (UpgradePipeline *this,ChangeRequest *param_1,MipsBuffer *param_2)

{
  void *pvVar1;
  long lVar2;
  
  logFeedback("[UpgradePipeline] 1ab: failed to load mip [id: %llu]",*(undefined8 *)param_1);
  lVar2 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + -1;
                    /* try { // try from 0096f794 to 0096f79b has its CatchHandler @ 0096f858 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any
            (*(CommonPipelineData **)this,*(ulonglong *)param_1,2,0);
  DAT_0210ee50 = *(int *)(this + 0x1d0) - *(int *)(param_1 + 0xc);
  DAT_0210ee40 = DAT_0210ee40 + -1;
  DAT_0210ee4c = DAT_0210ee4c + 1;
  *(int *)(this + 0x1d0) = DAT_0210ee50;
  FUN_00f27700(0xffffffff,this + 0x230);
  pvVar1 = *(void **)(param_2 + 4);
  Mutex::enterCriticalSection();
  if (pvVar1 == *(void **)(this + 0x2a8)) {
    this[0x2a0] = (UpgradePipeline)0x0;
                    /* try { // try from 0096f834 to 0096f83b has its CatchHandler @ 0096f850 */
    Mutex::leaveCriticalSection();
  }
  else {
                    /* try { // try from 0096f80c to 0096f813 has its CatchHandler @ 0096f854 */
    Mutex::leaveCriticalSection();
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}


