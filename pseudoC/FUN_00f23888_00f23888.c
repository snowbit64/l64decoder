// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23888
// Entry Point: 00f23888
// Size: 112 bytes
// Signature: undefined FUN_00f23888(void)


undefined8
FUN_00f23888(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < (int)param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    dVar3 = *param_3;
    if (1 < param_6) {
      lVar2 = (ulong)(param_6 + 1) - 2;
      dVar4 = dVar3;
      do {
        if (*(int *)((long)param_5 + 0xc) != 3) {
          return 0xffffffff;
        }
        dVar3 = *param_5;
        if (dVar4 <= *param_5) {
          dVar3 = dVar4;
        }
        lVar2 = lVar2 + -1;
        param_5 = param_5 + 2;
        dVar4 = dVar3;
      } while (lVar2 != 0);
    }
    uVar1 = 1;
    *param_2 = dVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


