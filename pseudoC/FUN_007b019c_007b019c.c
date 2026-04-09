// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b019c
// Entry Point: 007b019c
// Size: 76 bytes
// Signature: undefined FUN_007b019c(void)


void FUN_007b019c(FoliageSystemDesc *param_1,uint *param_2)

{
  uint uVar1;
  Shape *this;
  
  this = (Shape *)FoliageSystemDesc::getShape
                            (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],true);
  if (this != (Shape *)0x0) {
    uVar1 = FoliageSystemDesc::Shape::createLod(this,true);
    param_2[0x42] = 1;
    param_2[0x40] = uVar1;
  }
  return;
}


