// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexSize
// Entry Point: 008c76e0
// Size: 96 bytes
// Signature: undefined __cdecl getVertexSize(uint param_1, bool param_2)


/* IndexedTriangleSetGeometryUtil::getVertexSize(unsigned int, bool) */

uint IndexedTriangleSetGeometryUtil::getVertexSize(uint param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = VERTEX_ATTRIBUTE_TYPES_POSITION32;
  if (!param_2) {
    puVar1 = VERTEX_ATTRIBUTE_TYPES;
  }
  uVar3 = param_1;
  if (param_1 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if ((param_1 & 1) != 0) {
        uVar3 = (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(puVar1 + uVar4 * 4)] +
                uVar3;
      }
      if (param_1 < 2) {
        return uVar3;
      }
      bVar2 = uVar4 < 10;
      param_1 = param_1 >> 1;
      uVar4 = uVar4 + 1;
    } while (bVar2);
  }
  return uVar3;
}


