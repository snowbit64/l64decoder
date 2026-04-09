// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079eaec
// Entry Point: 0079eaec
// Size: 60 bytes
// Signature: undefined FUN_0079eaec(void)


void FUN_0079eaec(long param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)(param_1 + 0x20) + 0x28))((long *)(param_1 + 0x20),*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


