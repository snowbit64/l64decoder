// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 00962ab0
// Size: 80 bytes
// Signature: undefined deactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Texture::deactivate() */

void Texture::deactivate(void)

{
  Texture *in_x0;
  TextureStreamingManager *this;
  
  if ((*(ushort *)(in_x0 + 0x48) & 1) != 0) {
    if ((*(ushort *)(in_x0 + 0x48) >> 4 & 1) != 0) {
      this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
      TextureStreamingManager::unregisterTexture(this,in_x0);
    }
    if (*(long **)(in_x0 + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x68) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x68) = 0;
  }
  *(undefined4 *)(in_x0 + 0x18) = 0;
  return;
}


