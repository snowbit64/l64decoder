// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f90c
// Entry Point: 0078f90c
// Size: 104 bytes
// Signature: undefined FUN_0078f90c(void)


void FUN_0078f90c(long param_1)

{
  long lVar1;
  byte bVar2;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  bVar2 = AndroidImeUtil::isImeComplete(local_2c);
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(bool *)(param_1 + 0x110) = local_2c[0];
  *(undefined4 *)(param_1 + 0x118) = 3;
  *(byte *)(param_1 + 0x100) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


