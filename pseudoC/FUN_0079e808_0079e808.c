// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e808
// Entry Point: 0079e808
// Size: 120 bytes
// Signature: undefined FUN_0079e808(void)


void FUN_0079e808(long param_1,char **param_2)

{
  long lVar1;
  byte bVar2;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = false;
  bVar2 = Properties::getBool((Properties *)(param_1 + 0x20),*param_2,local_2c);
  *(byte *)(param_2 + 0x20) = bVar2 & 1;
  *(undefined4 *)(param_2 + 0x21) = 3;
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


