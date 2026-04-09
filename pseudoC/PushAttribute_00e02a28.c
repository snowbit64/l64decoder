// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PushAttribute
// Entry Point: 00e02a28
// Size: 148 bytes
// Signature: undefined __thiscall PushAttribute(XMLPrinter * this, char * param_1, bool param_2)


/* tinyxml2::XMLPrinter::PushAttribute(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,bool param_2)

{
  undefined **ppuVar1;
  long lVar2;
  char acStack_100 [200];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ppuVar1 = &XMLUtil::writeBoolTrue;
  if (!param_2) {
    ppuVar1 = &XMLUtil::writeBoolFalse;
  }
  FUN_00dfa4ec(acStack_100,200,200,&DAT_004d33bb,*ppuVar1);
  PushAttribute(this,param_1,acStack_100);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


