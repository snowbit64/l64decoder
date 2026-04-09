// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24d3c
// Entry Point: 00f24d3c
// Size: 100 bytes
// Signature: undefined FUN_00f24d3c(void)


undefined8
FUN_00f24d3c(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    dVar2 = *param_5;
    dVar3 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(ulong)((uint)(long)dVar3 >> (ulong)((int)dVar2 & 0x1f) &
                              (-2 << (ulong)((int)dVar2 >> 5 & 0x1f) ^ 0xffffffffU));
  }
  return uVar1;
}


