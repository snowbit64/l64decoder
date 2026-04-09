// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGeometryGroups
// Entry Point: 008c9360
// Size: 24 bytes
// Signature: undefined __thiscall getNumGeometryGroups(VertexBufferGeometry * this, uint param_1)


/* VertexBufferGeometry::getNumGeometryGroups(unsigned int) const */

uint __thiscall VertexBufferGeometry::getNumGeometryGroups(VertexBufferGeometry *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)(*(long *)(this + 0x90) - *(long *)(this + 0x88)) >> 3);
  if (uVar1 <= param_1) {
    param_1 = uVar1;
  }
  return param_1;
}


