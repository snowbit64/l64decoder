// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToFile
// Entry Point: 00b26960
// Size: 332 bytes
// Signature: undefined __thiscall saveToFile(DomXMLFile * this, char * param_1)


/* DomXMLFile::saveToFile(char const*) */

void __thiscall DomXMLFile::saveToFile(DomXMLFile *this,char *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_6b8;
  undefined **appuStack_6b0 [4];
  void *local_690;
  void *local_688;
  byte local_678;
  undefined auStack_677 [7];
  uint local_670;
  undefined *local_668;
  undefined local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (this[8] == (DomXMLFile)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                      false);
    if (plVar4 != (long *)0x0) {
      local_6b8 = &PTR__TinyXMLPrinter_00fe91d8;
      XMLPrinter::XMLPrinter((XMLPrinter *)appuStack_6b0,false,0,(bool)this[0x30]);
      local_60 = 1;
                    /* try { // try from 00b269ec to 00b269f3 has its CatchHandler @ 00b26ab0 */
      (**(code **)(**(long **)(this + 0x28) + 0x70))(*(long **)(this + 0x28),&local_6b8);
      uVar1 = (uint)(local_678 >> 1);
      if ((local_678 & 1) != 0) {
        uVar1 = local_670;
      }
      if (uVar1 != 0) {
        puVar2 = local_668;
        if ((local_678 & 1) == 0) {
          puVar2 = auStack_677;
        }
                    /* try { // try from 00b26a24 to 00b26a2b has its CatchHandler @ 00b26aac */
        (**(code **)(*plVar4 + 0x30))(plVar4,puVar2);
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      local_6b8 = &PTR__TinyXMLPrinter_00fe91d8;
      appuStack_6b0[0] = &PTR__XMLPrinter_00fe9260;
      if ((local_678 & 1) != 0) {
        operator_delete(local_668);
      }
      if (local_690 != (void *)0x0) {
        local_688 = local_690;
        operator_delete(local_690);
      }
      plVar4 = (long *)0x1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


