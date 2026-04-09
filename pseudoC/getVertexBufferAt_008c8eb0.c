// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexBufferAt
// Entry Point: 008c8eb0
// Size: 12 bytes
// Signature: undefined __thiscall getVertexBufferAt(VertexBufferGeometry * this, uint param_1)


/* VertexBufferGeometry::getVertexBufferAt(unsigned int) const */

undefined8 __thiscall
VertexBufferGeometry::getVertexBufferAt(VertexBufferGeometry *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x88) + (ulong)param_1 * 8);
}


