// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumAttributes
// Entry Point: 00b26840
// Size: 80 bytes
// Signature: undefined __thiscall getNumAttributes(DomXMLFile * this, char * param_1)


/* DomXMLFile::getNumAttributes(char const*) */

ulong __thiscall DomXMLFile::getNumAttributes(DomXMLFile *this,char *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (this[8] == (DomXMLFile)0x0) {
    return 0;
  }
  uVar1 = getElement(this,param_1,false,(char **)0x0,(bool *)0x0);
  if (uVar1 != 0) {
    lVar2 = *(long *)(uVar1 + 0x70);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = 0;
    do {
      lVar2 = *(long *)(lVar2 + 0x40);
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (lVar2 != 0);
  }
  return uVar1;
}


