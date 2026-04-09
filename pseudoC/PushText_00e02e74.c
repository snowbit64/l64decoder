// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushText
// Entry Point: 00e02e74
// Size: 132 bytes
// Signature: undefined __thiscall PushText(XMLPrinter * this, ulong param_1)


/* tinyxml2::XMLPrinter::PushText(unsigned long) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,ulong param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_f0,200,200,&DAT_004fd003,param_1);
  *(int *)(this + 0x84) = *(int *)(this + 0x80) + -1;
  SealElementIfJustOpened();
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


