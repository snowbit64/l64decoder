// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27b60
// Entry Point: 00f27b60
// Size: 64 bytes
// Signature: undefined FUN_00f27b60(void)


undefined4 FUN_00f27b60(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


