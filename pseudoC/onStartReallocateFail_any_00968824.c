// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartReallocateFail_any
// Entry Point: 00968824
// Size: 192 bytes
// Signature: undefined __thiscall onStartReallocateFail_any(DowngradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::onStartReallocateFail_any(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::onStartReallocateFail_any
          (DowngradePipeline *this,ChangeRequest *param_1)

{
  long lVar1;
  
  logFeedback("[DowngradePipeline] 1: start reallocate texture failed [id: %llu]",
              *(undefined8 *)param_1);
  lVar1 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar1 + 0xb0) = *(int *)(lVar1 + 0xb0) + -1;
                    /* try { // try from 00968868 to 0096886f has its CatchHandler @ 009688e4 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any
            (*(CommonPipelineData **)this,*(ulonglong *)param_1,4,0);
  logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",*(undefined8 *)param_1);
  DAT_0210ee54 = DAT_0210ee54 + -1;
  DAT_0210ee5c = DAT_0210ee5c + 1;
  FUN_00f27700(*(undefined4 *)(param_1 + 0xc),this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  FUN_00f27700(0xffffffff,this + 0x1a4);
  return;
}


