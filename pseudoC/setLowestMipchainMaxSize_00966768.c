// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLowestMipchainMaxSize
// Entry Point: 00966768
// Size: 20 bytes
// Signature: undefined __thiscall setLowestMipchainMaxSize(TextureStreamingManager * this, uint param_1)


/* TextureStreamingManager::setLowestMipchainMaxSize(unsigned int) */

void __thiscall
TextureStreamingManager::setLowestMipchainMaxSize(TextureStreamingManager *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if (*(uint *)(this + 0x1c) <= param_1) {
    uVar1 = param_1;
  }
  *(uint *)(this + 0x18) = param_1;
  *(uint *)(this + 0x1c) = uVar1;
  return;
}


