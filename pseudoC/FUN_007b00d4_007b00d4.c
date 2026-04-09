// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b00d4
// Entry Point: 007b00d4
// Size: 68 bytes
// Signature: undefined FUN_007b00d4(void)


void FUN_007b00d4(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x40) = param_2[0xc];
    *(uint *)(lVar1 + 0x44) = param_2[0x10];
  }
  return;
}


