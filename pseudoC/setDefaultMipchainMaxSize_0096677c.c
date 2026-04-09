// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDefaultMipchainMaxSize
// Entry Point: 0096677c
// Size: 20 bytes
// Signature: undefined __thiscall setDefaultMipchainMaxSize(TextureStreamingManager * this, uint param_1)


/* TextureStreamingManager::setDefaultMipchainMaxSize(unsigned int) */

void __thiscall
TextureStreamingManager::setDefaultMipchainMaxSize(TextureStreamingManager *this,uint param_1)

{
  if (param_1 <= *(uint *)(this + 0x18)) {
    param_1 = *(uint *)(this + 0x18);
  }
  *(uint *)(this + 0x1c) = param_1;
  return;
}


