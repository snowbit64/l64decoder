// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setITextureObjectMeta
// Entry Point: 00962bc4
// Size: 36 bytes
// Signature: undefined __thiscall setITextureObjectMeta(Texture * this, PIXEL_FORMAT param_1, TEX_TYPE param_2, bool param_3)


/* Texture::setITextureObjectMeta(PixelFormat::PIXEL_FORMAT, ITextureObject::TEX_TYPE, bool) */

void __thiscall
Texture::setITextureObjectMeta(Texture *this,PIXEL_FORMAT param_1,TEX_TYPE param_2,bool param_3)

{
  ushort uVar1;
  
  *(PIXEL_FORMAT *)(this + 0x4c) = param_1;
  *(TEX_TYPE *)(this + 0x50) = param_2;
  uVar1 = 4;
  if (!param_3) {
    uVar1 = 0;
  }
  *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) & 0xfffb | uVar1;
  return;
}


