// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onCompletedRequest_async
// Entry Point: 0096dbe0
// Size: 160 bytes
// Signature: undefined __thiscall onCompletedRequest_async(UpgradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::onCompletedRequest_async(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::UpgradePipeline::onCompletedRequest_async
          (UpgradePipeline *this,ChangeRequest *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulonglong uVar4;
  long lVar5;
  
  lVar3 = Watch::getCurrentTicks();
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  lVar5 = *(long *)(param_1 + 0x10);
  DAT_0210ee50 = *(int *)(this + 0x1d0) - iVar2;
  uVar4 = *(ulonglong *)param_1;
  *(int *)(this + 0x1d0) = DAT_0210ee50;
  CommonPipelineData::onChangeRequestSucceeded_async
            (*(CommonPipelineData **)this,uVar4,iVar2,iVar1,2);
  DAT_0210ee44 = CONCAT44((int)((ulong)DAT_0210ee44 >> 0x20) + 1,(int)DAT_0210ee44 + -1);
  logFeedback("[UpgradePipeline] 4ab: finish upgrade of texture [id: %llu]: +%i mips (+%i B) in %u ticks"
              ,*(undefined8 *)param_1,(ulong)*(uint *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0xc),
              lVar3 - lVar5);
  FUN_00f27700(0xffffffff,this + 0x230);
  return;
}


