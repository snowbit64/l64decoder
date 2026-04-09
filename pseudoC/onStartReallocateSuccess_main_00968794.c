// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartReallocateSuccess_main
// Entry Point: 00968794
// Size: 144 bytes
// Signature: undefined __thiscall onStartReallocateSuccess_main(DowngradePipeline * this, ReallocateRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::onStartReallocateSuccess_main(TextureStreamingManager::DowngradePipeline::ReallocateRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::onStartReallocateSuccess_main
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
  lVar3 = *(long *)(this + 0x120);
  uVar2 = 0;
  if (*(long *)(this + 0x128) - lVar3 != 0) {
    uVar2 = (*(long *)(this + 0x128) - lVar3) * 0x10 - 1;
  }
  uVar4 = *(long *)(this + 0x140) + *(long *)(this + 0x138);
  if (uVar2 == uVar4) {
    std::__ndk1::
    deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
    ::__add_back_capacity();
    lVar3 = *(long *)(this + 0x120);
    uVar4 = *(long *)(this + 0x138) + *(long *)(this + 0x140);
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
  *(long *)(this + 0x140) = *(long *)(this + 0x140) + 1;
  return;
}


