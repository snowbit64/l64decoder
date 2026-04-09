// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDebugTextureLayerIndex
// Entry Point: 00a9a5f0
// Size: 20 bytes
// Signature: undefined __thiscall setDebugTextureLayerIndex(SoftVirtualTexture * this, uint param_1)


/* SoftVirtualTexture::setDebugTextureLayerIndex(unsigned int) */

void __thiscall SoftVirtualTexture::setDebugTextureLayerIndex(SoftVirtualTexture *this,uint param_1)

{
  if (*(uint *)(this + 4) <= param_1) {
    param_1 = 0;
  }
  *(uint *)(this + 0x70) = param_1;
  return;
}


