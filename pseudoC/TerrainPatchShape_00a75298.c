// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainPatchShape
// Entry Point: 00a75298
// Size: 52 bytes
// Signature: undefined __thiscall ~TerrainPatchShape(TerrainPatchShape * this)


/* non-virtual thunk to TerrainPatchShape::~TerrainPatchShape() */

void __thiscall TerrainPatchShape::~TerrainPatchShape(TerrainPatchShape *this)

{
  *(undefined ***)(this + -0x158) = &PTR__TerrainPatchShape_00fe41a0;
  *(undefined ***)this = &PTR__TerrainPatchShape_00fe4210;
  *(undefined ***)(this + 8) = &PTR__TerrainPatchShape_00fe4238;
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x78) = 0;
  }
  GsShape::~GsShape((GsShape *)(this + -0x158));
  return;
}


