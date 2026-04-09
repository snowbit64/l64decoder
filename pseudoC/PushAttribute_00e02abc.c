// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushAttribute
// Entry Point: 00e02abc
// Size: 120 bytes
// Signature: undefined __cdecl PushAttribute(char * param_1, double param_2)


/* tinyxml2::XMLPrinter::PushAttribute(char const*, double) */

void tinyxml2::XMLPrinter::PushAttribute(char *param_1,double param_2)

{
  long lVar1;
  char *in_x1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_100,200,200,"%.17g");
  PushAttribute((XMLPrinter *)param_1,in_x1,acStack_100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


