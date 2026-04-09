// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23f68
// Entry Point: 00f23f68
// Size: 100 bytes
// Signature: undefined FUN_00f23f68(void)


undefined8
FUN_00f23f68(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    if ((*(int *)((long)param_3 + 0xc) != 3) || (*(int *)((long)param_5 + 0xc) != 3)) {
      return 0xffffffff;
    }
    dVar2 = *param_5;
    uVar1 = 1;
    dVar3 = *param_3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    *param_2 = (double)(ulong)((uint)(long)dVar3 >> (-(int)dVar2 & 0x1fU) |
                              (uint)(long)dVar3 << 0x20 - (-(int)dVar2 & 0x1fU));
  }
  return uVar1;
}


