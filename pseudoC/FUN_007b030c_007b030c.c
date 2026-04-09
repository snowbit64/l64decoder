// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b030c
// Entry Point: 007b030c
// Size: 92 bytes
// Signature: undefined FUN_007b030c(void)


void FUN_007b030c(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x2c) = param_2[0x14];
    *(uint *)(lVar1 + 0x30) = param_2[0x18];
    *(uint *)(lVar1 + 0x34) = param_2[0x1c];
    *(uint *)(lVar1 + 0x38) = param_2[0x20];
  }
  return;
}


