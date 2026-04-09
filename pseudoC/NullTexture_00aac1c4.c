// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullTexture
// Entry Point: 00aac1c4
// Size: 64 bytes
// Signature: undefined __thiscall ~NullTexture(NullTexture * this)


/* NullTexture::~NullTexture() */

void __thiscall NullTexture::~NullTexture(NullTexture *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x60);
  *(undefined ***)this = &PTR__NullTexture_00fe5d28;
  if (((byte)this[0x3c] >> 4 & 1) == 0) {
    *(int *)(lVar1 + 0x124) = *(int *)(lVar1 + 0x124) - *(int *)(this + 0x68);
    return;
  }
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) - *(int *)(this + 0x68);
  return;
}


