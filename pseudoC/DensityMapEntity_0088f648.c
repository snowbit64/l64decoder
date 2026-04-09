// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapEntity
// Entry Point: 0088f648
// Size: 64 bytes
// Signature: undefined __thiscall ~DensityMapEntity(DensityMapEntity * this)


/* DensityMapEntity::~DensityMapEntity() */

void __thiscall DensityMapEntity::~DensityMapEntity(DensityMapEntity *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__DensityMapEntity_00fdd0d8;
                    /* try { // try from 0088f668 to 0088f673 has its CatchHandler @ 0088f688 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  Entity::~Entity((Entity *)this);
  return;
}


