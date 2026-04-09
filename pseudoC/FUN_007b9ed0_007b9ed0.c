// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9ed0
// Entry Point: 007b9ed0
// Size: 20 bytes
// Signature: undefined FUN_007b9ed0(void)


void FUN_007b9ed0(VehicleNavigationMapGenerator *param_1,uint *param_2)

{
  VehicleNavigationMapGenerator::setBlockingPositionState
            (param_1,*param_2,(float)param_2[4],*(bool *)(param_2 + 8));
  return;
}


