// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspaceEncodingName
// Entry Point: 00a9aae0
// Size: 36 bytes
// Signature: undefined __cdecl getColorspaceEncodingName(COLORSPACE_ENCODING param_1)


/* ColorspaceUtil::getColorspaceEncodingName(ColorspaceUtil::COLORSPACE_ENCODING) */

undefined * ColorspaceUtil::getColorspaceEncodingName(COLORSPACE_ENCODING param_1)

{
  if (param_1 < 5) {
    return &DAT_005209f8 + *(int *)(&DAT_005209f8 + (long)(int)param_1 * 4);
  }
  return (undefined *)0x0;
}


