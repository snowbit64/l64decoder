// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWriteBufferSize
// Entry Point: 00aac4bc
// Size: 8 bytes
// Signature: undefined __cdecl getWriteBufferSize(uint param_1, PIXEL_FORMAT param_2)


/* NullTexture::getWriteBufferSize(unsigned int, PixelFormat::PIXEL_FORMAT) */

undefined  [16] NullTexture::getWriteBufferSize(uint param_1,PIXEL_FORMAT param_2)

{
  return ZEXT416(param_2) << 0x40;
}


