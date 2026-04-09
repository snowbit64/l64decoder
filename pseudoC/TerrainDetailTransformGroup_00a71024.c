// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDetailTransformGroup
// Entry Point: 00a71024
// Size: 140 bytes
// Signature: undefined __thiscall ~TerrainDetailTransformGroup(TerrainDetailTransformGroup * this)


/* TerrainDetailTransformGroup::~TerrainDetailTransformGroup() */

void __thiscall
TerrainDetailTransformGroup::~TerrainDetailTransformGroup(TerrainDetailTransformGroup *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__TerrainDetailTransformGroup_00fe3e10;
  *(undefined ***)(this + 0x158) = &PTR__TerrainDetailTransformGroup_00fe3eb8;
  *(undefined ***)(this + 0x1e0) = &PTR__TerrainDetailTransformGroup_00fe3ee0;
  *(undefined ***)(this + 0x1f0) = &PTR__TerrainDetailTransformGroup_00fe3f10;
  if (*(DensityMap **)(this + 0x218) != (DensityMap *)0x0) {
                    /* try { // try from 00a71070 to 00a71073 has its CatchHandler @ 00a710b0 */
    DensityMap::removeDirtyListener(*(DensityMap **)(this + 0x218),(DirtyListener *)(this + 0x1f0));
    if (*(long **)(this + 0x220) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x220) + 8))();
    }
                    /* try { // try from 00a71088 to 00a71093 has its CatchHandler @ 00a710b0 */
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x218));
  }
  Streamable::~Streamable((Streamable *)(this + 0x1e0));
  LocalGeometryTransformGroup::~LocalGeometryTransformGroup((LocalGeometryTransformGroup *)this);
  return;
}


