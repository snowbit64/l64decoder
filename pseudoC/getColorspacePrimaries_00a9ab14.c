// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspacePrimaries
// Entry Point: 00a9ab14
// Size: 16 bytes
// Signature: undefined __cdecl getColorspacePrimaries(COLORSPACE param_1)


/* ColorspaceUtil::getColorspacePrimaries(IDisplay::COLORSPACE) */

bool ColorspaceUtil::getColorspacePrimaries(COLORSPACE param_1)

{
  return param_1 - 5 < 3;
}


