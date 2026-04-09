// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Visit
// Entry Point: 00e03600
// Size: 212 bytes
// Signature: undefined __thiscall Visit(XMLPrinter * this, XMLText * param_1)


/* tinyxml2::XMLPrinter::Visit(tinyxml2::XMLText const&) */

undefined8 __thiscall tinyxml2::XMLPrinter::Visit(XMLPrinter *this,XMLText *param_1)

{
  XMLText XVar1;
  long lVar2;
  size_t sVar3;
  char *__s;
  
  lVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (lVar2 == 0) {
    __s = (char *)StrPair::GetStr();
  }
  else {
    __s = (char *)0x0;
  }
  XVar1 = param_1[0x68];
  *(int *)(this + 0x84) = *(int *)(this + 0x80) + -1;
  SealElementIfJustOpened();
  if (XVar1 != (XMLText)0x0) {
    Write(this,"<![CDATA[",9);
    sVar3 = strlen(__s);
    Write(this,__s,sVar3);
    Write(this,"]]>",3);
    return 1;
  }
  PrintString(this,__s,true);
  return 1;
}


