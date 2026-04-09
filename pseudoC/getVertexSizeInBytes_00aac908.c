// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexSizeInBytes
// Entry Point: 00aac908
// Size: 32 bytes
// Signature: undefined __thiscall getVertexSizeInBytes(NullVertexDeclaration * this, uint param_1)


/* NullVertexDeclaration::getVertexSizeInBytes(unsigned int) const */

undefined4 __thiscall
NullVertexDeclaration::getVertexSizeInBytes(NullVertexDeclaration *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0x10)) {
    return *(undefined4 *)(*(long *)(this + 8) + (ulong)param_1 * 4);
  }
  return 0;
}


