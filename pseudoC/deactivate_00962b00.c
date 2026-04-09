// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 00962b00
// Size: 80 bytes
// Signature: undefined __thiscall deactivate(Texture * this)


/* non-virtual thunk to Texture::deactivate() */

void __thiscall Texture::deactivate(Texture *this)

{
  TextureStreamingManager *this_00;
  
  if ((*(ushort *)(this + 0x38) & 1) != 0) {
    if ((*(ushort *)(this + 0x38) >> 4 & 1) != 0) {
      this_00 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
      TextureStreamingManager::unregisterTexture(this_00,(Texture *)(this + -0x10));
    }
    if (*(long **)(this + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x58) + 8))();
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}


