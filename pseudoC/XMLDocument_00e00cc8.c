// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLDocument
// Entry Point: 00e00cc8
// Size: 36 bytes
// Signature: undefined __thiscall ~XMLDocument(XMLDocument * this)


/* tinyxml2::XMLDocument::~XMLDocument() */

void __thiscall tinyxml2::XMLDocument::~XMLDocument(XMLDocument *this)

{
  ~XMLDocument(this);
  operator_delete(this);
  return;
}


