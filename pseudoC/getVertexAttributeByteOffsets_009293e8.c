// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexAttributeByteOffsets
// Entry Point: 009293e8
// Size: 28 bytes
// Signature: undefined __thiscall getVertexAttributeByteOffsets(DestructionGeometryShared * this, uint * param_1, uint * param_2, uint * param_3)


/* DestructionGeometryShared::getVertexAttributeByteOffsets(unsigned int&, unsigned int&, unsigned
   int&) */

void __thiscall
DestructionGeometryShared::getVertexAttributeByteOffsets
          (DestructionGeometryShared *this,uint *param_1,uint *param_2,uint *param_3)

{
  *param_1 = *(uint *)(this + 100);
  *param_2 = *(uint *)(this + 0x68);
  *param_3 = *(uint *)(this + 0x6c);
  return;
}


