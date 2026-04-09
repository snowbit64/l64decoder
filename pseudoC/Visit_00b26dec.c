// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00b26dec
// Size: 52 bytes
// Signature: undefined __cdecl Visit(XMLDeclaration * param_1)


/* TinyXMLPrinter::Visit(tinyxml2::XMLDeclaration const&) */

undefined8 TinyXMLPrinter::Visit(XMLDeclaration *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)tinyxml2::XMLNode::Value();
  XMLPrinter::pushDeclaration((XMLPrinter *)(param_1 + 8),pcVar1);
  return 1;
}


