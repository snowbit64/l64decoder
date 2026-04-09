// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartReallocateSuccess_async
// Entry Point: 0096e6f4
// Size: 144 bytes
// Signature: undefined __thiscall onStartReallocateSuccess_async(DowngradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::onStartReallocateSuccess_async(TextureStreamingManager::DowngradePipeline::ReallocateRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::onStartReallocateSuccess_async
          (DowngradePipeline *this,ReallocateRequest *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  logFeedback("[DowngradePipeline] 1: start reallocate texture [id: %llu]",*(undefined8 *)param_1);
  lVar3 = *(long *)(this + 0x98);
  uVar2 = 0;
  if (*(long *)(this + 0xa0) - lVar3 != 0) {
    uVar2 = (*(long *)(this + 0xa0) - lVar3) * 0x10 - 1;
  }
  uVar4 = *(long *)(this + 0xb8) + *(long *)(this + 0xb0);
  if (uVar2 == uVar4) {
    std::__ndk1::
    deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
    ::__add_back_capacity();
    lVar3 = *(long *)(this + 0x98);
    uVar4 = *(long *)(this + 0xb0) + *(long *)(this + 0xb8);
  }
  uVar7 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)
           (*(long *)(lVar3 + (uVar4 >> 4 & 0xffffffffffffff8)) + (uVar4 & 0x7f) * 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 1;
  return;
}


