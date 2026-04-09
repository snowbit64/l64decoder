// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLDeclaration
// Entry Point: 00dfd054
// Size: 36 bytes
// Signature: undefined __thiscall ~XMLDeclaration(XMLDeclaration * this)


/* tinyxml2::XMLDeclaration::~XMLDeclaration() */

void __thiscall tinyxml2::XMLDeclaration::~XMLDeclaration(XMLDeclaration *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}


