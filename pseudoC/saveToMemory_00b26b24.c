// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToMemory
// Entry Point: 00b26b24
// Size: 300 bytes
// Signature: undefined __thiscall saveToMemory(DomXMLFile * this, char * * param_1)


/* DomXMLFile::saveToMemory(char*&) */

void __thiscall DomXMLFile::saveToMemory(DomXMLFile *this,char **param_1)

{
  uint uVar1;
  undefined *__src;
  DomXMLFile DVar2;
  long lVar3;
  char *__dest;
  undefined **local_6c8;
  undefined **appuStack_6c0 [4];
  void *local_6a0;
  void *local_698;
  byte local_688;
  undefined auStack_687 [7];
  uint local_680;
  undefined *local_678;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_1 = (char *)0x0;
  DVar2 = this[8];
  if (DVar2 != (DomXMLFile)0x0) {
    local_6c8 = &PTR__TinyXMLPrinter_00fe91d8;
    XMLPrinter::XMLPrinter((XMLPrinter *)appuStack_6c0,false,0,false);
    local_70 = 1;
                    /* try { // try from 00b26ba0 to 00b26bc7 has its CatchHandler @ 00b26c50 */
    (**(code **)(**(long **)(this + 0x28) + 0x70))(*(long **)(this + 0x28),&local_6c8);
    uVar1 = (uint)(local_688 >> 1);
    if ((local_688 & 1) != 0) {
      uVar1 = local_680;
    }
    __dest = (char *)operator_new__((ulong)(uVar1 + 1));
    *param_1 = __dest;
    __src = local_678;
    if ((local_688 & 1) == 0) {
      __src = auStack_687;
    }
    memcpy(__dest,__src,(ulong)(uVar1 + 1));
    local_6c8 = &PTR__TinyXMLPrinter_00fe91d8;
    appuStack_6c0[0] = &PTR__XMLPrinter_00fe9260;
    if ((local_688 & 1) != 0) {
      operator_delete(local_678);
    }
    if (local_6a0 != (void *)0x0) {
      local_698 = local_6a0;
      operator_delete(local_6a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(DVar2 != (DomXMLFile)0x0);
}


