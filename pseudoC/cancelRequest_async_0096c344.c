// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelRequest_async
// Entry Point: 0096c344
// Size: 276 bytes
// Signature: undefined __thiscall cancelRequest_async(UpgradePipeline * this, ulonglong param_1)


/* TextureStreamingManager::UpgradePipeline::cancelRequest_async(unsigned long long) */

void __thiscall
TextureStreamingManager::UpgradePipeline::cancelRequest_async
          (UpgradePipeline *this,ulonglong param_1)

{
  ulonglong *puVar1;
  ulong uVar2;
  int iVar3;
  ulonglong **ppuVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  
  CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,param_1,1,0);
  logFeedback("[UpgradePipeline] 0: cancel upgrade request for texture [id: %llu]",param_1);
  uVar2 = *(ulong *)(this + 0x28);
  ppuVar4 = (ulonglong **)(*(long *)(this + 0x10) + (uVar2 / 0xaa) * 8);
  puVar7 = *ppuVar4;
  puVar6 = (ulonglong *)
           (*(long *)(*(long *)(this + 0x10) + ((*(long *)(this + 0x30) + uVar2) / 0xaa) * 8) +
           ((*(long *)(this + 0x30) + uVar2) % 0xaa) * 0x18);
  puVar5 = puVar7 + (uVar2 % 0xaa) * 3;
  puVar1 = puVar7 + (uVar2 % 0xaa) * 3;
  while ((puVar1 != puVar6 && (puVar5 = puVar1, *puVar1 != param_1))) {
    puVar1 = puVar1 + 3;
    puVar5 = puVar6;
    if ((long)puVar1 - (long)puVar7 == 0xff0) {
      ppuVar4 = ppuVar4 + 1;
      puVar7 = *ppuVar4;
      puVar1 = puVar7;
    }
  }
  iVar3 = *(int *)((long)puVar5 + 0xc);
  std::__ndk1::
  deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
  ::erase((int)this + 8);
  DAT_0210ee50 = *(int *)(this + 0x1d0) - iVar3;
  DAT_0210ee40 = DAT_0210ee40 + -1;
  DAT_0210ee4c = DAT_0210ee4c + 1;
  *(int *)(this + 0x1d0) = DAT_0210ee50;
  FUN_00f27700(0xffffffff,this + 0x230);
  return;
}


