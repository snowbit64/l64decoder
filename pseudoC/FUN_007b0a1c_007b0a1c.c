// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0a1c
// Entry Point: 007b0a1c
// Size: 88 bytes
// Signature: undefined FUN_007b0a1c(void)


void FUN_007b0a1c(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    param_2[0x40] = *(uint *)(lVar1 + 0x20);
  }
  param_2[0x42] = (uint)(lVar1 != 0);
  return;
}


