// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24824
// Entry Point: 00f24824
// Size: 100 bytes
// Signature: undefined FUN_00f24824(void)


undefined8
FUN_00f24824(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    if (*(int *)((long)param_3 + 0xc) != 6) {
      return 0xffffffff;
    }
    puVar2 = (undefined8 *)FUN_00f171e0(*param_3,param_5);
    uVar3 = *puVar2;
    uVar1 = 1;
    param_2[1] = puVar2[1];
    *param_2 = uVar3;
  }
  return uVar1;
}


