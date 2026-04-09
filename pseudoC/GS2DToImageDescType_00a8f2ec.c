// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GS2DToImageDescType
// Entry Point: 00a8f2ec
// Size: 16 bytes
// Signature: undefined __cdecl GS2DToImageDescType(GS2D_TYPE param_1)


/* GS2DUtil::GS2DToImageDescType(GS2DUtil::GS2D_TYPE) */

undefined4 GS2DUtil::GS2DToImageDescType(GS2D_TYPE param_1)

{
  return *(undefined4 *)(s_typeInfo + (ulong)param_1 * 4);
}


