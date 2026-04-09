// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cd54a8
// Entry Point: 00cd54a8
// Size: 128 bytes
// Signature: undefined FUN_00cd54a8(void)


void FUN_00cd54a8(void **param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = (void **)*param_1;
  if (ppvVar1 == (void **)0x0) {
    return;
  }
  ppvVar2 = (void **)param_1[1];
  if (ppvVar2 == ppvVar1) {
    param_1[1] = ppvVar1;
    operator_delete(ppvVar1);
    return;
  }
  do {
    ppvVar2 = ppvVar2 + -3;
    if (*ppvVar2 != (void *)0x0) {
      operator_delete(*ppvVar2);
    }
  } while (ppvVar2 != ppvVar1);
  param_1[1] = ppvVar1;
  operator_delete(*param_1);
  return;
}


