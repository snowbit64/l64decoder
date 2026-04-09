// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDefaultMipchainMaxImageSize
// Entry Point: 009649bc
// Size: 68 bytes
// Signature: undefined __thiscall setDefaultMipchainMaxImageSize(TextureStreamingManager * this, uint param_1, uint param_2, uint param_3)


/* TextureStreamingManager::setDefaultMipchainMaxImageSize(unsigned int, unsigned int, unsigned int)
    */

void __thiscall
TextureStreamingManager::setDefaultMipchainMaxImageSize
          (TextureStreamingManager *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = MipMapUtil::getSimpleMipChainSize(param_1,param_2,param_3);
  uVar1 = iVar2 + 0x3ffU & 0xfffffc00;
  if (uVar1 <= *(uint *)(this + 0x18)) {
    uVar1 = *(uint *)(this + 0x18);
  }
  *(uint *)(this + 0x1c) = uVar1;
  return;
}


