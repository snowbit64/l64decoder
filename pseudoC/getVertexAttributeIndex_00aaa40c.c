// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAttributeIndex
// Entry Point: 00aaa40c
// Size: 36 bytes
// Signature: undefined __cdecl getVertexAttributeIndex(VERTEX_ATTRIBUTES param_1, bool param_2)


/* VertexDeclarationDesc::getVertexAttributeIndex(VertexDeclarationDesc::VERTEX_ATTRIBUTES, bool) */

undefined4 VertexDeclarationDesc::getVertexAttributeIndex(VERTEX_ATTRIBUTES param_1,bool param_2)

{
  if ((param_1 == 10) && (param_2)) {
    return 4;
  }
  return *(undefined4 *)(&DAT_00523030 + (ulong)param_1 * 4);
}


