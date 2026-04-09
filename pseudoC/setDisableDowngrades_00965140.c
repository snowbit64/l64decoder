// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDisableDowngrades
// Entry Point: 00965140
// Size: 48 bytes
// Signature: undefined __thiscall setDisableDowngrades(TextureStreamingManager * this, bool param_1)


/* TextureStreamingManager::setDisableDowngrades(bool) */

void __thiscall
TextureStreamingManager::setDisableDowngrades(TextureStreamingManager *this,bool param_1)

{
  TextureStreamingManager TVar1;
  
  TVar1 = this[9];
  this[9] = (TextureStreamingManager)param_1;
  if (TVar1 == (TextureStreamingManager)param_1) {
    return;
  }
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  return;
}


