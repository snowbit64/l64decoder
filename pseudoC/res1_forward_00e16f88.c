// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res1_forward
// Entry Point: 00e16f88
// Size: 108 bytes
// Signature: undefined res1_forward(void)


undefined8
res1_forward(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            uint param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_6) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(param_5 + uVar2 * 4) != 0) {
        *(undefined8 *)(param_4 + (long)iVar1 * 8) = *(undefined8 *)(param_4 + uVar2 * 8);
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (param_6 != uVar2);
    if (iVar1 != 0) {
      FUN_00e16ff4(param_1,param_3,param_4,iVar1,param_7);
    }
  }
  return 0;
}


