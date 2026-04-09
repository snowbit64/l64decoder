// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushUnknown
// Entry Point: 00e032d4
// Size: 448 bytes
// Signature: undefined __thiscall PushUnknown(XMLPrinter * this, char * param_1)


/* tinyxml2::XMLPrinter::PushUnknown(char const*) */

XMLPrinter * __thiscall tinyxml2::XMLPrinter::PushUnknown(XMLPrinter *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  XMLPrinter *pXVar4;
  void *pvVar5;
  XMLPrinter *__src;
  int iVar6;
  int iVar7;
  
  SealElementIfJustOpened();
  if (((*(int *)(this + 0x84) < 0) && (this[0x70] == (XMLPrinter)0x0)) &&
     (this[0x89] == (XMLPrinter)0x0)) {
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
      *(undefined2 *)((long)pvVar5 + (long)iVar6 + -1) = 10;
    }
    else {
      fputc(10,*(FILE **)(this + 0x78));
    }
    (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)(this + 0x80));
  }
  this[0x70] = (XMLPrinter)0x0;
  Write(this,"<!",2);
  sVar3 = strlen(param_1);
  pXVar4 = (XMLPrinter *)Write(this,param_1,sVar3);
  if (*(FILE **)(this + 0x78) != (FILE *)0x0) {
    uVar2 = fputc(0x3e,*(FILE **)(this + 0x78));
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
  *(undefined2 *)((long)pvVar5 + (long)iVar6 + -1) = 0x3e;
  return pXVar4;
}


