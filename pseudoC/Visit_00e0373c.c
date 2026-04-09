// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00e0373c
// Size: 104 bytes
// Signature: undefined __thiscall Visit(XMLPrinter * this, XMLDeclaration * param_1)


/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLDeclaration const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLDeclaration *param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (lVar1 != 0) {
    PushDeclaration(this,(char *)0x0);
    return 1;
  }
  pcVar2 = (char *)StrPair::GetStr();
  PushDeclaration(this,pcVar2);
  return 1;
}


