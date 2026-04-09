// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcdf8
// Entry Point: 007bcdf8
// Size: 40 bytes
// Signature: undefined FUN_007bcdf8(void)


void FUN_007bcdf8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x118) = 1;
  *(int *)(param_2 + 0x100) = iVar1 - iVar2;
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


