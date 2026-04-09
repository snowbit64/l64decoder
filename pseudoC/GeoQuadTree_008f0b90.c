// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeoQuadTree
// Entry Point: 008f0b90
// Size: 320 bytes
// Signature: undefined __thiscall GeoQuadTree(GeoQuadTree * this, GeoMipMappingTerrain * param_1, uint param_2, uint param_3, float param_4, float param_5, float param_6)


/* GeoQuadTree::GeoQuadTree(GeoMipMappingTerrain*, unsigned int, unsigned int, float, float, float)
    */

void __thiscall
GeoQuadTree::GeoQuadTree
          (GeoQuadTree *this,GeoMipMappingTerrain *param_1,uint param_2,uint param_3,float param_4,
          float param_5,float param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  GeoMipMappingTerrainPatch *this_00;
  float fVar4;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  *(GeoMipMappingTerrain **)this = param_1;
  GeoMipMappingTerrain::queryMinMaxHeights(param_1,0,0,uVar1,uVar1,&fStack_6c,&local_70);
  puVar3 = (undefined8 *)operator_new(0x70);
  *(float *)(puVar3 + 2) = param_4;
  *(float *)((long)puVar3 + 0x14) = param_5;
  *(float *)(puVar3 + 3) = param_4 + param_6;
  *puVar3 = 0;
  *(uint *)(puVar3 + 1) = uVar1;
  *(uint *)((long)puVar3 + 0xc) = uVar1;
  *(float *)((long)puVar3 + 0x1c) = param_5 + param_6;
  *(float *)(puVar3 + 4) = fStack_6c;
  *(float *)((long)puVar3 + 0x24) = local_70;
  *(uint *)(puVar3 + 5) = param_2;
  *(uint *)((long)puVar3 + 0x2c) = param_2 - param_3;
  *(uint *)(puVar3 + 6) = param_2 - param_3;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  *(undefined *)(puVar3 + 7) = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
                    /* try { // try from 008f0c5c to 008f0c83 has its CatchHandler @ 008f0cd0 */
  this_00 = (GeoMipMappingTerrainPatch *)GeoMipMappingTerrain::allocPatch();
  puVar3[0xc] = this_00;
  GeoMipMappingTerrainPatch::setExtents(this_00,0,0,uVar1,uVar1,fStack_6c,local_70);
  *(undefined8 **)(this + 8) = puVar3;
  fVar4 = log2f(param_6);
  *(uint *)(this + 0x14) = param_3;
  *(float *)(this + 0x10) = fVar4;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


