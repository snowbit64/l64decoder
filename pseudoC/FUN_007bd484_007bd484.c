// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd484
// Entry Point: 007bd484
// Size: 40 bytes
// Signature: undefined FUN_007bd484(void)


void FUN_007bd484(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4d08);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x4d0c);
  return;
}


