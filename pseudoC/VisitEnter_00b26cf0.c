// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitEnter
// Entry Point: 00b26cf0
// Size: 60 bytes
// Signature: undefined __thiscall VisitEnter(TinyXMLPrinter * this, XMLDocument * param_1)


/* TinyXMLPrinter::VisitEnter(tinyxml2::XMLDocument const&) */

undefined8 __thiscall TinyXMLPrinter::VisitEnter(TinyXMLPrinter *this,XMLDocument *param_1)

{
  XMLDocument XVar1;
  
  XVar1 = param_1[0x68];
  this[0x1c] = *(TinyXMLPrinter *)(param_1 + 0x69);
  if (((byte)XVar1 | (byte)this[0x658]) != 0) {
    XMLPrinter::pushHeader((XMLPrinter *)(this + 8),true,false);
  }
  return 1;
}


