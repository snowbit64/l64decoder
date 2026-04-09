// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainPatchShape
// Entry Point: 00a753a0
// Size: 80 bytes
// Signature: undefined __thiscall ~TerrainPatchShape(TerrainPatchShape * this)


/* non-virtual thunk to TerrainPatchShape::~TerrainPatchShape() */

void __thiscall TerrainPatchShape::~TerrainPatchShape(TerrainPatchShape *this)

{
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + -0x160);
  *this_00 = &PTR__TerrainPatchShape_00fe41a0;
  *(undefined ***)(this + -8) = &PTR__TerrainPatchShape_00fe4210;
  *(undefined ***)this = &PTR__TerrainPatchShape_00fe4238;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(*(long *)(this + 0xa0) + 0x78) = 0;
  }
  GsShape::~GsShape((GsShape *)this_00);
  operator_delete(this_00);
  return;
}


