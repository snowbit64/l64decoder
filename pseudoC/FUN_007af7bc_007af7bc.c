// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af7bc
// Entry Point: 007af7bc
// Size: 24 bytes
// Signature: undefined FUN_007af7bc(void)


void FUN_007af7bc(DensityMapUpdater *param_1,uint *param_2)

{
  DensityMapUpdater::setUpdateMinMaxValue
            (param_1,*param_2,param_2[4],param_2[8],*(bool *)(param_2 + 0xc));
  return;
}


