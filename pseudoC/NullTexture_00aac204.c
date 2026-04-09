// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullTexture
// Entry Point: 00aac204
// Size: 48 bytes
// Signature: undefined __thiscall ~NullTexture(NullTexture * this)


/* NullTexture::~NullTexture() */

void __thiscall NullTexture::~NullTexture(NullTexture *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x60);
  if (((byte)this[0x3c] >> 4 & 1) == 0) {
    *(int *)(lVar1 + 0x124) = *(int *)(lVar1 + 0x124) - *(int *)(this + 0x68);
    operator_delete(this);
    return;
  }
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) - *(int *)(this + 0x68);
  operator_delete(this);
  return;
}


