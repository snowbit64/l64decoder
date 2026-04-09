// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushAttribute
// Entry Point: 00e02838
// Size: 124 bytes
// Signature: undefined __thiscall PushAttribute(XMLPrinter * this, char * param_1, int param_2)


/* tinyxml2::XMLPrinter::PushAttribute(char const*, int) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,int param_2)

{
  long lVar1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_100,200,200,&DAT_004c7f7a,param_2);
  PushAttribute(this,param_1,acStack_100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


