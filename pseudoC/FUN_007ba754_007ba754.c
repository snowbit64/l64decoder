// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba754
// Entry Point: 007ba754
// Size: 48 bytes
// Signature: undefined FUN_007ba754(void)


void FUN_007ba754(AnimalHusbandry *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = AnimalHusbandry::addAnimal(param_1,*param_2);
  param_2[0x40] = uVar1;
  param_2[0x42] = 1;
  return;
}


