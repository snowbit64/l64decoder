// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23660
// Entry Point: 00f23660
// Size: 120 bytes
// Signature: undefined FUN_00f23660(void)


undefined8
FUN_00f23660(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    if ((*(int *)((long)param_3 + 0xc) != 3) || (*(int *)((long)param_5 + 0xc) != 3)) {
      return 0xffffffff;
    }
    dVar2 = ldexp(*param_3,(int)*param_5);
    uVar1 = 1;
    *param_2 = dVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar1;
}


