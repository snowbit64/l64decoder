// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8814
// Entry Point: 007b8814
// Size: 56 bytes
// Signature: undefined FUN_007b8814(void)


void FUN_007b8814(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x14];
  *(undefined *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  return;
}


