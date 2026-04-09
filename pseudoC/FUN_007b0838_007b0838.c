// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0838
// Entry Point: 007b0838
// Size: 80 bytes
// Signature: undefined FUN_007b0838(void)


void FUN_007b0838(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    uVar2 = 4;
    param_2[0x40] = *(uint *)(lVar1 + 0x48);
  }
  param_2[0x42] = uVar2;
  return;
}


