// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTextureRegistered
// Entry Point: 00966c50
// Size: 16 bytes
// Signature: undefined __thiscall isTextureRegistered(TextureStreamingManager * this, Texture * param_1)


/* TextureStreamingManager::isTextureRegistered(Texture const&) const */

bool __thiscall
TextureStreamingManager::isTextureRegistered(TextureStreamingManager *this,Texture *param_1)

{
  return *(long *)(param_1 + 0x70) != 0;
}


