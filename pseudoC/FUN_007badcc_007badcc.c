// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007badcc
// Entry Point: 007badcc
// Size: 64 bytes
// Signature: undefined FUN_007badcc(void)


void FUN_007badcc(AnimalHusbandry *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = AnimalHusbandry::getAnimalRootNode(param_1,*param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x18);
  }
  param_2[0x40] = uVar2;
  param_2[0x42] = 1;
  return;
}


