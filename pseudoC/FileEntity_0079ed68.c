// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FileEntity
// Entry Point: 0079ed68
// Size: 68 bytes
// Signature: undefined __thiscall ~FileEntity(FileEntity * this)


/* FileEntity::~FileEntity() */

void __thiscall FileEntity::~FileEntity(FileEntity *this)

{
  *(undefined ***)this = &PTR__FileEntity_00fdb8c8;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  Entity::~Entity((Entity *)this);
  return;
}


