// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShallowClone
// Entry Point: 00dfcd68
// Size: 104 bytes
// Signature: undefined __thiscall ShallowClone(XMLComment * this, XMLDocument * param_1)


/* tinyxml2::XMLComment::ShallowClone(tinyxml2::XMLDocument*) const */

void __thiscall tinyxml2::XMLComment::ShallowClone(XMLComment *this,XMLDocument *param_1)

{
  XMLDocument *this_00;
  long lVar1;
  char *pcVar2;
  
  this_00 = *(XMLDocument **)(this + 8);
  lVar1 = (**(code **)(*(long *)this + 0x48))();
  if (lVar1 != 0) {
    if (param_1 != (XMLDocument *)0x0) {
      this_00 = param_1;
    }
    XMLDocument::NewComment(this_00,(char *)0x0);
    return;
  }
  pcVar2 = (char *)StrPair::GetStr();
  if (param_1 != (XMLDocument *)0x0) {
    this_00 = param_1;
  }
  XMLDocument::NewComment(this_00,pcVar2);
  return;
}


