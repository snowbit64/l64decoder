// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToElementWithName
// Entry Point: 00dfbc14
// Size: 140 bytes
// Signature: undefined __thiscall ToElementWithName(XMLNode * this, char * param_1)


/* tinyxml2::XMLNode::ToElementWithName(char const*) const */

long * __thiscall tinyxml2::XMLNode::ToElementWithName(XMLNode *this,char *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *__s1;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0x30))();
  if ((plVar2 != (long *)0x0) && (param_1 != (char *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if (lVar3 == 0) {
      __s1 = (char *)StrPair::GetStr();
      if (__s1 == param_1) {
        return plVar2;
      }
    }
    else {
      __s1 = (char *)0x0;
      if (param_1 == (char *)0x0) {
        return plVar2;
      }
    }
    iVar1 = strncmp(__s1,param_1,0x7fffffff);
    if (iVar1 != 0) {
      return (long *)0x0;
    }
  }
  return plVar2;
}


