// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aff88
// Entry Point: 007aff88
// Size: 68 bytes
// Signature: undefined FUN_007aff88(void)


void FUN_007aff88(FoliageSystemDesc *param_1,uint *param_2)

{
  uint uVar1;
  Layer *this;
  
  this = (Layer *)FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (this != (Layer *)0x0) {
    uVar1 = FoliageSystemDesc::Layer::createState(this,true);
    param_2[0x42] = 1;
    param_2[0x40] = uVar1;
  }
  return;
}


