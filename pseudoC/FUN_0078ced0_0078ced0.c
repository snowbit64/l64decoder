// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ced0
// Entry Point: 0078ced0
// Size: 132 bytes
// Signature: undefined FUN_0078ced0(void)


void FUN_0078ced0(char **param_1)

{
  long lVar1;
  uint local_34;
  uchar *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  StringUtil::base64Decode(*param_1,false,&local_30,&local_34);
  param_1[0x20] = (char *)local_30;
  *(undefined4 *)(param_1 + 0x21) = 10;
  *(char *)((long)param_1 + 0x10e) = (char)(local_34 >> 0xf);
  *(ushort *)((long)param_1 + 0x10c) = (ushort)(local_34 << 1) | 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


