// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbf9c
// Entry Point: 007bbf9c
// Size: 60 bytes
// Signature: undefined FUN_007bbf9c(void)


FoliageBendingSystem * FUN_007bbf9c(uint *param_1)

{
  FoliageBendingSystem *this;
  
  this = (FoliageBendingSystem *)operator_new(0x4e0);
                    /* try { // try from 007bbfc0 to 007bbfc7 has its CatchHandler @ 007bbfd8 */
  FoliageBendingSystem::FoliageBendingSystem(this,*param_1,1,(float)param_1[4]);
  return this;
}


