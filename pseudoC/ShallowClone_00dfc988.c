// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShallowClone
// Entry Point: 00dfc988
// Size: 96 bytes
// Signature: undefined __thiscall ShallowClone(XMLText * this, XMLDocument * param_1)


/* tinyxml2::XMLText::ShallowClone(tinyxml2::XMLDocument*) const */

void __thiscall tinyxml2::XMLText::ShallowClone(XMLText *this,XMLDocument *param_1)

{
  XMLDocument *this_00;
  long lVar1;
  char *pcVar2;
  
  this_00 = *(XMLDocument **)(this + 8);
  lVar1 = (**(code **)(*(long *)this + 0x48))();
  if (lVar1 == 0) {
    pcVar2 = (char *)StrPair::GetStr();
  }
  else {
    pcVar2 = (char *)0x0;
  }
  if (param_1 != (XMLDocument *)0x0) {
    this_00 = param_1;
  }
  lVar1 = XMLDocument::NewText(this_00,pcVar2);
  *(XMLText *)(lVar1 + 0x68) = this[0x68];
  return;
}


