// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CloseElement
// Entry Point: 00e02b34
// Size: 548 bytes
// Signature: undefined __thiscall CloseElement(XMLPrinter * this, bool param_1)


/* tinyxml2::XMLPrinter::CloseElement(bool) */

void __thiscall tinyxml2::XMLPrinter::CloseElement(XMLPrinter *this,bool param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  void *pvVar4;
  char *__s;
  XMLPrinter *pXVar5;
  int iVar6;
  
  iVar3 = *(int *)(this + 0x6c);
  *(int *)(this + 0x80) = *(int *)(this + 0x80) + -1;
  *(int *)(this + 0x6c) = (int)((long)iVar3 + -1);
  if (this[8] == (XMLPrinter)0x0) {
    __s = *(char **)(*(long *)(this + 0x10) + ((long)iVar3 + -1) * 8);
    if ((*(int *)(this + 0x84) < 0) && (!param_1)) {
      if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
        iVar6 = *(int *)(this + 0x130);
        iVar3 = iVar6 + 1;
        if (iVar6 < *(int *)(this + 300)) {
          pvVar4 = *(void **)(this + 0x110);
        }
        else {
          iVar1 = iVar3 * 2;
          pvVar4 = operator_new__((long)iVar1);
          pXVar5 = *(XMLPrinter **)(this + 0x110);
          memcpy(pvVar4,pXVar5,(long)iVar6);
          if ((pXVar5 != this + 0x118) && (pXVar5 != (XMLPrinter *)0x0)) {
            operator_delete__(pXVar5);
            iVar6 = *(int *)(this + 0x130);
            iVar3 = iVar6 + 1;
          }
          *(void **)(this + 0x110) = pvVar4;
          *(int *)(this + 300) = iVar1;
        }
        *(int *)(this + 0x130) = iVar3;
        *(undefined2 *)((long)pvVar4 + (long)iVar6 + -1) = 10;
      }
      else {
        fputc(10,*(FILE **)(this + 0x78));
      }
      (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)(this + 0x80));
    }
    Write(this,"</",2);
    sVar2 = strlen(__s);
    Write(this,__s,sVar2);
    Write(this,">",1);
    iVar3 = *(int *)(this + 0x80);
    if (*(int *)(this + 0x84) != iVar3) goto LAB_00e02ba0;
  }
  else {
    Write(this,"/>",2);
    iVar3 = *(int *)(this + 0x80);
    if (*(int *)(this + 0x84) != iVar3) goto LAB_00e02ba0;
  }
  *(undefined4 *)(this + 0x84) = 0xffffffff;
LAB_00e02ba0:
  if ((iVar3 == 0) && (!param_1)) {
    if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
      iVar6 = *(int *)(this + 0x130);
      iVar3 = iVar6 + 1;
      if (iVar6 < *(int *)(this + 300)) {
        pvVar4 = *(void **)(this + 0x110);
      }
      else {
        iVar1 = iVar3 * 2;
        pvVar4 = operator_new__((long)iVar1);
        pXVar5 = *(XMLPrinter **)(this + 0x110);
        memcpy(pvVar4,pXVar5,(long)iVar6);
        if ((pXVar5 != this + 0x118) && (pXVar5 != (XMLPrinter *)0x0)) {
          operator_delete__(pXVar5);
          iVar6 = *(int *)(this + 0x130);
          iVar3 = iVar6 + 1;
        }
        *(void **)(this + 0x110) = pvVar4;
        *(int *)(this + 300) = iVar1;
      }
      *(int *)(this + 0x130) = iVar3;
      *(undefined2 *)((long)pvVar4 + (long)iVar6 + -1) = 10;
    }
    else {
      fputc(10,*(FILE **)(this + 0x78));
    }
  }
  this[8] = (XMLPrinter)0x0;
  return;
}


