// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b87d8
// Entry Point: 007b87d8
// Size: 56 bytes
// Signature: undefined FUN_007b87d8(void)


void FUN_007b87d8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x14];
  *(undefined *)(param_1 + 0x59) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  return;
}


