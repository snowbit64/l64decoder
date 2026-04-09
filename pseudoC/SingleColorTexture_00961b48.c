// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SingleColorTexture
// Entry Point: 00961b48
// Size: 36 bytes
// Signature: undefined __thiscall ~SingleColorTexture(SingleColorTexture * this)


/* SingleColorTexture::~SingleColorTexture() */

void __thiscall SingleColorTexture::~SingleColorTexture(SingleColorTexture *this)

{
  Texture::~Texture((Texture *)this);
  operator_delete(this);
  return;
}


