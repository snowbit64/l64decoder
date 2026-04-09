// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b093c
// Entry Point: 007b093c
// Size: 104 bytes
// Signature: undefined FUN_007b093c(void)


void FUN_007b093c(FoliageSystemDesc *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FoliageSystemDesc::getLod
                             (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true
                             );
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = *puVar1;
    param_2[0x44] = puVar1[1];
  }
  param_2[0x42] = uVar2;
  param_2[0x46] = uVar2;
  return;
}


