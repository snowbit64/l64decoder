// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushText
// Entry Point: 00e0309c
// Size: 132 bytes
// Signature: undefined __thiscall PushText(XMLPrinter * this, float param_1)


/* tinyxml2::XMLPrinter::PushText(float) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,float param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec((double)param_1,acStack_f0,200,200,&DAT_004faf43);
  *(int *)(this + 0x84) = *(int *)(this + 0x80) + -1;
  SealElementIfJustOpened();
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


