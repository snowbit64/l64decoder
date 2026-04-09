// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23eb0
// Entry Point: 00f23eb0
// Size: 184 bytes
// Signature: undefined FUN_00f23eb0(void)


undefined8
FUN_00f23eb0(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  if (1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 2) {
    return 0xffffffff;
  }
  if ((*(int *)((long)param_3 + 0xc) != 3) || (*(int *)((long)param_5 + 0xc) != 3)) {
    return 0xffffffff;
  }
  dVar4 = *param_3;
  uVar1 = (uint)*param_5;
  if (param_6 == 2) {
    if (0x1f < uVar1) {
      return 0xffffffff;
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)((long)param_5 + 0x1c) != 3) {
      return 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
    iVar3 = (int)param_5[2];
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    if (0x20 < (int)(iVar3 + uVar1)) {
      return 0xffffffff;
    }
    uVar2 = ~(-2 << (ulong)(iVar3 - 1U & 0x1f));
  }
  *(undefined4 *)((long)param_2 + 0xc) = 3;
  *param_2 = (double)(ulong)((uint)(long)dVar4 >> (ulong)(uVar1 & 0x1f) & uVar2);
  return 1;
}


