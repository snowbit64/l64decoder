// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcbe4
// Entry Point: 007bcbe4
// Size: 84 bytes
// Signature: undefined FUN_007bcbe4(void)


void FUN_007bcbe4(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  lVar2 = **(long **)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x108) = 1;
  uVar1 = (**(code **)(lVar2 + 0x50))();
  *(undefined4 *)(param_2 + 0x118) = 1;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  return;
}


