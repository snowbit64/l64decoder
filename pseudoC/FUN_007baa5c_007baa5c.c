// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007baa5c
// Entry Point: 007baa5c
// Size: 52 bytes
// Signature: undefined FUN_007baa5c(void)


void FUN_007baa5c(AnimalHusbandry *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = AnimalHusbandry::isEntityVisible(param_1,*param_2);
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar1 & 1;
  return;
}


