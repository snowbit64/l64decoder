// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLText
// Entry Point: 00e03a08
// Size: 36 bytes
// Signature: undefined __thiscall ~XMLText(XMLText * this)


/* tinyxml2::XMLText::~XMLText() */

void __thiscall tinyxml2::XMLText::~XMLText(XMLText *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}


