// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRequestDropped_any
// Entry Point: 0096da98
// Size: 80 bytes
// Signature: undefined __thiscall onRequestDropped_any(UpgradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::onRequestDropped_any(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::UpgradePipeline::onRequestDropped_any
          (UpgradePipeline *this,ChangeRequest *param_1)

{
  DAT_0210ee50 = *(int *)(this + 0x1d0) - *(int *)(param_1 + 0xc);
  DAT_0210ee40 = DAT_0210ee40 + -1;
  DAT_0210ee4c = DAT_0210ee4c + 1;
  *(int *)(this + 0x1d0) = DAT_0210ee50;
  FUN_00f27700(0xffffffff,this + 0x230);
  return;
}


