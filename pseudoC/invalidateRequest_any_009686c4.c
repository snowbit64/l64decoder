// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateRequest_any
// Entry Point: 009686c4
// Size: 204 bytes
// Signature: undefined __thiscall invalidateRequest_any(DowngradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::invalidateRequest_any(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::invalidateRequest_any
          (DowngradePipeline *this,ChangeRequest *param_1)

{
  ulonglong uVar1;
  long lVar2;
  
  uVar1 = *(ulonglong *)param_1;
  logFeedback("[DowngradePipeline] 1: invalidate request for unregistered/deleted texture [id: %llu]"
              ,uVar1);
  lVar2 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + -1;
                    /* try { // try from 00968710 to 00968717 has its CatchHandler @ 00968790 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,uVar1,4,0);
  logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",*(undefined8 *)param_1);
  DAT_0210ee54 = DAT_0210ee54 + -1;
  DAT_0210ee5c = DAT_0210ee5c + 1;
  FUN_00f27700(*(undefined4 *)(param_1 + 0xc),this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  FUN_00f27700(0xffffffff,this + 0x1a4);
  return;
}


