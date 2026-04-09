// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainDetailGeometry
// Entry Point: 00a74f1c
// Size: 144 bytes
// Signature: undefined __thiscall TerrainDetailGeometry(TerrainDetailGeometry * this, char * param_1, IVertexBuffer * param_2, IIndexBuffer * param_3, IVertexDeclaration * param_4, uint param_5, uint param_6, uint param_7)


/* TerrainDetailGeometry::TerrainDetailGeometry(char const*, IVertexBuffer*, IIndexBuffer*,
   IVertexDeclaration*, unsigned int, unsigned int, unsigned int) */

void __thiscall
TerrainDetailGeometry::TerrainDetailGeometry
          (TerrainDetailGeometry *this,char *param_1,IVertexBuffer *param_2,IIndexBuffer *param_3,
          IVertexDeclaration *param_4,uint param_5,uint param_6,uint param_7)

{
  Geometry::Geometry((Geometry *)this,param_1,false);
  *(IVertexBuffer **)(this + 0x58) = param_2;
  *(IIndexBuffer **)(this + 0x60) = param_3;
  *(IVertexDeclaration **)(this + 0x68) = param_4;
  *(uint *)(this + 0x38) = param_5;
  *(uint *)(this + 0x70) = param_6;
  *(uint *)(this + 0x74) = param_7;
  *(undefined ***)this = &PTR__TerrainDetailGeometry_00fe4118;
  *(undefined ***)(this + 0x10) = &PTR__TerrainDetailGeometry_00fe4168;
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x800;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) & 0xffffffe3 | 0xc;
  return;
}


