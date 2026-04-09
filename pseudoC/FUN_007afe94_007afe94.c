// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afe94
// Entry Point: 007afe94
// Size: 72 bytes
// Signature: undefined FUN_007afe94(void)


void FUN_007afe94(FoliageSystemDesc *param_1,uint *param_2)

{
  uint uVar1;
  MultiLayer *this;
  
  this = (MultiLayer *)FoliageSystemDesc::getMultiLayer(param_1,*param_2,true);
  if (this != (MultiLayer *)0x0) {
    uVar1 = FoliageSystemDesc::MultiLayer::createLayer(this,param_2[4],*(char **)(param_2 + 8),true)
    ;
    param_2[0x42] = 1;
    param_2[0x40] = uVar1;
  }
  return;
}


