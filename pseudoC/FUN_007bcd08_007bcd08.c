// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcd08
// Entry Point: 007bcd08
// Size: 88 bytes
// Signature: undefined FUN_007bcd08(void)


void FUN_007bcd08(DensityMapFilterLua *param_1,MethodInvocation *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 1:
  case 2:
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    break;
  case 4:
    *(int *)(param_1 + 0x14) = (int)*(float *)(param_2 + 0x10);
    DensityMapFilterLua::setTypeIndexCompareMode(param_1,param_2);
    return;
  case 5:
    *(int *)(param_1 + 0x14) = (int)*(double *)(param_2 + 0x10);
    DensityMapFilterLua::setTypeIndexCompareMode(param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  DensityMapFilterLua::setTypeIndexCompareMode(param_1,param_2);
  return;
}


