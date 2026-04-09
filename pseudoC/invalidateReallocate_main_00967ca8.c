// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateReallocate_main
// Entry Point: 00967ca8
// Size: 240 bytes
// Signature: undefined __thiscall invalidateReallocate_main(UpgradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::invalidateReallocate_main(TextureStreamingManager::UpgradePipeline::ReallocateRequest&)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::invalidateReallocate_main
          (UpgradePipeline *this,ReallocateRequest *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(ulonglong *)param_1;
  logFeedback("[UpgradePipeline] 3ab: cancel unregistered texture [id: %llu]",uVar4);
  lVar5 = *(long *)this;
  Mutex::enterCriticalSection();
  *(int *)(lVar5 + 0xb0) = *(int *)(lVar5 + 0xb0) + -1;
                    /* try { // try from 00967d04 to 00967d0b has its CatchHandler @ 00967d98 */
  Mutex::leaveCriticalSection();
  CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,uVar4,2,0);
  RenderDeviceManager::getInstance();
  plVar2 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar3 = (**(code **)(*plVar2 + 0x138))();
  (**(code **)(*plVar2 + 0x160))(plVar2,uVar3,*(undefined8 *)(param_1 + 0x28));
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


