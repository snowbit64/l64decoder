// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd118
// Entry Point: 007bd118
// Size: 40 bytes
// Signature: undefined FUN_007bd118(void)


void FUN_007bd118(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x108) = 1;
  iVar2 = (uint)(iVar1 == 0) << 1;
  if (iVar1 == -1) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 0x100) = iVar2;
  return;
}


