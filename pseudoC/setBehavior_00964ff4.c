// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBehavior
// Entry Point: 00964ff4
// Size: 44 bytes
// Signature: undefined __thiscall setBehavior(TextureStreamingManager * this, BEHAVIOR_TYPE param_1)


/* TextureStreamingManager::setBehavior(TextureStreamingManager::BEHAVIOR_TYPE) */

void __thiscall
TextureStreamingManager::setBehavior(TextureStreamingManager *this,BEHAVIOR_TYPE param_1)

{
  BEHAVIOR_TYPE BVar1;
  
  BVar1 = *(BEHAVIOR_TYPE *)(this + 4);
  *(BEHAVIOR_TYPE *)(this + 4) = param_1;
  if (BVar1 == param_1) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


