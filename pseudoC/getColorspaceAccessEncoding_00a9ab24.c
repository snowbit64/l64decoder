// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspaceAccessEncoding
// Entry Point: 00a9ab24
// Size: 36 bytes
// Signature: undefined __cdecl getColorspaceAccessEncoding(COLORSPACE param_1)


/* ColorspaceUtil::getColorspaceAccessEncoding(IDisplay::COLORSPACE) */

undefined4 ColorspaceUtil::getColorspaceAccessEncoding(COLORSPACE param_1)

{
  if (param_1 - 2 < 6) {
    return *(undefined4 *)(&DAT_00520a0c + (long)(int)(param_1 - 2) * 4);
  }
  return 0;
}


