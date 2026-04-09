// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitEnter
// Entry Point: 00b26d34
// Size: 148 bytes
// Signature: undefined __thiscall VisitEnter(TinyXMLPrinter * this, XMLElement * param_1, XMLAttribute * param_2)


/* TinyXMLPrinter::VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*) */

undefined8 __thiscall
TinyXMLPrinter::VisitEnter(TinyXMLPrinter *this,XMLElement *param_1,XMLAttribute *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3);
  }
  pcVar1 = (char *)tinyxml2::XMLNode::Value();
  XMLPrinter::openElement((XMLPrinter *)(this + 8),pcVar1,(bool)this[0x20]);
  if (param_2 != (XMLAttribute *)0x0) {
    do {
      pcVar1 = (char *)tinyxml2::XMLAttribute::Name();
      pcVar2 = (char *)tinyxml2::XMLAttribute::Value();
      XMLPrinter::pushAttribute((XMLPrinter *)(this + 8),pcVar1,pcVar2);
      param_2 = *(XMLAttribute **)(param_2 + 0x40);
    } while (param_2 != (XMLAttribute *)0x0);
  }
  return 1;
}


