// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24034
// Entry Point: 00f24034
// Size: 220 bytes
// Signature: undefined FUN_00f24034(void)


undefined8
FUN_00f24034(undefined8 param_1,double *param_2,double *param_3,int param_4,double *param_5,
            int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  
  if (1 < param_4) {
    return 0xffffffff;
  }
  if (param_6 < 3) {
    return 0xffffffff;
  }
  if (((*(int *)((long)param_3 + 0xc) != 3) || (*(int *)((long)param_5 + 0xc) != 3)) ||
     (*(int *)((long)param_5 + 0x1c) != 3)) {
    return 0xffffffff;
  }
  dVar5 = *param_3;
  uVar1 = (uint)param_5[2];
  if (param_6 == 3) {
    if (0x1f < uVar1) {
      return 0xffffffff;
    }
    uVar2 = (uint)(long)*param_5 & 1;
    uVar3 = 1;
  }
  else {
    if (*(int *)((long)param_5 + 0x2c) != 3) {
      return 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
    iVar4 = (int)param_5[4];
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    if (0x20 < (int)(iVar4 + uVar1)) {
      return 0xffffffff;
    }
    uVar2 = -2 << (ulong)(iVar4 - 1U & 0x1f);
    uVar3 = ~uVar2;
    uVar2 = (uint)(long)*param_5 & (uVar2 ^ 0xffffffff);
  }
  *(undefined4 *)((long)param_2 + 0xc) = 3;
  *param_2 = (double)(ulong)((uint)(long)dVar5 & (uVar3 << (ulong)(uVar1 & 0x1f) ^ 0xffffffff) |
                            uVar2 << (ulong)(uVar1 & 0x1f));
  return 1;
}


