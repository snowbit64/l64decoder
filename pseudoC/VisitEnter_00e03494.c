// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitEnter
// Entry Point: 00e03494
// Size: 52 bytes
// Signature: undefined __thiscall VisitEnter(XMLPrinter * this, XMLDocument * param_1)


/* tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLDocument const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::VisitEnter(XMLPrinter *this,XMLDocument *param_1)

{
  XMLDocument XVar1;
  
  XVar1 = param_1[0x68];
  this[0x88] = *(XMLPrinter *)(param_1 + 0x69);
  if (XVar1 != (XMLDocument)0x0) {
    Write(this,&DAT_0054bf01,3);
  }
  return 1;
}


