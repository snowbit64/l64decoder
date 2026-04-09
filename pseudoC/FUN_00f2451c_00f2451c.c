// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2451c
// Entry Point: 00f2451c
// Size: 220 bytes
// Signature: undefined FUN_00f2451c(void)


undefined8
FUN_00f2451c(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 5)) {
    if ((*(int *)((long)param_5 + 0xc) != 3) || (*(int *)((long)param_5 + 0x1c) != 3)) {
      return 0xffffffff;
    }
    iVar2 = (int)*param_5;
    if (0 < iVar2) {
      iVar3 = (int)param_5[2];
      if (iVar2 <= iVar3) {
        if (*(uint *)(*param_3 + 0x14) <= iVar3 - 1U) {
          return 0xffffffff;
        }
        uVar1 = FUN_00f128c0(param_1,*param_3 + (ulong)(iVar2 - 1) + 0x18,
                             (long)((iVar3 - iVar2) + 1));
        *param_2 = uVar1;
        *(undefined4 *)((long)param_2 + 0xc) = 5;
        return 1;
      }
    }
  }
  return 0xffffffff;
}


