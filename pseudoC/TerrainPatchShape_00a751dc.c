// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainPatchShape
// Entry Point: 00a751dc
// Size: 124 bytes
// Signature: undefined __thiscall TerrainPatchShape(TerrainPatchShape * this, char * param_1, GeoMipMappingTerrainPatch * param_2, bool param_3)


/* TerrainPatchShape::TerrainPatchShape(char const*, GeoMipMappingTerrainPatch*, bool) */

void __thiscall
TerrainPatchShape::TerrainPatchShape
          (TerrainPatchShape *this,char *param_1,GeoMipMappingTerrainPatch *param_2,bool param_3)

{
  uint uVar1;
  
  GsShape::GsShape((GsShape *)this,param_1,(Geometry *)param_2);
  *(GeoMipMappingTerrainPatch **)(this + 0x200) = param_2;
  *(undefined ***)this = &PTR__TerrainPatchShape_00fe41a0;
  uVar1 = 0x300;
  if (!param_3) {
    uVar1 = 0x200;
  }
  *(undefined ***)(this + 0x158) = &PTR__TerrainPatchShape_00fe4210;
  *(undefined ***)(this + 0x160) = &PTR__TerrainPatchShape_00fe4238;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x1000;
                    /* try { // try from 00a75240 to 00a75247 has its CatchHandler @ 00a75258 */
  GsShape::setShapeFlags((GsShape *)this,*(uint *)(this + 400) | uVar1);
  return;
}


