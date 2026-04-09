// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b027c
// Entry Point: 007b027c
// Size: 68 bytes
// Signature: undefined FUN_007b027c(void)


void FUN_007b027c(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x20) = param_2[0x14];
  }
  return;
}


