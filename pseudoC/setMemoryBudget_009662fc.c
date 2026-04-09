// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMemoryBudget
// Entry Point: 009662fc
// Size: 80 bytes
// Signature: undefined __thiscall setMemoryBudget(TextureStreamingManager * this, ulonglong param_1)


/* TextureStreamingManager::setMemoryBudget(unsigned long long) */

void __thiscall
TextureStreamingManager::setMemoryBudget(TextureStreamingManager *this,ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(this + 0x218);
  *(ulonglong *)(this + 0x218) = param_1;
  if (uVar1 != param_1) {
    *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
    Semaphore::post();
  }
  DAT_0210ee70 = param_1;
  return;
}


