// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitExit
// Entry Point: 00b26dc8
// Size: 36 bytes
// Signature: undefined __cdecl VisitExit(XMLElement * param_1)


/* TinyXMLPrinter::VisitExit(tinyxml2::XMLElement const&) */

undefined8 TinyXMLPrinter::VisitExit(XMLElement *param_1)

{
  XMLPrinter::closeElement((XMLPrinter *)(param_1 + 8),(bool)param_1[0x20]);
  return 1;
}


