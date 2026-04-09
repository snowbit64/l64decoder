// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDataPlane
// Entry Point: 00a706fc
// Size: 104 bytes
// Signature: undefined __thiscall ~TerrainDataPlane(TerrainDataPlane * this)


/* TerrainDataPlane::~TerrainDataPlane() */

void __thiscall TerrainDataPlane::~TerrainDataPlane(TerrainDataPlane *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__TerrainDataPlane_00fe3dd0;
  if (*(long *)(this + 0x50) != 0) {
    if (*(long **)(this + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x58) + 8))();
    }
                    /* try { // try from 00a70738 to 00a70743 has its CatchHandler @ 00a70764 */
    this_00 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this_00,*(Resource **)(this + 0x50));
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Entity::~Entity((Entity *)this);
  return;
}


