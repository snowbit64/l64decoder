// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspaceName
// Entry Point: 00a9aa9c
// Size: 32 bytes
// Signature: undefined __cdecl getColorspaceName(COLORSPACE param_1)


/* ColorspaceUtil::getColorspaceName(IDisplay::COLORSPACE) */

undefined * ColorspaceUtil::getColorspaceName(COLORSPACE param_1)

{
  if (param_1 < 8) {
    return (&PTR_s_COLORSPACE_LINEAR_00fe4640)[(int)param_1];
  }
  return (undefined *)0x0;
}


