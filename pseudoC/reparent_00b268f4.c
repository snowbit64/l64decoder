// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reparent
// Entry Point: 00b268f4
// Size: 108 bytes
// Signature: undefined __thiscall reparent(DomXMLFile * this, char * param_1, char * param_2)


/* DomXMLFile::reparent(char const*, char const*) */

void __thiscall DomXMLFile::reparent(DomXMLFile *this,char *param_1,char *param_2)

{
  XMLNode *pXVar1;
  XMLNode *this_00;
  
  if (this[8] != (DomXMLFile)0x0) {
    pXVar1 = (XMLNode *)getElement(this,param_1,false,(char **)0x0,(bool *)0x0);
    this_00 = (XMLNode *)getElement(this,param_2,false,(char **)0x0,(bool *)0x0);
    if ((pXVar1 != (XMLNode *)0x0) && (this_00 != (XMLNode *)0x0)) {
      tinyxml2::XMLNode::InsertEndChild(this_00,pXVar1);
    }
  }
  return;
}


