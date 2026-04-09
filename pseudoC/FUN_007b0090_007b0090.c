// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0090
// Entry Point: 007b0090
// Size: 68 bytes
// Signature: undefined FUN_007b0090(void)


void FUN_007b0090(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x38) = param_2[0xc];
    *(uint *)(lVar1 + 0x3c) = param_2[0x10];
  }
  return;
}


