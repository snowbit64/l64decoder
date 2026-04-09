// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23d48
// Entry Point: 00f23d48
// Size: 120 bytes
// Signature: undefined FUN_00f23d48(void)


undefined8
FUN_00f23d48(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < (int)param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    uVar2 = (ulong)*param_3;
    if (1 < param_6) {
      lVar3 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + -1;
        uVar2 = (ulong)((uint)uVar2 | (uint)(long)*param_5);
        param_5 = param_5 + 2;
      } while (lVar3 != 0);
    }
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(uVar2 & 0xffffffff);
  }
  return uVar1;
}


