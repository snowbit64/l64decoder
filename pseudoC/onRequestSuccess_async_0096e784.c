// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRequestSuccess_async
// Entry Point: 0096e784
// Size: 144 bytes
// Signature: undefined __thiscall onRequestSuccess_async(DowngradePipeline * this, ReallocateRequest * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextureStreamingManager::DowngradePipeline::onRequestSuccess_async(TextureStreamingManager::DowngradePipeline::ReallocateRequest&)
    */

void __thiscall
TextureStreamingManager::DowngradePipeline::onRequestSuccess_async
          (DowngradePipeline *this,ReallocateRequest *param_1)

{
  _DAT_0210ee54 = CONCAT44((int)((ulong)_DAT_0210ee54 >> 0x20) + 1,(int)_DAT_0210ee54 + -1);
  FUN_00f27700(*(undefined4 *)(param_1 + 0xc),this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  CommonPipelineData::onChangeRequestSucceeded_async
            (*(CommonPipelineData **)this,*(ulonglong *)param_1,*(int *)(param_1 + 0xc),
             *(int *)(param_1 + 8),4);
  logFeedback("[DowngradePipeline] 3: finish request for texture [id: %llu]: %i mips (%i B)",
              *(undefined8 *)param_1,(ulong)*(uint *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0xc));
  FUN_00f27700(0xffffffff,this + 0x1a4);
  return;
}


