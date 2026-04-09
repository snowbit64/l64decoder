// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Texture
// Entry Point: 00962034
// Size: 40 bytes
// Signature: undefined __thiscall ~Texture(Texture * this)


/* non-virtual thunk to Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  ~Texture(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


