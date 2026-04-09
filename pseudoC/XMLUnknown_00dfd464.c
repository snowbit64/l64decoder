// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLUnknown
// Entry Point: 00dfd464
// Size: 36 bytes
// Signature: undefined __thiscall ~XMLUnknown(XMLUnknown * this)


/* tinyxml2::XMLUnknown::~XMLUnknown() */

void __thiscall tinyxml2::XMLUnknown::~XMLUnknown(XMLUnknown *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}


