// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUvDensity
// Entry Point: 008e1214
// Size: 52 bytes
// Signature: undefined __thiscall getUvDensity(IndexedTriangleSetGeometry * this, uint param_1, uint param_2)


/* IndexedTriangleSetGeometry::getUvDensity(unsigned int, unsigned int) const */

undefined4 __thiscall
IndexedTriangleSetGeometry::getUvDensity(IndexedTriangleSetGeometry *this,uint param_1,uint param_2)

{
  IndexedTriangleSet *this_00;
  long lVar1;
  
  this_00 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
  lVar1 = IndexedTriangleSet::getSubset(this_00,param_1);
  return *(undefined4 *)(lVar1 + (ulong)param_2 * 4 + 0x10);
}


