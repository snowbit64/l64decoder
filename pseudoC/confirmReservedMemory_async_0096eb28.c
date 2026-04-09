// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: confirmReservedMemory_async
// Entry Point: 0096eb28
// Size: 28 bytes
// Signature: undefined __thiscall confirmReservedMemory_async(UpgradePipeline * this, uint param_1)


/* TextureStreamingManager::UpgradePipeline::confirmReservedMemory_async(unsigned int) */

void __thiscall
TextureStreamingManager::UpgradePipeline::confirmReservedMemory_async
          (UpgradePipeline *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1d0);
  *(uint *)(this + 0x1d0) = iVar1 - param_1;
  DAT_0210ee50 = iVar1 - param_1;
  return;
}


