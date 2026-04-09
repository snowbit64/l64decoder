// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0118
// Entry Point: 007b0118
// Size: 60 bytes
// Signature: undefined FUN_007b0118(void)


void FUN_007b0118(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x48) = param_2[0xc];
  }
  return;
}


