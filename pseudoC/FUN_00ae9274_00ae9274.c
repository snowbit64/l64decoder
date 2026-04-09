// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ae9274
// Entry Point: 00ae9274
// Size: 192 bytes
// Signature: undefined FUN_00ae9274(void)


void FUN_00ae9274(ulong *param_1)

{
  long lVar1;
  size_t __n;
  undefined *__dest;
  ulong uVar2;
  char acStack_44 [12];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00aefae8(acStack_44);
  __n = strlen(acStack_44);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00ae9300;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,acStack_44,__n);
LAB_00ae9300:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


