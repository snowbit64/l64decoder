// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateResult_any
// Entry Point: 009679fc
// Size: 192 bytes
// Signature: undefined __thiscall invalidateResult_any(UpgradePipeline * this, WorkerResult * param_1)


/* TextureStreamingManager::UpgradePipeline::invalidateResult_any(TextureStreamingManager::UpgradePipeline::WorkerResult&)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::invalidateResult_any
          (UpgradePipeline *this,WorkerResult *param_1)

{
  long lVar1;
  ulonglong uVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulonglong *)param_1;
  logFeedback("[UpgradePipeline] 2ab: cancel reallocate unregistered texture [id: %llu]",uVar2);
  lVar3 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar3 + 0xb0) = *(int *)(lVar3 + 0xb0) + -1;
                    /* try { // try from 00967a58 to 00967a5f has its CatchHandler @ 00967abc */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,uVar2,2,0);
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  local_60 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  onRequestDropped_any(this,(MipsBuffer)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


