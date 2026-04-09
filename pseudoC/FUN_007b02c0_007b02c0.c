// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b02c0
// Entry Point: 007b02c0
// Size: 76 bytes
// Signature: undefined FUN_007b02c0(void)


void FUN_007b02c0(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x24) = param_2[0x14];
    *(uint *)(lVar1 + 0x28) = param_2[0x18];
  }
  return;
}


