// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bd30
// Entry Point: 00f0bd30
// Size: 40 bytes
// Signature: undefined FUN_00f0bd30(void)


void FUN_00f0bd30(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (*(char *)(param_2 + 3) != '\0') {
    lVar1 = 0x30;
  }
  FUN_00f10568(param_1,param_2,lVar1 + (ulong)*(byte *)(param_2 + 4) * 0x10,
               *(undefined *)(param_2 + 2),param_3);
  return;
}


