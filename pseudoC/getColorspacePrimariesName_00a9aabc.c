// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getColorspacePrimariesName
// Entry Point: 00a9aabc
// Size: 36 bytes
// Signature: undefined __cdecl getColorspacePrimariesName(COLORSPACE_PRIMARIES param_1)


/* ColorspaceUtil::getColorspacePrimariesName(ColorspaceUtil::COLORSPACE_PRIMARIES) */

char * ColorspaceUtil::getColorspacePrimariesName(COLORSPACE_PRIMARIES param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "COLORSPACE_PRIMARIES_BT2020";
  if (param_1 != 1) {
    pcVar1 = (char *)0x0;
  }
  pcVar2 = "COLORSPACE_PRIMARIES_SRGB";
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


