// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShallowEqual
// Entry Point: 00dfcf48
// Size: 192 bytes
// Signature: undefined __thiscall ShallowEqual(XMLComment * this, XMLNode * param_1)


/* tinyxml2::XMLComment::ShallowEqual(tinyxml2::XMLNode const*) const */

bool __thiscall tinyxml2::XMLComment::ShallowEqual(XMLComment *this,XMLNode *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *__s2;
  char *__s1;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (plVar2 == (long *)0x0) {
    return false;
  }
  lVar3 = (**(code **)(*plVar2 + 0x48))();
  if (lVar3 == 0) {
    __s1 = (char *)StrPair::GetStr();
    lVar3 = (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    __s1 = (char *)0x0;
    lVar3 = (**(code **)(*(long *)this + 0x48))(this);
  }
  if (lVar3 == 0) {
    __s2 = (char *)StrPair::GetStr();
    if (__s1 == __s2) {
      return true;
    }
  }
  else {
    __s2 = (char *)0x0;
    if (__s1 == (char *)0x0) {
      return true;
    }
  }
  iVar1 = strncmp(__s1,__s2,0x7fffffff);
  return iVar1 == 0;
}


