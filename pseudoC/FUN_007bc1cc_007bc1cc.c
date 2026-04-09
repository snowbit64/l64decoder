// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc1cc
// Entry Point: 007bc1cc
// Size: 56 bytes
// Signature: undefined FUN_007bc1cc(void)


DensityMapEntity * FUN_007bc1cc(char **param_1)

{
  DensityMapEntity *this;
  
  this = (DensityMapEntity *)operator_new(0x28);
                    /* try { // try from 007bc1ec to 007bc1f3 has its CatchHandler @ 007bc204 */
  DensityMapEntity::DensityMapEntity(this,*param_1,true);
  return this;
}


