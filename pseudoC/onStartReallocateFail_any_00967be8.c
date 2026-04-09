// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartReallocateFail_any
// Entry Point: 00967be8
// Size: 188 bytes
// Signature: undefined __thiscall onStartReallocateFail_any(UpgradePipeline * this, WorkerResult * param_1)


/* TextureStreamingManager::UpgradePipeline::onStartReallocateFail_any(TextureStreamingManager::UpgradePipeline::WorkerResult&)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::onStartReallocateFail_any
          (UpgradePipeline *this,WorkerResult *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  logFeedback("[UpgradePipeline] 2ab: start reallocate texture failed [id: %llu]",
              *(undefined8 *)param_1);
  lVar2 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar2 + 0xb0) = *(int *)(lVar2 + 0xb0) + -1;
                    /* try { // try from 00967c40 to 00967c47 has its CatchHandler @ 00967ca4 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any
            (*(CommonPipelineData **)this,*(ulonglong *)param_1,2,0);
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


