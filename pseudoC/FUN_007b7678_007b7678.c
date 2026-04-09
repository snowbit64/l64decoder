// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7678
// Entry Point: 007b7678
// Size: 20 bytes
// Signature: undefined FUN_007b7678(void)


void FUN_007b7678(long param_1,float *param_2)

{
  Precipitation *this;
  
  this = (Precipitation *)0x0;
  if (param_1 != 0) {
    this = (Precipitation *)(param_1 + -0x10);
  }
  Precipitation::setDropCountScale(this,*param_2);
  return;
}


