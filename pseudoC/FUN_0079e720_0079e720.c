// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e720
// Entry Point: 0079e720
// Size: 116 bytes
// Signature: undefined FUN_0079e720(void)


void FUN_0079e720(long param_1,char **param_2)

{
  long lVar1;
  undefined4 uVar2;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = false;
  uVar2 = Properties::getInt((Properties *)(param_1 + 0x20),*param_2,local_2c);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(undefined4 *)(param_2 + 0x21) = 1;
  if (local_2c[0] == false) {
    param_2[0x20] = (char *)0x0;
    *(undefined4 *)(param_2 + 0x21) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


