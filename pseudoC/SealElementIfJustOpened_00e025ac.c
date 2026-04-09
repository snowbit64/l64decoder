// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SealElementIfJustOpened
// Entry Point: 00e025ac
// Size: 220 bytes
// Signature: undefined SealElementIfJustOpened(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLPrinter::SealElementIfJustOpened() */

void * tinyxml2::XMLPrinter::SealElementIfJustOpened(void)

{
  int iVar1;
  uint uVar2;
  void *in_x0;
  void *pvVar3;
  void *__dest;
  void *__src;
  int iVar4;
  int iVar5;
  
  pvVar3 = in_x0;
  if (*(char *)((long)in_x0 + 8) != '\0') {
    *(undefined *)((long)in_x0 + 8) = 0;
    if (*(FILE **)((long)in_x0 + 0x78) != (FILE *)0x0) {
      uVar2 = fputc(0x3e,*(FILE **)((long)in_x0 + 0x78));
      return (void *)(ulong)uVar2;
    }
    iVar4 = *(int *)((long)in_x0 + 0x130);
    iVar5 = iVar4 + 1;
    if (iVar4 < *(int *)((long)in_x0 + 300)) {
      __dest = *(void **)((long)in_x0 + 0x110);
    }
    else {
      iVar1 = iVar5 * 2;
      __dest = operator_new__((long)iVar1);
      __src = *(void **)((long)in_x0 + 0x110);
      pvVar3 = memcpy(__dest,__src,(long)iVar4);
      if ((__src != (void *)((long)in_x0 + 0x118)) && (__src != (void *)0x0)) {
        operator_delete__(__src);
        iVar4 = *(int *)((long)in_x0 + 0x130);
        iVar5 = iVar4 + 1;
        pvVar3 = __src;
      }
      *(void **)((long)in_x0 + 0x110) = __dest;
      *(int *)((long)in_x0 + 300) = iVar1;
    }
    *(int *)((long)in_x0 + 0x130) = iVar5;
    *(undefined2 *)((long)__dest + (long)iVar4 + -1) = 0x3e;
  }
  return pvVar3;
}


