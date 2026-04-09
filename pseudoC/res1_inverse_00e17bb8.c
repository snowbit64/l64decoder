// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res1_inverse
// Entry Point: 00e17bb8
// Size: 104 bytes
// Signature: undefined res1_inverse(void)


undefined8
res1_inverse(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_5) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      if (*(int *)(param_4 + uVar2 * 4) != 0) {
        *(undefined8 *)(param_3 + (long)iVar1 * 8) = *(undefined8 *)(param_3 + uVar2 * 8);
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (param_5 != uVar2);
    if (iVar1 != 0) {
      FUN_00e16be0();
    }
  }
  return 0;
}


