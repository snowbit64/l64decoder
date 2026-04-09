// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f245f8
// Entry Point: 00f245f8
// Size: 120 bytes
// Signature: undefined FUN_00f245f8(void)


undefined8
FUN_00f245f8(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((param_4 < 2) && (2 < param_6)) {
    if ((*(int *)((long)param_3 + 0xc) == 3) &&
       ((*(int *)((long)param_5 + 0xc) == 3 && (*(int *)((long)param_5 + 0x1c) == 3)))) {
      dVar2 = *param_5;
      dVar1 = param_5[2];
      if (dVar2 <= dVar1) {
        dVar3 = *param_3;
        *(undefined4 *)((long)param_2 + 0xc) = 3;
        if (dVar2 <= dVar3) {
          dVar2 = dVar3;
        }
        if (dVar2 <= dVar1) {
          dVar1 = dVar2;
        }
        *param_2 = dVar1;
        return 1;
      }
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


