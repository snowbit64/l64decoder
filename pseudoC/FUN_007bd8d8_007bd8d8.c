// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd8d8
// Entry Point: 007bd8d8
// Size: 24 bytes
// Signature: undefined FUN_007bd8d8(void)


void FUN_007bd8d8(PedestrianSystem *param_1,uint *param_2)

{
  PedestrianSystem::setBlockingPositionState
            (param_1,*param_2,(float)param_2[4],(float)param_2[8],*(bool *)(param_2 + 0xc));
  return;
}


