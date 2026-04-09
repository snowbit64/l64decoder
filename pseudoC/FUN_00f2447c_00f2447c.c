// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2447c
// Entry Point: 00f2447c
// Size: 76 bytes
// Signature: undefined FUN_00f2447c(void)


undefined8
FUN_00f2447c(undefined8 param_1,double *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 5) {
      return 0xffffffff;
    }
    uVar1 = 1;
    iVar2 = *(int *)(*param_3 + 0x14);
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(long)iVar2;
  }
  return uVar1;
}


