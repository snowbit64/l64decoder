// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DomXMLFileEntity
// Entry Point: 007935f8
// Size: 60 bytes
// Signature: undefined __thiscall ~DomXMLFileEntity(DomXMLFileEntity * this)


/* DomXMLFileEntity::~DomXMLFileEntity() */

void __thiscall DomXMLFileEntity::~DomXMLFileEntity(DomXMLFileEntity *this)

{
  *(undefined ***)this = &PTR__DomXMLFileEntity_00fdb840;
  DomXMLFile::~DomXMLFile((DomXMLFile *)(this + 0x20));
  Entity::~Entity((Entity *)this);
  operator_delete(this);
  return;
}


