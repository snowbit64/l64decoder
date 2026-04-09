// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartReallocateSuccess_async
// Entry Point: 0096db0c
// Size: 176 bytes
// Signature: undefined __thiscall onStartReallocateSuccess_async(UpgradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::onStartReallocateSuccess_async(TextureStreamingManager::UpgradePipeline::ReallocateRequest&)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::onStartReallocateSuccess_async
          (UpgradePipeline *this,ReallocateRequest *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  logFeedback("[UpgradePipeline] 2ab: start reallocate texture [id: %llu]",*(undefined8 *)param_1);
  lVar2 = *(long *)(this + 200);
  uVar1 = 0;
  if (*(long *)(this + 0xd0) - lVar2 != 0) {
    uVar1 = (*(long *)(this + 0xd0) - lVar2 >> 3) * 0x55 - 1;
  }
  uVar4 = *(long *)(this + 0xe8) + *(long *)(this + 0xe0);
  if (uVar1 == uVar4) {
    std::__ndk1::
    deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
    ::__add_back_capacity();
    lVar2 = *(long *)(this + 200);
    uVar4 = *(long *)(this + 0xe0) + *(long *)(this + 0xe8);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x55) * 8) + (uVar4 % 0x55) * 0x30);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[2] = uVar7;
  puVar3[5] = uVar6;
  puVar3[4] = uVar5;
  puVar3[1] = uVar9;
  *puVar3 = uVar8;
  *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 1;
  return;
}


