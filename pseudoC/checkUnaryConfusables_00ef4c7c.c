// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkUnaryConfusables
// Entry Point: 00ef4c7c
// Size: 112 bytes
// Signature: undefined checkUnaryConfusables(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::checkUnaryConfusables() */

void Luau::Parser::checkUnaryConfusables(void)

{
  long lVar1;
  Location *in_x0;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x28) == 0x21) {
    uStack_38 = *(undefined8 *)(in_x0 + 0x34);
    local_40 = *(undefined8 *)(in_x0 + 0x2c);
    report(in_x0,(char *)&local_40,"Unexpected \'!\', did you mean \'not\'?");
    uVar2 = 0x100000000;
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


