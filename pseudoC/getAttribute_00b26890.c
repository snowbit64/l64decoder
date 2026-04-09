// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttribute
// Entry Point: 00b26890
// Size: 100 bytes
// Signature: undefined __thiscall getAttribute(DomXMLFile * this, char * param_1, uint param_2)


/* DomXMLFile::getAttribute(char const*, unsigned int) */

undefined8 __thiscall DomXMLFile::getAttribute(DomXMLFile *this,char *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((this[8] != (DomXMLFile)0x0) &&
      (lVar1 = getElement(this,param_1,false,(char **)0x0,(bool *)0x0), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x70), lVar1 != 0)) {
    iVar3 = param_2 + 1;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        uVar2 = tinyxml2::XMLAttribute::Name();
        return uVar2;
      }
      lVar1 = *(long *)(lVar1 + 0x40);
    } while (lVar1 != 0);
  }
  return 0;
}


