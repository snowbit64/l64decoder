// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ebc4
// Entry Point: 0079ebc4
// Size: 56 bytes
// Signature: undefined FUN_0079ebc4(void)


void FUN_0079ebc4(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 0x30))();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


