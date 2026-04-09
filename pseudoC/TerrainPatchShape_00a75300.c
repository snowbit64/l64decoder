// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainPatchShape
// Entry Point: 00a75300
// Size: 80 bytes
// Signature: undefined __thiscall ~TerrainPatchShape(TerrainPatchShape * this)


/* TerrainPatchShape::~TerrainPatchShape() */

void __thiscall TerrainPatchShape::~TerrainPatchShape(TerrainPatchShape *this)

{
  *(undefined ***)this = &PTR__TerrainPatchShape_00fe41a0;
  *(undefined ***)(this + 0x158) = &PTR__TerrainPatchShape_00fe4210;
  *(undefined ***)(this + 0x160) = &PTR__TerrainPatchShape_00fe4238;
  if (*(long *)(this + 0x200) != 0) {
    *(undefined8 *)(*(long *)(this + 0x200) + 0x78) = 0;
  }
  GsShape::~GsShape((GsShape *)this);
  operator_delete(this);
  return;
}


