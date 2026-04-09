// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afdc4
// Entry Point: 007afdc4
// Size: 60 bytes
// Signature: undefined FUN_007afdc4(void)


void FUN_007afdc4(FoliageSystemDesc *param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = FoliageSystemDesc::loadFruitTypeFromXml
                    (param_1,*param_2,*(char **)(param_2 + 4),*(char **)(param_2 + 8));
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar1 & 1;
  return;
}


