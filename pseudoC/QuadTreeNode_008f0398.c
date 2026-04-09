// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QuadTreeNode
// Entry Point: 008f0398
// Size: 132 bytes
// Signature: undefined __thiscall QuadTreeNode(QuadTreeNode * this, uint param_1, uint param_2, uint param_3, uint param_4, float param_5, float param_6, float param_7, float param_8, float param_9, GeoMipMappingTerrain * param_10)


/* GeoQuadTree::QuadTreeNode::QuadTreeNode(unsigned int, unsigned int, unsigned int, unsigned int,
   float, float, float, float, float, GeoMipMappingTerrain*) */

void __thiscall
GeoQuadTree::QuadTreeNode::QuadTreeNode
          (QuadTreeNode *this,uint param_1,uint param_2,uint param_3,uint param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,GeoMipMappingTerrain *param_10)

{
  int iVar1;
  GeoMipMappingTerrainPatch *this_00;
  
  *(float *)(this + 0x10) = param_5;
  iVar1 = 1 << (ulong)(param_3 & 0x1f);
  *(float *)(this + 0x18) = param_5 + param_7;
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  *(uint *)(this + 8) = iVar1 + param_1;
  *(uint *)(this + 0xc) = iVar1 + param_2;
  *(float *)(this + 0x14) = param_6;
  *(float *)(this + 0x1c) = param_6 + param_7;
  *(float *)(this + 0x20) = param_8;
  *(float *)(this + 0x24) = param_9;
  *(uint *)(this + 0x28) = param_3;
  *(uint *)(this + 0x2c) = param_4;
  *(uint *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (QuadTreeNode)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this_00 = (GeoMipMappingTerrainPatch *)GeoMipMappingTerrain::allocPatch();
  *(GeoMipMappingTerrainPatch **)(this + 0x60) = this_00;
  GeoMipMappingTerrainPatch::setExtents
            (this_00,*(uint *)this,*(uint *)(this + 4),*(uint *)(this + 8),*(uint *)(this + 0xc),
             *(float *)(this + 0x20),*(float *)(this + 0x24));
  return;
}


