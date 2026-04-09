// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00b26e90
// Size: 52 bytes
// Signature: undefined __cdecl Visit(XMLUnknown * param_1)


/* TinyXMLPrinter::Visit(tinyxml2::XMLUnknown const&) */

undefined8 TinyXMLPrinter::Visit(XMLUnknown *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)tinyxml2::XMLNode::Value();
  XMLPrinter::pushUnknown((XMLPrinter *)(param_1 + 8),pcVar1);
  return 1;
}


