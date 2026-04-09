// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitMemoryBudgetProtectionGreenlight
// Entry Point: 00966050
// Size: 8 bytes
// Signature: undefined __thiscall waitMemoryBudgetProtectionGreenlight(TextureStreamingManager * this, uint param_1)


/* TextureStreamingManager::waitMemoryBudgetProtectionGreenlight(unsigned int) */

void __thiscall
TextureStreamingManager::waitMemoryBudgetProtectionGreenlight
          (TextureStreamingManager *this,uint param_1)

{
  Event::wait((Event *)(this + 0x20),param_1);
  return;
}


