// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLComment
// Entry Point: 00dfcc70
// Size: 36 bytes
// Signature: undefined __thiscall ~XMLComment(XMLComment * this)


/* tinyxml2::XMLComment::~XMLComment() */

void __thiscall tinyxml2::XMLComment::~XMLComment(XMLComment *this)

{
  XMLNode::~XMLNode((XMLNode *)this);
  operator_delete(this);
  return;
}


