// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f241d8
// Entry Point: 00f241d8
// Size: 60 bytes
// Signature: undefined FUN_00f241d8(void)


undefined8
FUN_00f241d8(long param_1,undefined8 *param_2,long param_3,int param_4,undefined8 param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    uVar1 = 1;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_3 + 0xc) * 8 + 0xaf0);
    *(undefined4 *)((long)param_2 + 0xc) = 5;
    *param_2 = uVar2;
  }
  return uVar1;
}


