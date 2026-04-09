// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GeoMipMappingTerrain
// Entry Point: 008ef12c
// Size: 472 bytes
// Signature: undefined __thiscall ~GeoMipMappingTerrain(GeoMipMappingTerrain * this)


/* GeoMipMappingTerrain::~GeoMipMappingTerrain() */

void __thiscall GeoMipMappingTerrain::~GeoMipMappingTerrain(GeoMipMappingTerrain *this)

{
  long **pplVar1;
  int iVar2;
  TerrainPatchOccluderManager *this_00;
  GeoQuadTree *this_01;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  
  *(undefined ***)this = &PTR__GeoMipMappingTerrain_00fde710;
  *(undefined ***)(this + 0x178) = &PTR__GeoMipMappingTerrain_00fde740;
  if (*(long *)(this + 0x2c8) != 0) {
                    /* try { // try from 008ef168 to 008ef173 has its CatchHandler @ 008ef304 */
    this_00 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
    TerrainPatchOccluderManager::unsetCurrentTerrain(this_00,this);
    if (*(void **)(this + 0x2c8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x2c8));
    }
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x188));
  }
  if (*(long **)(this + 600) != (long *)0x0) {
    (**(code **)(**(long **)(this + 600) + 8))();
  }
  if (*(long **)(this + 0x260) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x260) + 8))();
  }
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 8))();
  }
  if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 8))();
  }
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 8))();
  }
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 8))();
  }
  if (*(long **)(this + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x220) + 8))();
  }
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 8))();
  }
  if (*(long **)(this + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x240) + 8))();
  }
  if (*(long **)(this + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x250) + 8))();
  }
  this_01 = *(GeoQuadTree **)(this + 400);
  if (this_01 != (GeoQuadTree *)0x0) {
    GeoQuadTree::~GeoQuadTree(this_01);
    operator_delete(this_01);
  }
  pplVar3 = *(long ***)(this + 0x1a8);
  pplVar1 = *(long ***)(this + 0x1b0);
  if (pplVar3 != pplVar1) {
    do {
      plVar5 = *pplVar3;
      plVar4 = (long *)plVar5[0xf];
      iVar2 = FUN_00f27700(0xffffffff,plVar5 + 1);
      if (iVar2 < 2) {
                    /* try { // try from 008ef2d8 to 008ef2df has its CatchHandler @ 008ef308 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      pplVar3 = pplVar3 + 1;
    } while (pplVar3 != pplVar1);
    pplVar3 = *(long ***)(this + 0x1a8);
  }
  if (pplVar3 != (long **)0x0) {
    *(long ***)(this + 0x1b0) = pplVar3;
    operator_delete(pplVar3);
  }
  Streamable::~Streamable((Streamable *)(this + 0x178));
  BaseTerrain::~BaseTerrain((BaseTerrain *)this);
  return;
}


