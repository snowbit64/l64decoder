// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00a05acc
// Size: 20 bytes
// Signature: undefined __cdecl toString(INFO_RENDERING param_1)


/* RenderArgs::toString(RenderArgs::INFO_RENDERING) */

undefined * RenderArgs::toString(INFO_RENDERING param_1)

{
  return &DAT_0051d418 + *(int *)(&DAT_0051d418 + (ulong)param_1 * 4);
}


