// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitEnter
// Entry Point: 00e034c8
// Size: 248 bytes
// Signature: undefined __thiscall VisitEnter(XMLPrinter * this, XMLElement * param_1, XMLAttribute * param_2)


/* tinyxml2::XMLPrinter::VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*) */

undefined8 __thiscall
tinyxml2::XMLPrinter::VisitEnter(XMLPrinter *this,XMLElement *param_1,XMLAttribute *param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 == (long *)0x0) || (lVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar2 == 0)) {
    bVar1 = this[0x89] != (XMLPrinter)0x0;
    lVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0x58))(this,lVar2);
    lVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (lVar2 == 0) {
    pcVar3 = (char *)StrPair::GetStr();
    OpenElement(this,pcVar3,(bool)(bVar1 & 1));
  }
  else {
    OpenElement(this,(char *)0x0,(bool)(bVar1 & 1));
  }
  if (param_2 != (XMLAttribute *)0x0) {
    do {
      pcVar3 = (char *)StrPair::GetStr();
      pcVar4 = (char *)StrPair::GetStr();
      PushAttribute(this,pcVar3,pcVar4);
      param_2 = *(XMLAttribute **)(param_2 + 0x40);
    } while (param_2 != (XMLAttribute *)0x0);
  }
  return 1;
}


