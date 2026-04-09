// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8e14
// Entry Point: 007a8e14
// Size: 44 bytes
// Signature: undefined FUN_007a8e14(void)


void FUN_007a8e14(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x170);
  uVar1 = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_1 + 0x178);
  return;
}


