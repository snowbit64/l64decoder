// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getElementName
// Entry Point: 00b26808
// Size: 56 bytes
// Signature: undefined __thiscall getElementName(DomXMLFile * this, char * param_1)


/* DomXMLFile::getElementName(char const*) */

undefined8 __thiscall DomXMLFile::getElementName(DomXMLFile *this,char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((this[8] != (DomXMLFile)0x0) &&
     (lVar1 = getElement(this,param_1,false,(char **)0x0,(bool *)0x0), lVar1 != 0)) {
    uVar2 = tinyxml2::XMLNode::Value();
    return uVar2;
  }
  return 0;
}


