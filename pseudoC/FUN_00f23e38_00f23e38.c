// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23e38
// Entry Point: 00f23e38
// Size: 120 bytes
// Signature: undefined FUN_00f23e38(void)


undefined8
FUN_00f23e38(undefined8 param_1,uint *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar4;
  ulong uVar3;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < (int)param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    uVar3 = (ulong)*param_3;
    uVar2 = (uint)uVar3;
    if (1 < param_6) {
      lVar4 = (ulong)(param_6 + 1) - 2;
      do {
        if (*(int *)((long)param_5 + 0xc) != 3) {
          return 0xffffffff;
        }
        lVar4 = lVar4 + -1;
        uVar2 = (uint)uVar3 & (uint)(long)*param_5;
        uVar3 = (ulong)uVar2;
        param_5 = param_5 + 2;
      } while (lVar4 != 0);
    }
    uVar1 = 1;
    param_2[3] = 1;
    *param_2 = (uint)(uVar2 != 0);
  }
  return uVar1;
}


