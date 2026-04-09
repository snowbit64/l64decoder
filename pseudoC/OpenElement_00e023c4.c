// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenElement
// Entry Point: 00e023c4
// Size: 488 bytes
// Signature: undefined __thiscall OpenElement(XMLPrinter * this, char * param_1, bool param_2)


/* tinyxml2::XMLPrinter::OpenElement(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::OpenElement(XMLPrinter *this,char *param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  XMLPrinter *pXVar6;
  int iVar7;
  int iVar8;
  
  SealElementIfJustOpened();
  iVar7 = *(int *)(this + 0x6c);
  if (iVar7 < *(int *)(this + 0x68)) {
    iVar8 = *(int *)(this + 0x84);
    *(char **)(*(long *)(this + 0x10) + (long)iVar7 * 8) = param_1;
    *(int *)(this + 0x6c) = iVar7 + 1;
  }
  else {
    uVar1 = iVar7 * 2 + 2;
    uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    pXVar6 = *(XMLPrinter **)(this + 0x10);
    memcpy(pvVar4,pXVar6,(long)iVar7 << 3);
    if ((pXVar6 != (XMLPrinter *)0x0) && (this + 0x18 != pXVar6)) {
      operator_delete__(pXVar6);
      iVar7 = *(int *)(this + 0x6c);
    }
    *(void **)(this + 0x10) = pvVar4;
    *(uint *)(this + 0x68) = uVar1;
    iVar8 = *(int *)(this + 0x84);
    *(char **)((long)pvVar4 + (long)iVar7 * 8) = param_1;
    *(int *)(this + 0x6c) = iVar7 + 1;
  }
  if (((iVar8 < 0) && (this[0x70] == (XMLPrinter)0x0)) && (!param_2)) {
    if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
      iVar8 = *(int *)(this + 0x130);
      iVar7 = iVar8 + 1;
      if (iVar8 < *(int *)(this + 300)) {
        *(int *)(this + 0x130) = iVar7;
        *(undefined2 *)(*(long *)(this + 0x110) + (long)iVar8 + -1) = 10;
      }
      else {
        iVar2 = iVar7 * 2;
        pvVar4 = operator_new__((long)iVar2);
        pXVar6 = *(XMLPrinter **)(this + 0x110);
        memcpy(pvVar4,pXVar6,(long)iVar8);
        if ((pXVar6 != this + 0x118) && (pXVar6 != (XMLPrinter *)0x0)) {
          operator_delete__(pXVar6);
          iVar8 = *(int *)(this + 0x130);
          iVar7 = iVar8 + 1;
        }
        *(void **)(this + 0x110) = pvVar4;
        *(int *)(this + 300) = iVar2;
        *(int *)(this + 0x130) = iVar7;
        *(undefined2 *)((long)pvVar4 + (long)iVar8 + -1) = 10;
      }
    }
    else {
      fputc(10,*(FILE **)(this + 0x78));
    }
  }
  if (!param_2) {
    (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)(this + 0x80));
  }
  Write(this,"<",1);
  sVar3 = strlen(param_1);
  Write(this,param_1,sVar3);
  this[8] = (XMLPrinter)0x1;
  this[0x70] = (XMLPrinter)0x0;
  *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
  return;
}


