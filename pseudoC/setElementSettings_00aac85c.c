// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setElementSettings
// Entry Point: 00aac85c
// Size: 52 bytes
// Signature: undefined __thiscall setElementSettings(NullVertexDeclaration * this, VERTEX_ELEMENT_TYPE param_1, uint param_2)


/* NullVertexDeclaration::setElementSettings(VertexDeclarationDesc::VERTEX_ELEMENT_TYPE, unsigned
   int) */

void __thiscall
NullVertexDeclaration::setElementSettings
          (NullVertexDeclaration *this,VERTEX_ELEMENT_TYPE param_1,uint param_2)

{
  if (param_2 < *(uint *)(this + 0x10)) {
    *(int *)(*(long *)(this + 8) + (ulong)param_2 * 4) =
         *(int *)(*(long *)(this + 8) + (ulong)param_2 * 4) +
         (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[param_1];
  }
  return;
}


