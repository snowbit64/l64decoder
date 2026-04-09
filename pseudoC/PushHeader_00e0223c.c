// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushHeader
// Entry Point: 00e0223c
// Size: 84 bytes
// Signature: undefined __thiscall PushHeader(XMLPrinter * this, bool param_1, bool param_2)


/* tinyxml2::XMLPrinter::PushHeader(bool, bool) */

void __thiscall tinyxml2::XMLPrinter::PushHeader(XMLPrinter *this,bool param_1,bool param_2)

{
  if (param_1) {
    Write(this,&DAT_0054bf01,3);
  }
  if (param_2) {
    PushDeclaration(this,"xml version=\"1.0\"");
    return;
  }
  return;
}


