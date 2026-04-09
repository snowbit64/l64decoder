// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShallowClone
// Entry Point: 00e001fc
// Size: 284 bytes
// Signature: undefined __thiscall ShallowClone(XMLElement * this, XMLDocument * param_1)


/* tinyxml2::XMLElement::ShallowClone(tinyxml2::XMLDocument*) const */

XMLElement * __thiscall tinyxml2::XMLElement::ShallowClone(XMLElement *this,XMLDocument *param_1)

{
  XMLDocument *this_00;
  long lVar1;
  XMLElement *this_01;
  size_t sVar2;
  void *__dest;
  char *pcVar3;
  char *__s;
  long lVar4;
  
  this_00 = *(XMLDocument **)(this + 8);
  if (param_1 != (XMLDocument *)0x0) {
    this_00 = param_1;
  }
  lVar1 = (**(code **)(*(long *)this + 0x48))();
  if (lVar1 == 0) {
    pcVar3 = (char *)StrPair::GetStr();
    this_01 = (XMLElement *)XMLDocument::NewElement(this_00,pcVar3);
    lVar1 = *(long *)(this + 0x70);
  }
  else {
    this_01 = (XMLElement *)XMLDocument::NewElement(this_00,(char *)0x0);
    lVar1 = *(long *)(this + 0x70);
  }
  for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x40)) {
    pcVar3 = (char *)StrPair::GetStr();
    __s = (char *)StrPair::GetStr();
    lVar4 = FindOrCreateAttribute(this_01,pcVar3);
    if (((*(byte *)(lVar4 + 0x21) >> 1 & 1) != 0) && (*(void **)(lVar4 + 0x28) != (void *)0x0)) {
      operator_delete__(*(void **)(lVar4 + 0x28));
    }
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    sVar2 = strlen(__s);
    __dest = operator_new__(sVar2 + 1);
    *(void **)(lVar4 + 0x28) = __dest;
    memcpy(__dest,__s,sVar2 + 1);
    *(undefined4 *)(lVar4 + 0x20) = 0x200;
    *(size_t *)(lVar4 + 0x30) = (long)__dest + sVar2;
  }
  return this_01;
}


