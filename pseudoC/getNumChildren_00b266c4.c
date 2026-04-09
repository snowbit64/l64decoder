// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumChildren
// Entry Point: 00b266c4
// Size: 96 bytes
// Signature: undefined __thiscall getNumChildren(DomXMLFile * this, char * param_1)


/* DomXMLFile::getNumChildren(char const*) */

int __thiscall DomXMLFile::getNumChildren(DomXMLFile *this,char *param_1)

{
  XMLNode *pXVar1;
  int iVar2;
  
  if ((this[8] == (DomXMLFile)0x0) ||
     (pXVar1 = (XMLNode *)getElement(this,param_1,false,(char **)0x0,(bool *)0x0),
     pXVar1 == (XMLNode *)0x0)) {
    iVar2 = 0;
  }
  else {
    pXVar1 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar1,(char *)0x0);
    iVar2 = 0;
    for (; pXVar1 != (XMLNode *)0x0;
        pXVar1 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar1,(char *)0x0)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


