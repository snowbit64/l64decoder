// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDetailGeometry
// Entry Point: 00a750a8
// Size: 92 bytes
// Signature: undefined __thiscall ~TerrainDetailGeometry(TerrainDetailGeometry * this)


/* non-virtual thunk to TerrainDetailGeometry::~TerrainDetailGeometry() */

void __thiscall TerrainDetailGeometry::~TerrainDetailGeometry(TerrainDetailGeometry *this)

{
  undefined8 *this_00;
  
  *(undefined ***)this = &PTR__TerrainDetailGeometry_00fe4168;
  this_00 = (undefined8 *)(this + -0x10);
  *this_00 = &PTR__TerrainDetailGeometry_00fe4118;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  Geometry::~Geometry((Geometry *)this_00);
  operator_delete(this_00);
  return;
}


