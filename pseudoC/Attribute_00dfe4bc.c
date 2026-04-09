// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Attribute
// Entry Point: 00dfe4bc
// Size: 152 bytes
// Signature: undefined __thiscall Attribute(XMLElement * this, char * param_1, char * param_2)


/* tinyxml2::XMLElement::Attribute(char const*, char const*) const */

undefined8 __thiscall tinyxml2::XMLElement::Attribute(XMLElement *this,char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x70);
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    pcVar2 = (char *)StrPair::GetStr();
    if ((pcVar2 == param_1) || (iVar1 = strncmp(pcVar2,param_1,0x7fffffff), iVar1 == 0)) break;
    lVar4 = *(long *)(lVar4 + 0x40);
  }
  if ((param_2 != (char *)0x0) &&
     ((pcVar2 = (char *)StrPair::GetStr(), pcVar2 != param_2 &&
      (iVar1 = strncmp(pcVar2,param_2,0x7fffffff), iVar1 != 0)))) {
    return 0;
  }
  uVar3 = StrPair::GetStr();
  return uVar3;
}


