// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcd98
// Entry Point: 007bcd98
// Size: 72 bytes
// Signature: undefined FUN_007bcd98(void)


void FUN_007bcd98(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x118) = 1;
  *(undefined4 *)(param_2 + 0x128) = 1;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x138) = 1;
  *(undefined4 *)(param_2 + 0x148) = 3;
  *(undefined4 *)(param_2 + 0x120) = uVar1;
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x30);
  *(undefined *)(param_2 + 0x140) = *(undefined *)(param_1 + 0x28);
  return;
}


