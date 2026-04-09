// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeCollisionProxyMeshBuffers
// Entry Point: 008c50c8
// Size: 8 bytes
// Signature: undefined __thiscall freeCollisionProxyMeshBuffers(Geometry * this, bool param_1)


/* Geometry::freeCollisionProxyMeshBuffers(bool) */

void __thiscall Geometry::freeCollisionProxyMeshBuffers(Geometry *this,bool param_1)

{
  IndexedTriangleSet::freeBuffers(*(IndexedTriangleSet **)(this + 0x48),param_1);
  return;
}


