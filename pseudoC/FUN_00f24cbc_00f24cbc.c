// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24cbc
// Entry Point: 00f24cbc
// Size: 128 bytes
// Signature: undefined FUN_00f24cbc(void)


undefined8
FUN_00f24cbc(undefined8 param_1,double *param_2,long *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) == 5) {
      dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(*param_3 + 0x14));
    }
    else {
      if (*(int *)((long)param_3 + 0xc) != 6) {
        return 0xffffffff;
      }
      iVar1 = FUN_00f17aac(*param_3);
      dVar3 = (double)iVar1;
    }
    uVar2 = 1;
    *param_2 = dVar3;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
  }
  return uVar2;
}


