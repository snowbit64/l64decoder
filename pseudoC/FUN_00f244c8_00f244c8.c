// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f244c8
// Entry Point: 00f244c8
// Size: 84 bytes
// Signature: undefined FUN_00f244c8(void)


undefined8
FUN_00f244c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    uVar2 = FUN_00f19868(param_1,param_3);
    uVar1 = 1;
    *param_2 = uVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 5;
  }
  return uVar1;
}


