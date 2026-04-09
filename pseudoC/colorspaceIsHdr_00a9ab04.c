// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: colorspaceIsHdr
// Entry Point: 00a9ab04
// Size: 16 bytes
// Signature: undefined __cdecl colorspaceIsHdr(COLORSPACE param_1)


/* ColorspaceUtil::colorspaceIsHdr(IDisplay::COLORSPACE) */

bool ColorspaceUtil::colorspaceIsHdr(COLORSPACE param_1)

{
  return param_1 - 5 < 3;
}


