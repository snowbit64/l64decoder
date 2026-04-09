// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bd58
// Entry Point: 00f0bd58
// Size: 76 bytes
// Signature: undefined FUN_00f0bd58(void)


long FUN_00f0bd58(long param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    lVar1 = *(long *)(param_1 + 0x30);
    do {
      if ((*(int *)(lVar1 + 8) <= param_3) && (param_3 < *(int *)(lVar1 + 0xc))) {
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return lVar1;
        }
      }
      lVar1 = lVar1 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}


