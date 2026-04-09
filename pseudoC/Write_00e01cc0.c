// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Write
// Entry Point: 00e01cc0
// Size: 232 bytes
// Signature: undefined __thiscall Write(XMLPrinter * this, char * param_1, ulong param_2)


/* tinyxml2::XMLPrinter::Write(char const*, unsigned long) */

void __thiscall tinyxml2::XMLPrinter::Write(XMLPrinter *this,char *param_1,ulong param_2)

{
  int iVar1;
  void *pvVar2;
  XMLPrinter *__src;
  int iVar3;
  int iVar4;
  
  if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
    iVar3 = *(int *)(this + 0x130);
    iVar4 = iVar3 + (int)param_2;
    if (*(int *)(this + 300) < iVar4) {
      iVar1 = iVar4 * 2;
      pvVar2 = operator_new__((long)iVar1);
      __src = *(XMLPrinter **)(this + 0x110);
      memcpy(pvVar2,__src,(long)iVar3);
      if ((__src != this + 0x118) && (__src != (XMLPrinter *)0x0)) {
        operator_delete__(__src);
        iVar3 = *(int *)(this + 0x130);
        iVar4 = iVar3 + (int)param_2;
      }
      *(void **)(this + 0x110) = pvVar2;
      *(int *)(this + 300) = iVar1;
    }
    else {
      pvVar2 = *(void **)(this + 0x110);
    }
    pvVar2 = (void *)((long)pvVar2 + (long)iVar3 + -1);
    *(int *)(this + 0x130) = iVar4;
    memcpy(pvVar2,param_1,param_2);
    *(undefined *)((long)pvVar2 + param_2) = 0;
  }
  else {
    fwrite(param_1,1,param_2,*(FILE **)(this + 0x78));
  }
  return;
}


