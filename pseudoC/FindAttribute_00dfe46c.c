// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FindAttribute
// Entry Point: 00dfe46c
// Size: 80 bytes
// Signature: undefined __thiscall FindAttribute(XMLElement * this, char * param_1)


/* tinyxml2::XMLElement::FindAttribute(char const*) const */

long __thiscall tinyxml2::XMLElement::FindAttribute(XMLElement *this,char *param_1)

{
  int iVar1;
  char *__s1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x70);
  while (((lVar2 != 0 && (__s1 = (char *)StrPair::GetStr(), __s1 != param_1)) &&
         (iVar1 = strncmp(__s1,param_1,0x7fffffff), iVar1 != 0))) {
    lVar2 = *(long *)(lVar2 + 0x40);
  }
  return lVar2;
}


