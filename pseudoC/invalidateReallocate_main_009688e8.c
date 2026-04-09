// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateReallocate_main
// Entry Point: 009688e8
// Size: 248 bytes
// Signature: undefined __thiscall invalidateReallocate_main(DowngradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::invalidateReallocate_main(TextureStreamingManager::DowngradePipeline::ReallocateRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::invalidateReallocate_main
          (DowngradePipeline *this,ReallocateRequest *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  long lVar4;
  
  uVar3 = *(ulonglong *)param_1;
  logFeedback("[DowngradePipeline] 2: invalidate waiting reallocate for unregistered/deleted texture [id: %llu]"
              ,uVar3);
  lVar4 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar4 + 0xb0) = *(int *)(lVar4 + 0xb0) + -1;
                    /* try { // try from 00968934 to 0096893b has its CatchHandler @ 009689e0 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,uVar3,4,0);
  logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",*(undefined8 *)param_1);
  DAT_0210ee54 = DAT_0210ee54 + -1;
  DAT_0210ee5c = DAT_0210ee5c + 1;
  FUN_00f27700(*(undefined4 *)(param_1 + 0xc),this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  FUN_00f27700(0xffffffff,this + 0x1a4);
  RenderDeviceManager::getInstance();
  plVar1 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar2 = (**(code **)(*plVar1 + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x009689dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x160))(plVar1,uVar2,*(undefined8 *)(param_1 + 0x18));
  return;
}


