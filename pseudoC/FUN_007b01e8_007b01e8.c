// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b01e8
// Entry Point: 007b01e8
// Size: 76 bytes
// Signature: undefined FUN_007b01e8(void)


void FUN_007b01e8(FoliageSystemDesc *param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FoliageSystemDesc::getLod
                             (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true
                             );
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2[0x14];
    puVar1[1] = param_2[0x18];
  }
  return;
}


