// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushText
// Entry Point: 00e03120
// Size: 128 bytes
// Signature: undefined __cdecl PushText(double param_1)


/* tinyxml2::XMLPrinter::PushText(double) */

void tinyxml2::XMLPrinter::PushText(double param_1)

{
  long lVar1;
  XMLPrinter *in_x0;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_f0,200,200,"%.17g");
  *(int *)(in_x0 + 0x84) = *(int *)(in_x0 + 0x80) + -1;
  SealElementIfJustOpened();
  PrintString(in_x0,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


