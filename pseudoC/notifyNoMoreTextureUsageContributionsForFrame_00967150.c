// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyNoMoreTextureUsageContributionsForFrame
// Entry Point: 00967150
// Size: 40 bytes
// Signature: undefined __thiscall notifyNoMoreTextureUsageContributionsForFrame(TextureStreamingManager * this, ulonglong param_1)


/* TextureStreamingManager::notifyNoMoreTextureUsageContributionsForFrame(unsigned long long) */

void __thiscall
TextureStreamingManager::notifyNoMoreTextureUsageContributionsForFrame
          (TextureStreamingManager *this,ulonglong param_1)

{
  if (*(ulonglong *)(this + 0x140) == param_1) {
    *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
    Semaphore::post();
    return;
  }
  return;
}


