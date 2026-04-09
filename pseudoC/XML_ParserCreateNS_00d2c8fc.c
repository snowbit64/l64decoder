// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ParserCreateNS
// Entry Point: 00d2c8fc
// Size: 84 bytes
// Signature: undefined XML_ParserCreateNS(void)


void XML_ParserCreateNS(undefined8 param_1,undefined param_2)

{
  long lVar1;
  undefined local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_2;
  FUN_00d2c950(param_1,0,local_2c,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


