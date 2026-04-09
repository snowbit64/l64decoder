// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Texture
// Entry Point: 00961f78
// Size: 124 bytes
// Signature: undefined __thiscall ~Texture(Texture * this)


/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  TextureStreamingManager *this_00;
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__Texture_00fe0690;
  *(undefined ***)this = &PTR__Texture_00fe0690;
  *(undefined ***)(this + 0x10) = &PTR__Texture_00fe06d8;
  if ((*(ushort *)(this + 0x48) & 1) != 0) {
    if ((*(ushort *)(this + 0x48) >> 4 & 1) != 0) {
                    /* try { // try from 00961fac to 00961fb7 has its CatchHandler @ 00961ff4 */
      this_00 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
      TextureStreamingManager::unregisterTexture(this_00,(Texture *)this);
    }
    if (*(long **)(this + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x68) + 8))();
    }
    ppuVar1 = *(undefined ***)this;
    *(undefined8 *)(this + 0x68) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 00961fdc to 00961fe3 has its CatchHandler @ 00961ff4 */
  (*(code *)ppuVar1[4])(this);
  Resource::~Resource((Resource *)this);
  return;
}


