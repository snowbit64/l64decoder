// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspaceStoredEncoding
// Entry Point: 00a9ab48
// Size: 36 bytes
// Signature: undefined __cdecl getColorspaceStoredEncoding(COLORSPACE param_1)


/* ColorspaceUtil::getColorspaceStoredEncoding(IDisplay::COLORSPACE) */

undefined4 ColorspaceUtil::getColorspaceStoredEncoding(COLORSPACE param_1)

{
  if (param_1 - 1 < 7) {
    return *(undefined4 *)(&DAT_00520a24 + (long)(int)(param_1 - 1) * 4);
  }
  return 0;
}


