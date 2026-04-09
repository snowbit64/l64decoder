// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65e6c
// Entry Point: 00d65e6c
// Size: 68 bytes
// Signature: undefined FUN_00d65e6c(void)


void FUN_00d65e6c(undefined8 *param_1,int param_2)

{
  long lVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    return;
  }
  lVar1 = param_1[0x3d];
  *(undefined *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(int *)(lVar1 + 0x1c) = param_2;
  if (param_2 != 0) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d65e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar2)();
    return;
  }
  *(code **)(lVar1 + 8) = FUN_00d65eb0;
  return;
}


