// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareReservedMemory_async
// Entry Point: 0096e948
// Size: 28 bytes
// Signature: undefined __thiscall prepareReservedMemory_async(UpgradePipeline * this, uint param_1)


/* TextureStreamingManager::UpgradePipeline::prepareReservedMemory_async(unsigned int) */

void __thiscall
TextureStreamingManager::UpgradePipeline::prepareReservedMemory_async
          (UpgradePipeline *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1d0);
  *(uint *)(this + 0x1d0) = iVar1 + param_1;
  DAT_0210ee50 = iVar1 + param_1;
  return;
}


