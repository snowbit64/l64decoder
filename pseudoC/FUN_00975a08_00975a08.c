// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00975a08
// Entry Point: 00975a08
// Size: 228 bytes
// Signature: undefined FUN_00975a08(void)


undefined8 FUN_00975a08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_009758e8(param_2,param_1);
  uVar2 = FUN_009758e8(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = FUN_009758e8(param_2,param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      *param_1 = *param_3;
      *param_3 = uVar3;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar3;
    uVar1 = FUN_009758e8(param_3,param_2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      return 2;
    }
  }
  return 1;
}


