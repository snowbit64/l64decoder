// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDetailGeometry
// Entry Point: 00a74fac
// Size: 80 bytes
// Signature: undefined __thiscall ~TerrainDetailGeometry(TerrainDetailGeometry * this)


/* TerrainDetailGeometry::~TerrainDetailGeometry() */

void __thiscall TerrainDetailGeometry::~TerrainDetailGeometry(TerrainDetailGeometry *this)

{
  *(undefined ***)this = &PTR__TerrainDetailGeometry_00fe4118;
  *(undefined ***)(this + 0x10) = &PTR__TerrainDetailGeometry_00fe4168;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  *(undefined8 *)(this + 0x58) = 0;
  Geometry::~Geometry((Geometry *)this);
  return;
}


