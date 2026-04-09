// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00e037a4
// Size: 104 bytes
// Signature: undefined __thiscall Visit(XMLPrinter * this, XMLUnknown * param_1)


/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLUnknown const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLUnknown *param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (lVar1 != 0) {
    PushUnknown(this,(char *)0x0);
    return 1;
  }
  pcVar2 = (char *)StrPair::GetStr();
  PushUnknown(this,pcVar2);
  return 1;
}


