// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ce4c
// Entry Point: 0078ce4c
// Size: 132 bytes
// Signature: undefined FUN_0078ce4c(void)


void FUN_0078ce4c(uchar **param_1)

{
  long lVar1;
  uchar *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  StringUtil::base64Encode
            (*param_1,(uint)(*(uint3 *)((long)param_1 + 0xc) >> 1),false,(char **)&local_30);
  param_1[0x20] = local_30;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


