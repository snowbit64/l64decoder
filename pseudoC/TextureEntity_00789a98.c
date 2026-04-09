// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TextureEntity
// Entry Point: 00789a98
// Size: 60 bytes
// Signature: undefined __thiscall ~TextureEntity(TextureEntity * this)


/* TextureEntity::~TextureEntity() */

void __thiscall TextureEntity::~TextureEntity(TextureEntity *this)

{
  ResourceManager *this_00;
  
  *(undefined ***)this = &PTR__TextureEntity_00fdb6b8;
                    /* try { // try from 00789ab8 to 00789ac3 has its CatchHandler @ 00789ad4 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)(this + 0x20));
  Entity::~Entity((Entity *)this);
  return;
}


