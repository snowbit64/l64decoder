// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cbd8
// Entry Point: 0078cbd8
// Size: 124 bytes
// Signature: undefined FUN_0078cbd8(void)


void FUN_0078cbd8(char **param_1)

{
  long lVar1;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (char *)0x0;
  StringUtil::convertAsciiToUtf8(*param_1,&local_30,false);
  if (local_30 != (char *)0x0) {
    param_1[0x20] = local_30;
    *(undefined4 *)(param_1 + 0x21) = 6;
    *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


