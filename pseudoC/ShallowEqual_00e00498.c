// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShallowEqual
// Entry Point: 00e00498
// Size: 344 bytes
// Signature: undefined __thiscall ShallowEqual(XMLElement * this, XMLNode * param_1)


/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLElement::ShallowEqual(tinyxml2::XMLNode const*) const */

bool __thiscall tinyxml2::XMLElement::ShallowEqual(XMLElement *this,XMLNode *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (plVar2 == (long *)0x0) {
    return false;
  }
  lVar3 = (**(code **)(*plVar2 + 0x48))();
  if (lVar3 == 0) {
    pcVar6 = (char *)StrPair::GetStr();
    lVar3 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar3 == 0) goto LAB_00e0051c;
LAB_00e004ec:
    pcVar4 = (char *)0x0;
    if (pcVar6 == (char *)0x0) goto LAB_00e00554;
  }
  else {
    pcVar6 = (char *)0x0;
    lVar3 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar3 != 0) goto LAB_00e004ec;
LAB_00e0051c:
    pcVar4 = (char *)StrPair::GetStr();
    if (pcVar6 == pcVar4) goto LAB_00e00554;
  }
  iVar1 = strncmp(pcVar6,pcVar4,0x7fffffff);
  if (iVar1 != 0) {
    return false;
  }
LAB_00e00554:
  lVar3 = *(long *)(this + 0x70);
  lVar5 = plVar2[0xe];
  while( true ) {
    if ((lVar5 == 0) || (lVar3 == 0)) {
      return lVar5 == 0 && lVar3 == 0;
    }
    pcVar6 = (char *)StrPair::GetStr();
    pcVar4 = (char *)StrPair::GetStr();
    if ((pcVar6 != pcVar4) && (iVar1 = strncmp(pcVar6,pcVar4,0x7fffffff), iVar1 != 0)) break;
    lVar3 = *(long *)(lVar3 + 0x40);
    lVar5 = *(long *)(lVar5 + 0x40);
  }
  return false;
}


