// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushAttribute
// Entry Point: 00e02688
// Size: 432 bytes
// Signature: undefined __thiscall PushAttribute(XMLPrinter * this, char * param_1, char * param_2)


/* tinyxml2::XMLPrinter::PushAttribute(char const*, char const*) */

XMLPrinter * __thiscall
tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  XMLPrinter *pXVar4;
  void *pvVar5;
  XMLPrinter *__src;
  int iVar6;
  int iVar7;
  
  if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
    iVar6 = *(int *)(this + 0x130);
    iVar7 = iVar6 + 1;
    if (iVar6 < *(int *)(this + 300)) {
      pvVar5 = *(void **)(this + 0x110);
    }
    else {
      iVar1 = iVar7 * 2;
      pvVar5 = operator_new__((long)iVar1);
      pXVar4 = *(XMLPrinter **)(this + 0x110);
      memcpy(pvVar5,pXVar4,(long)iVar6);
      if ((pXVar4 != this + 0x118) && (pXVar4 != (XMLPrinter *)0x0)) {
        operator_delete__(pXVar4);
        iVar6 = *(int *)(this + 0x130);
        iVar7 = iVar6 + 1;
      }
      *(void **)(this + 0x110) = pvVar5;
      *(int *)(this + 300) = iVar1;
    }
    *(int *)(this + 0x130) = iVar7;
    *(undefined2 *)((long)pvVar5 + (long)iVar6 + -1) = 0x20;
  }
  else {
    fputc(0x20,*(FILE **)(this + 0x78));
  }
  sVar3 = strlen(param_1);
  Write(this,param_1,sVar3);
  Write(this,"=\"",2);
  pXVar4 = (XMLPrinter *)PrintString(this,param_2,false);
  if (*(FILE **)(this + 0x78) != (FILE *)0x0) {
    uVar2 = fputc(0x22,*(FILE **)(this + 0x78));
    return (XMLPrinter *)(ulong)uVar2;
  }
  iVar6 = *(int *)(this + 0x130);
  iVar7 = iVar6 + 1;
  if (iVar6 < *(int *)(this + 300)) {
    pvVar5 = *(void **)(this + 0x110);
  }
  else {
    iVar1 = iVar7 * 2;
    pvVar5 = operator_new__((long)iVar1);
    __src = *(XMLPrinter **)(this + 0x110);
    pXVar4 = (XMLPrinter *)memcpy(pvVar5,__src,(long)iVar6);
    if ((__src != this + 0x118) && (__src != (XMLPrinter *)0x0)) {
      operator_delete__(__src);
      iVar6 = *(int *)(this + 0x130);
      iVar7 = iVar6 + 1;
      pXVar4 = __src;
    }
    *(void **)(this + 0x110) = pvVar5;
    *(int *)(this + 300) = iVar1;
  }
  *(int *)(this + 0x130) = iVar7;
  *(undefined2 *)((long)pvVar5 + (long)iVar6 + -1) = 0x22;
  return pXVar4;
}


