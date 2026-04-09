// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23cfc
// Entry Point: 00f23cfc
// Size: 76 bytes
// Signature: undefined FUN_00f23cfc(void)


undefined8
FUN_00f23cfc(undefined8 param_1,double *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(ulong)~(uint)(long)dVar2;
  }
  return uVar1;
}


