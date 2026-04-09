// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2818c
// Entry Point: 00f2818c
// Size: 284 bytes
// Signature: undefined FUN_00f2818c(void)


void FUN_00f2818c(long param_1,uint param_2,undefined8 param_3)

{
  switch(param_2) {
  case 0x1d:
    *(undefined8 *)(param_1 + 0xf8) = param_3;
    return;
  case 0x1e:
    *(undefined8 *)(param_1 + 0x100) = param_3;
    return;
  case 0x22:
    *(undefined8 *)(param_1 + 0x118) = param_3;
    return;
  case 0xfffffffe:
  case 0x1f:
    *(undefined8 *)(param_1 + 0x108) = param_3;
    return;
  case 0xffffffff:
  case 0x20:
    *(undefined8 *)(param_1 + 0x110) = param_3;
    return;
  }
  if (param_2 < 0x1d) {
    *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10) = param_3;
    return;
  }
  fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","setRegister","unsupported arm64 register");
  fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
  abort();
}


