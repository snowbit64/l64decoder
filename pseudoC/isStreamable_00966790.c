// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isStreamable
// Entry Point: 00966790
// Size: 52 bytes
// Signature: undefined __thiscall isStreamable(TextureStreamingManager * this, Texture * param_1, ImageStreamingDesc * param_2)


/* TextureStreamingManager::isStreamable(Texture const&, ImageStreamingDesc const&) const */

bool __thiscall
TextureStreamingManager::isStreamable
          (TextureStreamingManager *this,Texture *param_1,ImageStreamingDesc *param_2)

{
  bool bVar1;
  
  if (*this != (TextureStreamingManager)0x0) {
    bVar1 = false;
    if (((*(ushort *)(param_1 + 0x48) >> 3 & 1) != 0) && (*(int *)(param_1 + 0x50) == 0)) {
      bVar1 = *(int *)(param_2 + 0x20) == 1;
    }
    return bVar1;
  }
  return false;
}


