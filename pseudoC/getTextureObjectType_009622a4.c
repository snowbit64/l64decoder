// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureObjectType
// Entry Point: 009622a4
// Size: 36 bytes
// Signature: undefined __cdecl getTextureObjectType(BitmapImage * param_1)


/* Texture::getTextureObjectType(BitmapImage const&) */

undefined4 Texture::getTextureObjectType(BitmapImage *param_1)

{
  if (*(uint *)(param_1 + 0x38) < 4) {
    return *(undefined4 *)(&DAT_004c4600 + (long)(int)*(uint *)(param_1 + 0x38) * 4);
  }
  return 5;
}


