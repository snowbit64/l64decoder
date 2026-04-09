// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableUpdater
// Entry Point: 0095cca8
// Size: 52 bytes
// Signature: undefined __thiscall enableUpdater(MultiresTexture * this, bool param_1)


/* MultiresTexture::enableUpdater(bool) */

void __thiscall MultiresTexture::enableUpdater(MultiresTexture *this,bool param_1)

{
  if (!param_1) {
    MultiresTextureGpuUpdater::cancelAllUpdates();
  }
  this[0x1b8] = (MultiresTexture)param_1;
  return;
}


