// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GS2DToImageDescFormat
// Entry Point: 00a8f2a0
// Size: 24 bytes
// Signature: undefined __cdecl GS2DToImageDescFormat(GS2D_FORMAT param_1)


/* GS2DUtil::GS2DToImageDescFormat(GS2DUtil::GS2D_FORMAT) */

undefined4 GS2DUtil::GS2DToImageDescFormat(GS2D_FORMAT param_1)

{
  return (&s_pixelFormatInfo)[(ulong)param_1 * 3];
}


