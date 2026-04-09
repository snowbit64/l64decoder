// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getComputeWritablePixelFormatForGpuCompression
// Entry Point: 00a9de74
// Size: 28 bytes
// Signature: undefined __cdecl getComputeWritablePixelFormatForGpuCompression(PIXEL_FORMAT param_1)


/* PixelFormatUtil::getComputeWritablePixelFormatForGpuCompression(PixelFormat::PIXEL_FORMAT) */

PIXEL_FORMAT PixelFormatUtil::getComputeWritablePixelFormatForGpuCompression(PIXEL_FORMAT param_1)

{
  if (param_1 - 8 < 0xc) {
    param_1 = *(PIXEL_FORMAT *)(&DAT_00520c20 + (long)(int)(param_1 - 8) * 4);
  }
  return param_1;
}


