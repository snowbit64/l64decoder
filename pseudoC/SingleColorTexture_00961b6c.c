// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SingleColorTexture
// Entry Point: 00961b6c
// Size: 40 bytes
// Signature: undefined __thiscall ~SingleColorTexture(SingleColorTexture * this)


/* non-virtual thunk to SingleColorTexture::~SingleColorTexture() */

void __thiscall SingleColorTexture::~SingleColorTexture(SingleColorTexture *this)

{
  Texture::~Texture((Texture *)(this + -0x10));
  operator_delete((Texture *)(this + -0x10));
  return;
}


