// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2373c
// Entry Point: 00f2373c
// Size: 220 bytes
// Signature: undefined FUN_00f2373c(void)


undefined8
FUN_00f2373c(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  double dVar1;
  double dVar2;
  double __x;
  
  if (((param_4 < 2) && (0 < param_6)) && (*(int *)((long)param_3 + 0xc) == 3)) {
    dVar1 = *param_3;
    if (param_6 == 1) {
      dVar2 = log(dVar1);
    }
    else {
      if (*(int *)((long)param_5 + 0xc) != 3) {
        return 0xffffffff;
      }
      __x = *param_5;
      if (__x == 2.0) {
        dVar2 = log2(dVar1);
      }
      else if (__x == 10.0) {
        dVar2 = log10(dVar1);
      }
      else {
        dVar2 = log(dVar1);
        dVar1 = log(__x);
        dVar2 = dVar2 / dVar1;
      }
    }
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    return 1;
  }
  return 0xffffffff;
}


