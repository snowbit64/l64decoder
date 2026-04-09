// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24670
// Entry Point: 00f24670
// Size: 84 bytes
// Signature: undefined FUN_00f24670(void)


undefined8
FUN_00f24670(undefined8 param_1,undefined8 *param_2,double *param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 3) {
      return 0xffffffff;
    }
    dVar2 = *param_3;
    uVar1 = 1;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    uVar3 = 0xbff0000000000000;
    if (0.0 <= dVar2) {
      uVar3 = 0;
    }
    uVar4 = 0x3ff0000000000000;
    if (dVar2 <= 0.0) {
      uVar4 = uVar3;
    }
    *param_2 = uVar4;
  }
  return uVar1;
}


