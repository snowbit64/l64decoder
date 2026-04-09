// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24b00
// Entry Point: 00f24b00
// Size: 116 bytes
// Signature: undefined FUN_00f24b00(void)


undefined8
FUN_00f24b00(undefined8 param_1,float *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (2 < param_6)) {
    if ((*(int *)((long)param_3 + 0xc) != 3) ||
       ((*(int *)((long)param_5 + 0xc) != 3 || (*(int *)((long)param_5 + 0x1c) != 3)))) {
      return 0xffffffff;
    }
    dVar2 = *param_3;
    dVar3 = *param_5;
    uVar1 = 1;
    dVar4 = param_5[2];
    param_2[3] = 5.605194e-45;
    *param_2 = (float)dVar2;
    param_2[1] = (float)dVar3;
    param_2[2] = (float)dVar4;
  }
  return uVar1;
}


