// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b86e8
// Entry Point: 007b86e8
// Size: 60 bytes
// Signature: undefined FUN_007b86e8(void)


void FUN_007b86e8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x14];
  *(undefined *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  return;
}


