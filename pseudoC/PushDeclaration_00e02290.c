// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushDeclaration
// Entry Point: 00e02290
// Size: 308 bytes
// Signature: undefined __thiscall PushDeclaration(XMLPrinter * this, char * param_1)


/* tinyxml2::XMLPrinter::PushDeclaration(char const*) */

void __thiscall tinyxml2::XMLPrinter::PushDeclaration(XMLPrinter *this,char *param_1)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  XMLPrinter *__src;
  int iVar3;
  int iVar4;
  
  SealElementIfJustOpened();
  if (((*(int *)(this + 0x84) < 0) && (this[0x70] == (XMLPrinter)0x0)) &&
     (this[0x89] == (XMLPrinter)0x0)) {
    if (*(FILE **)(this + 0x78) == (FILE *)0x0) {
      iVar3 = *(int *)(this + 0x130);
      iVar4 = iVar3 + 1;
      if (iVar3 < *(int *)(this + 300)) {
        __dest = *(void **)(this + 0x110);
      }
      else {
        iVar1 = iVar4 * 2;
        __dest = operator_new__((long)iVar1);
        __src = *(XMLPrinter **)(this + 0x110);
        memcpy(__dest,__src,(long)iVar3);
        if ((__src != this + 0x118) && (__src != (XMLPrinter *)0x0)) {
          operator_delete__(__src);
          iVar3 = *(int *)(this + 0x130);
          iVar4 = iVar3 + 1;
        }
        *(void **)(this + 0x110) = __dest;
        *(int *)(this + 300) = iVar1;
      }
      *(int *)(this + 0x130) = iVar4;
      *(undefined2 *)((long)__dest + (long)iVar3 + -1) = 10;
    }
    else {
      fputc(10,*(FILE **)(this + 0x78));
    }
    (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)(this + 0x80));
  }
  this[0x70] = (XMLPrinter)0x0;
  Write(this,"<?",2);
  sVar2 = strlen(param_1);
  Write(this,param_1,sVar2);
  Write(this,"?>",2);
  return;
}


