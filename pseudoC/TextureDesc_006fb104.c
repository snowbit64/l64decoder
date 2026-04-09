// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextureDesc
// Entry Point: 006fb104
// Size: 4 bytes
// Signature: undefined __thiscall ~TextureDesc(TextureDesc * this)


/* TextureDesc::~TextureDesc() */

void __thiscall TextureDesc::~TextureDesc(TextureDesc *this)

{
  operator_delete(this);
  return;
}


