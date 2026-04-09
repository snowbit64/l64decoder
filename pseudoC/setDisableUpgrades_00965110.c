// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDisableUpgrades
// Entry Point: 00965110
// Size: 48 bytes
// Signature: undefined __thiscall setDisableUpgrades(TextureStreamingManager * this, bool param_1)


/* TextureStreamingManager::setDisableUpgrades(bool) */

void __thiscall
TextureStreamingManager::setDisableUpgrades(TextureStreamingManager *this,bool param_1)

{
  TextureStreamingManager TVar1;
  
  TVar1 = this[8];
  this[8] = (TextureStreamingManager)param_1;
  if (TVar1 == (TextureStreamingManager)param_1) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


