// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Texture
// Entry Point: 00962010
// Size: 36 bytes
// Signature: undefined __thiscall ~Texture(Texture * this)


/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  ~Texture(this);
  operator_delete(this);
  return;
}


