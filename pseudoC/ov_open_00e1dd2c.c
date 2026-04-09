// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_open
// Entry Point: 00e1dd2c
// Size: 104 bytes
// Signature: undefined ov_open(void)


void ov_open(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e1d970();
  if (iVar2 == 0) {
    FUN_00e1db58(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


