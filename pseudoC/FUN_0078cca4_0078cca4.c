// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cca4
// Entry Point: 0078cca4
// Size: 108 bytes
// Signature: undefined FUN_0078cca4(void)


void FUN_0078cca4(char **param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  uVar2 = StringUtil::utf8ToUnicode(*param_1,&local_2c);
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(uint *)(param_1 + 0x20) = local_2c;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined4 *)(param_1 + 0x23) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


