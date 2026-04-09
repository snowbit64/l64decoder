// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PreviousSiblingElement
// Entry Point: 00dfbe68
// Size: 228 bytes
// Signature: undefined __thiscall PreviousSiblingElement(XMLNode * this, char * param_1)


/* tinyxml2::XMLNode::PreviousSiblingElement(char const*) const */

long * __thiscall tinyxml2::XMLNode::PreviousSiblingElement(XMLNode *this,char *param_1)

{
  int iVar1;
  long lVar2;
  char *__s1;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x48);
  if (plVar4 != (long *)0x0) {
    if (param_1 == (char *)0x0) {
      do {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4);
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
        plVar4 = (long *)plVar4[9];
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4);
        if (plVar3 != (long *)0x0) {
          lVar2 = (**(code **)(*plVar3 + 0x48))();
          if (lVar2 == 0) {
            __s1 = (char *)StrPair::GetStr();
            if (__s1 == param_1) {
              return plVar3;
            }
          }
          else {
            __s1 = (char *)0x0;
            if (param_1 == (char *)0x0) {
              return plVar3;
            }
          }
          iVar1 = strncmp(__s1,param_1,0x7fffffff);
          if (iVar1 == 0) {
            return plVar3;
          }
        }
        plVar4 = (long *)plVar4[9];
      } while (plVar4 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


