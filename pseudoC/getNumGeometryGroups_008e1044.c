// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGeometryGroups
// Entry Point: 008e1044
// Size: 44 bytes
// Signature: undefined __thiscall getNumGeometryGroups(IndexedTriangleSetGeometry * this, uint param_1)


/* IndexedTriangleSetGeometry::getNumGeometryGroups(unsigned int) const */

uint __thiscall
IndexedTriangleSetGeometry::getNumGeometryGroups(IndexedTriangleSetGeometry *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = IndexedTriangleSet::getNumSubsets();
  if (param_1 <= uVar1) {
    uVar1 = param_1;
  }
  return uVar1;
}


