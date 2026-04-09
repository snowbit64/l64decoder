// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChild
// Entry Point: 00b26410
// Size: 336 bytes
// Signature: undefined __thiscall getChild(DomXMLFile * this, char * param_1, uint param_2, char * param_3, uint param_4, uint * param_5)


/* DomXMLFile::getChild(char const*, unsigned int, char*, unsigned int, unsigned int&) */

DomXMLFile __thiscall
DomXMLFile::getChild
          (DomXMLFile *this,char *param_1,uint param_2,char *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  int iVar2;
  XMLNode *pXVar3;
  XMLNode *this_00;
  char *pcVar4;
  char *__s2;
  DomXMLFile DVar5;
  char *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  DVar5 = this[8];
  if (((DVar5 != (DomXMLFile)0x0) && (DVar5 = (DomXMLFile)0x0, param_1 != (char *)0x0)) &&
     (*(long *)(this + 0x28) != 0)) {
    pXVar3 = (XMLNode *)getElement(this,param_1,false,&pcStack_60,(bool *)0x0);
    if ((pXVar3 != (XMLNode *)0x0) &&
       (pXVar3 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar3,(char *)0x0),
       pXVar3 != (XMLNode *)0x0)) {
      iVar2 = param_2 + 1;
      this_00 = pXVar3;
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          pcVar4 = (char *)tinyxml2::XMLNode::Value();
          strncpy(param_3,pcVar4,(ulong)param_4);
          param_3[param_4 - 1] = '\0';
          *param_5 = 0;
          goto joined_r0x00b26504;
        }
        this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      } while (this_00 != (XMLNode *)0x0);
    }
    DVar5 = (DomXMLFile)0x0;
  }
  goto LAB_00b264ac;
  while( true ) {
    pcVar4 = (char *)tinyxml2::XMLNode::Value();
    __s2 = (char *)tinyxml2::XMLNode::Value();
    iVar2 = strcmp(pcVar4,__s2);
    if (iVar2 == 0) {
      *param_5 = *param_5 + 1;
    }
    pXVar3 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar3,(char *)0x0);
    if (pXVar3 == (XMLNode *)0x0) break;
joined_r0x00b26504:
    if (pXVar3 == this_00) break;
  }
  DVar5 = (DomXMLFile)0x1;
LAB_00b264ac:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return DVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


