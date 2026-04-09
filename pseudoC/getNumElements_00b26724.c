// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumElements
// Entry Point: 00b26724
// Size: 228 bytes
// Signature: undefined __thiscall getNumElements(DomXMLFile * this, char * param_1)


/* DomXMLFile::getNumElements(char const*) */

int __thiscall DomXMLFile::getNumElements(DomXMLFile *this,char *param_1)

{
  long lVar1;
  int iVar2;
  XMLNode *pXVar3;
  char *__s1;
  char *__s2;
  int iVar4;
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[8] != (DomXMLFile)0x0) {
    local_4c[0] = false;
    pXVar3 = (XMLNode *)getElement(this,param_1,false,(char **)0x0,local_4c);
    if (pXVar3 != (XMLNode *)0x0) {
      pXVar3 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar3,(char *)0x0);
      if (pXVar3 == (XMLNode *)0x0) {
        iVar4 = 1;
      }
      else {
        iVar4 = 1;
        do {
          if (local_4c[0] == false) {
            __s1 = (char *)tinyxml2::XMLNode::Value();
            __s2 = (char *)tinyxml2::XMLNode::Value();
            iVar2 = strcmp(__s1,__s2);
            if (iVar2 == 0) goto LAB_00b26784;
          }
          else {
LAB_00b26784:
            iVar4 = iVar4 + 1;
          }
          pXVar3 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar3,(char *)0x0);
        } while (pXVar3 != (XMLNode *)0x0);
      }
      goto LAB_00b267d0;
    }
  }
  iVar4 = 0;
LAB_00b267d0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


