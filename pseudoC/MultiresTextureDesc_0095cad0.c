// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiresTextureDesc
// Entry Point: 0095cad0
// Size: 20 bytes
// Signature: undefined __thiscall ~MultiresTextureDesc(MultiresTextureDesc * this)


/* MultiresTextureDesc::~MultiresTextureDesc() */

void __thiscall MultiresTextureDesc::~MultiresTextureDesc(MultiresTextureDesc *this)

{
  if (((byte)this[0x68] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x78));
  return;
}


