// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9a54
// Entry Point: 007b9a54
// Size: 52 bytes
// Signature: undefined FUN_007b9a54(void)


void FUN_007b9a54(VehicleNavigationMapGenerator *param_1,char **param_2)

{
  byte bVar1;
  
  bVar1 = VehicleNavigationMapGenerator::loadCostMap(param_1,*param_2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  return;
}


