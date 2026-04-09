// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdater
// Entry Point: 0095cc94
// Size: 12 bytes
// Signature: undefined __thiscall setUpdater(MultiresTexture * this, MultiresTextureGpuUpdater * param_1, bool param_2)


/* MultiresTexture::setUpdater(MultiresTextureGpuUpdater*, bool) */

void __thiscall
MultiresTexture::setUpdater(MultiresTexture *this,MultiresTextureGpuUpdater *param_1,bool param_2)

{
  *(MultiresTextureGpuUpdater **)(this + 0x1b0) = param_1;
  this[0x1b8] = (MultiresTexture)param_2;
  return;
}


