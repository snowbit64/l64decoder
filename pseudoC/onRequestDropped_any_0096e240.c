// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRequestDropped_any
// Entry Point: 0096e240
// Size: 120 bytes
// Signature: undefined __thiscall onRequestDropped_any(DowngradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::DowngradePipeline::onRequestDropped_any(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::DowngradePipeline::onRequestDropped_any
          (DowngradePipeline *this,ChangeRequest *param_1)

{
  logFeedback("[DowngradePipeline] drop request for texture [id: %llu]",*(undefined8 *)param_1);
  DAT_0210ee54 = DAT_0210ee54 + -1;
  DAT_0210ee5c = DAT_0210ee5c + 1;
  FUN_00f27700(*(undefined4 *)(param_1 + 0xc),this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  FUN_00f27700(0xffffffff,this + 0x1a4);
  return;
}


