// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0154
// Entry Point: 007b0154
// Size: 72 bytes
// Signature: undefined FUN_007b0154(void)


void FUN_007b0154(FoliageSystemDesc *param_1,uint *param_2)

{
  uint uVar1;
  State *this;
  
  this = (State *)FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (this != (State *)0x0) {
    uVar1 = FoliageSystemDesc::State::createShape(this,true);
    param_2[0x42] = 1;
    param_2[0x40] = uVar1;
  }
  return;
}


