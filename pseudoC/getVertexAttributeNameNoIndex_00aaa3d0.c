// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAttributeNameNoIndex
// Entry Point: 00aaa3d0
// Size: 60 bytes
// Signature: undefined __cdecl getVertexAttributeNameNoIndex(VERTEX_ATTRIBUTES param_1, bool param_2, bool param_3)


/* VertexDeclarationDesc::getVertexAttributeNameNoIndex(VertexDeclarationDesc::VERTEX_ATTRIBUTES,
   bool, bool) */

char * VertexDeclarationDesc::getVertexAttributeNameNoIndex
                 (VERTEX_ATTRIBUTES param_1,bool param_2,bool param_3)

{
  long lVar1;
  char *pcVar2;
  
  if ((param_1 == 10) && (param_2)) {
    pcVar2 = "GS_ATTR_TEXCOORD";
  }
  else {
    pcVar2 = (char *)((long)&DAT_00523004 + (long)(int)(&DAT_00523004)[param_1]);
  }
  lVar1 = 0;
  if (!param_3) {
    lVar1 = 8;
  }
  return pcVar2 + lVar1;
}


