// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00b26e20
// Size: 60 bytes
// Signature: undefined __thiscall Visit(TinyXMLPrinter * this, XMLText * param_1)


/* TinyXMLPrinter::Visit(tinyxml2::XMLText const&) */

undefined8 __thiscall TinyXMLPrinter::Visit(TinyXMLPrinter *this,XMLText *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)tinyxml2::XMLNode::Value();
  XMLPrinter::pushText((XMLPrinter *)(this + 8),pcVar1,(bool)param_1[0x68]);
  return 1;
}


