// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapEntity
// Entry Point: 0088f6c8
// Size: 72 bytes
// Signature: undefined __thiscall ~DensityMapEntity(DensityMapEntity * this)


/* DensityMapEntity::~DensityMapEntity() */

void __thiscall DensityMapEntity::~DensityMapEntity(DensityMapEntity *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__DensityMapEntity_00fdd0d8;
                    /* try { // try from 0088f6e8 to 0088f6f3 has its CatchHandler @ 0088f710 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  Entity::~Entity((Entity *)this);
  operator_delete(this);
  return;
}


